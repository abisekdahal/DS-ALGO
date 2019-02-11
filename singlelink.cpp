#include<iostream>
using namespace std;

struct node{
	int data;
	node *link;
	
};
node *head;
insertion_beg(int data){
	node *p=new node();
	p->data=data;
	p->link=NULL;
	if(head!=NULL){
		p->link=head;
		}head=p;
	
}
insertion_end(int data){
	node *p=new node();
	node * temp=head;
	p->data=data;
	p->link=NULL;
	while(temp->link!=NULL){
		temp=temp->link;
	}
	temp->link=p;
	
	
}
void reverse_rec(){
	node *p=head;
	if(p->link==NULL){
		head=p;
		return;
	}
	//node *head;
	reverse_rec(p->link);
	node *q=p->link;
	q->link=p;
	p->link=NULL;
	

}
reverse(){
	node *prev,*current,*next;
	prev=NULL;
	current=head;
	while(current!=NULL){
		next=current->link;
		current->link=prev;
		prev=current;
		current=next;
	}
	head=prev;
}




insertion_at_any(int data,int n){
if (n==1)insertion_beg(data);
else{
	node *p=new node();
	p->data=data;
	p->link=NULL;
	node * temp=head;
	for(int i=0;i<n-2;i++){
      temp=temp->link;
	 
	}
	p->link=temp->link;
	temp->link=p;
	
}
}
display(){
	node *temp=head;
while(temp!=NULL){
	printf("%d ",temp->data);
	temp=temp->link;
}
	
}
int main(){
	 /* int n;
	cout<<"Enter the Number of to be inserted in link list \n";
	cin>>n;
	for(int i=0;i<n;i++){
		int q;
		cout<<"Enter the Number"<<endl;
		cin>>q;
		insertion_beg(q);
		
		display();
		printf("\n");
	}
	insertion_end(855); */
	
insertion_at_any(10,1);
insertion_at_any(20,1);
insertion_at_any(30,1);
insertion_at_any(40,1);	
insertion_at_any(54,3);	
	display();
	cout<<endl;
	reverse();
	display();
	cout<<endl;
//reverse_rec(head);
}


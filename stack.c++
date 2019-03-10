#include<iostream>
using namespace std;
#define size 100
 int stack[size];
 int top=-1;

void push(int data)
   {
   	if(top==size-1){
   		cout<<"Stack if Full"<<endl;
	   }

	else{
		top++;
		stack[top]=data;
	}
	
	 
   }
   
int pop(){
	if(top==-1){
		cout<<"Empty Stack ";
	}
	else {
		top--;
	}
}

void display(){
	for(int i=0;i<=top;i++)
	cout<<stack[i]<<" ";
}
int main(){
	
	push(10);
	push(20);
	display();
	printf("\n");
	pop();
	display();
	
}

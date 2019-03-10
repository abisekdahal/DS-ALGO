#include<iostream>
using namespace std;
#define size 100
 int queue[size];
 int front,rear=-1;

void enqueue(int data)
   {
   	if(rear==size-1){
   		cout<<"Queue if Full"<<endl;
	   }
	if(front==-1){
		front=front+1;
	
	}
	else{
		rear++;
		queue[rear]=data;
	}
	
	 
   }
   
int dequeue(){
	if(rear==front==-1){
		cout<<"Empty Queue";
	}
	else {
		front=front+1;
	}
}

void display(){
	for(int i=front;i<=rear;i++)
	cout<<queue[i]<<" ";
}
int main(){
	
	enqueue(10);
	enqueue(20);
	display();
	printf("\n");
	dequeue();
	display();
	
}

#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};
Node* front = NULL;
Node* rear = NULL;

void display();
void enqueue(int value);
void dequeue();
int peek();


int main() {
	enqueue (1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	display() ;
	cout<<endl;
	dequeue();
	display();
	cout<<endl;
	cout<< "peek =" << peek()<<endl;

  return 0;
}

void display(){
 if(front == NULL){
		cout<<"Queue is empty"<<endl ;
	}
	else{
		Node* current = front;
		while(current != NULL){
			cout<< current->data <<"\t" ;
			current = current->next ;
		}
	}	
}

void enqueue(int value){
	Node* new_node = new Node ;
	new_node->data = value;
	new_node->next = NULL;
	
	if(front == NULL){
	  front = rear = new_node;	
	}
	else{
		rear->next = new_node;
		rear = new_node;
	}
}

void dequeue(){
  if(rear == NULL){
		cout<<"Queue is empty"<<endl ;
	}
  else if (front == rear){
		  	Node* ptr = front;
		  	front = rear = NULL;	
		    delete(ptr);
  }
  else{
		Node* ptr = front;
		front = front->next ;	
		delete(ptr);
		}
}

int peek(){
  if(front == NULL){
		cout<<"Queue is empty"<<endl ;
		return -1;
	}
	else{
			return front->data;
		}
}





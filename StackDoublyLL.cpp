#include <iostream>
using namespace std;

struct DoublyNode{
	int data;
	struct DoublyNode *next;
	struct DoublyNode *prev;
};
 
DoublyNode* createNode(int val){
	DoublyNode *temp = new DoublyNode;
	temp->data = val;
	return temp;
}

//complete the functions
class Stack{
	DoublyNode *tail;
	int s;
	
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		cout<<"constructor is Called\n";
		tail=NULL;
		s=0; 
	}
	
	//push the value at the back
	void push(int val){
	    if(tail==NULL){
	        DoublyNode* temp=createNode(val);
	        tail=temp;
	        temp->next=NULL;
	    }
	    else{
	        DoublyNode* temp=createNode(val);
	        tail->next=temp;
	        temp->prev=tail;
	        tail=temp;
	    }
	    s++;
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
	}
	
	int top(){
		cout<<"returning the value at top or last\n";
		return tail->data;
	}
	
	void pop(){
	    tail=tail->prev;
	    s--;
		cout<<"removing the last element\n";
	}
	
	int size(){
		cout<<"return the size of the queue\n";
		return s;
	}
	
	bool isEmpty(){
		cout<<"returning if the stack is empty\n";
		if(s>0){
		    return 0;
		}
		else{
		    return 1;
		}
	}
};

int main() {
	Stack s; //constructor is called on this line
	s.push(4);
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	s.push(5);
	s.push(3);
	cout<<"front: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	return 0;
}

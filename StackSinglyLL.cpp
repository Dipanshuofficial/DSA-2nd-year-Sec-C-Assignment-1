#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};
 
Node* createNewNode(int val){
	Node *temp = new Node;
	temp->data = val;
	return temp;
}

//complete the functions
class Stack{
	Node *head;
	Node *tail;
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
	    Node* temp=createNewNode(val);
	    if(tail==NULL){
	        tail=head=temp;
	    }
	    else{
    	    tail->next=temp;
    	    tail=temp;
	    }
		cout<<"pushing the val: "<<val<<" at the back of stack\n";
		s++;
	}
	
	int top(){
		cout<<"returning the value at top or last\n";
		return tail->data;
	}
	
	void pop(){
		cout<<"removing the last element\n";
		Node* temp=head;
		int t=s;
		while(t>1){
		    temp=temp->next;
		    t--;
		}
		tail=temp;
		s--;
	}
	
	int size(){
		cout<<"return the size of the stack\n";
		return s;
	}
	
	bool isEmpty(){
		cout<<"returning if the stack is empty\n";
		if(s>0){
		    return 0;
		}
		return 1;
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

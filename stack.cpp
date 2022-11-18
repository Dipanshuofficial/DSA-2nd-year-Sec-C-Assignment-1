#include <iostream>
using namespace std;
 
//complete the functions
class Stack{
	int A[100000];
	int end=sizeof(A)/sizeof(int);
 
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		cout<<"constructor is Called\n\n";
		end=0;
	}
 
	//push the value at the back
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the back of the stack\n\n";
		A[end]=val;
		end++;
	}
 
	int top(){
		cout<<"returning the value at top or last\n\n";
		return A[end-1];
	}
 
	void pop(){
		cout<<"removing the last element\n\n";
		end--;
	}
 
	int size(){
		cout<<"return the size of the stack\n\n";
		return end;
	}
 
	bool isEmpty(){
		cout<<"returning if the stack is empty\n\n";
		if(end==0){
		    return 1;
		}
		else{
		    return 0;
		}
	}
};
 
int main() {
	Stack s; //constructor is called on this line
	s.push(4);
	s.push(5);
	s.push(6);
	cout<<"top: "<<s.top()<<"\n\n";
	cout<<"size: "<<s.size()<<"\n\n";
	s.pop();
	cout<<"empty: "<<s.isEmpty()<<"\n\n";
 
	s.push(5);
	s.push(3);
	cout<<"front: "<<s.top()<<"\n\n";
	cout<<"size: "<<s.size()<<"\n\n";
	s.pop();
	cout<<"empty: "<<s.isEmpty()<<"\n\n";
 
	cout<<"top: "<<s.top()<<"\n\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n\n";
	cout<<"empty: "<<s.isEmpty()<<"\n\n";
	
	return 0;
}

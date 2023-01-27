#include <bits/stdc++.h>
using namespace std;
class maxHeap{
    vector<int> A;
    int parent(int i){
        return ((i-1)/2);
    }
    void heapify(vector<int>& s){
        for(int i=0; i<s.size();i++){
            int child=i;
            while(s[child]>s[parent(child)]){
                swap(s[child],s[parent(child)]);
                child=parent(child);
            }
        }
    }
    public:
        maxHeap(vector<int> arr){
            A=arr;
        }
        int top(){
            return A[0];
        }
        void pop(){
            swap(A[0],A[A.size()-1]);
            A.pop_back();
            heapify(A);
        }
        void insert(int a){
            A.push_back(a);
            heapify(A);
        }
        int Hsize(){
            return A.size();
        }
        void print(){
            cout<<"\nHeap: ";
			for(int a:A){
				cout<<a<<" ";
			}
			cout<<"\n";
        }
};
int main() {
	vector<int>A= {4,2,6,5,8,9,7,6,1,3,10};
	maxHeap heap = maxHeap(A);
 
	cout<<"Top: "<<heap.top()<<"\n";
	heap.pop();
	cout<<"top after pop: "<<heap.top()<<"\n";
	cout<<"size after pop: "<<heap.Hsize()<<"\n";
	heap.insert(12);
	cout<<"top after insert: "<<heap.top()<<"\n";
	heap.print();
	return 0;
}

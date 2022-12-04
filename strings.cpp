#include <iostream>
#include <string>
using namespace std;
void swap(string a, string b){
    char temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout << a << " " << b;
    
}
int main() {
	// Complete the program
    string a,b;
    cin >> a;
    cin >> b;
    cout << a.size()<< " "<< b.size()<< "\n";
    cout << a+b << "\n";
    swap(a,b);
    return 0;
}

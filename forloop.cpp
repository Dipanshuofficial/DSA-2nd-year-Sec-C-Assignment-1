#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i=a;i<=b; i++){
        if(i<=9){
            if(i==1)
                printf("one\n");
            else if(i==2)
                printf("two\n");
            else if(i==3)
                printf("three\n");
            else if(i==4)
                printf("four\n");
            else if(i==5)
                printf("five\n");
            else if(i==6)
                printf("six\n");
            else if(i==7)
                printf("seven\n");
            else if(i==8)
                printf("eight\n");
            else if(i==9)
                printf("nine\n");
        }
        else if (i%2==0) {
            printf("even\n");
        }
        else if (i%2!=0) {
            printf("odd\n");
        }
    }
    return 0;
}

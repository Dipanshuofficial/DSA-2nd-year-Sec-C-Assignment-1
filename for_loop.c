#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char* string(int s){
    if(s==1){
        return "one";
    }
    else if(s==2){
        return "two";
    }
    else if(s==3){
        return "three";
    }
    else if(s==4){
        return "four";
    }
    else if(s==5){
        return "five";
    }
    else if(s==6){
        return "six";
    }
    else if(s==7){
        return "seven";
    }
    else if(s==8){
        return "eight";
    }
    else if(s==9){
        return "nine";
    }
    else if(s>9 && s%2==0){
        return "even";
    }
    else{
        return "odd";
    }
}

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(int i=a; i<=b;i++){
        printf(string(i));
        printf("\n");
    }

    return 0;
}


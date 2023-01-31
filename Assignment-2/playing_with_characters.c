#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char ch,s[100],sen[122];
    scanf("%c", &ch);
    scanf("%s", &s);
    scanf(" %[^\n]%*c", &sen);
    printf("%c\n%s\n%s",ch,s,sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

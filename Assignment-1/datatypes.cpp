#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    char ch;
    int i;
    long li;
    float f;
    double d;
    scanf("%d %ld %c %f %lf", &i, &li, &ch, &f, &d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf", i, li, ch, f, d);
    return 0;
}

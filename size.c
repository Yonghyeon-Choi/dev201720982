#include <stdio.h>

int main(void){
    int a=4;
    char b='a';
    float c=3.14f;
    double d=3.14;

    printf("%zd\n%zd\n%zd\n%zd\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
    return 0;
}

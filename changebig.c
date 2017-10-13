#include <stdio.h>

int main(void){
    char big[100], cap[100];
    int a, b;
    printf("Please input small letter of english");
    scanf("%s", cap);
    a=sizeof(cap)/sizeof(char);
    for(b=0; b<a; b++){
        if((cap[b]>='a')&&(cap[b]<='z')){
            big[b]=cap[b]-('a'-'A');
        }
    }
    printf("big letter : %s\n", big);
    printf("small letter : %s\n", cap);

    return 0;
}

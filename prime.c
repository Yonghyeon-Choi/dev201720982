#include <stdio.h>

int main (void){
    int num, i, j, k;
    printf("Enter interger number larger than 2 : "); scanf("%d", &num);
    for(i=2; i<=num; i++){
        for(j=2; j<=i-1; j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            printf(" %d", i);
        }
    }
    
    return 0;
}

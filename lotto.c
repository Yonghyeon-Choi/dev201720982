#include <stdio.h>
int check(int *lottonum, int *mynum){
    int i, j;
    int count=0;
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            if(lottonum[i]==mynum[j]){
                count+=1;
            }
        }
    }
    return count;
}

int main(void){
    int num[6]={6,7,20,25,42,45};
    int cnum[6];
    int i;

    printf("LOTTO\nPlease choice six numbers\n");
    for(i=0; i<6; i++){
        scanf("%d", &cnum[i]);
    }
    printf("This week Lotto numbers\n");
    for(i=0; i<6; i++){
        printf("%d ", num[i]);
    }
    printf("\nNumber of matching numbers : %d\n", check(num,cnum));
    
    return 0;
}

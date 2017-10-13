#include <stdio.h>

int main(void){
    char hard[5]="apple";
    char soft[5];
    char ch;
    int i=0;
    printf("#### English Small Letter Game ####\n");
    while(1){
        //soft[i]=getchar();
        ch=getchar();

        if(hard[i]==ch){//soft[i]){
            printf("\n%d correct\n", i+1);
            i++;
        } else if(hard[i]< ch){//soft[i]){
            printf("\nleft\n");
        } else if(hard[i]> ch){//soft[i]){
            printf("\nright\n");
        }

        if(soft[4]=='e'){
            printf("\nAll spelling is {apple}\n");
            break;
        }
    }
    
    return 0;
}

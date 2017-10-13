#include <stdio.h>

int main(void){
    int rich;
    double grade;
    int tuition=1000000;

    printf("Monthly income : "); scanf("%d", &rich);
    printf("Grade : "); scanf("%lf", &grade);

    if(rich>=100){
        if(grade>=4.0){
            tuition*=0.8;
        }
        else{
            tuition=1000000;
        }
    }
    else if(rich<100){
        tuition*=0.6;
    }
    printf("Next semester tuition is %dwon\n", tuition);
    
    return 0;
}

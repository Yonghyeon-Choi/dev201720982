#include <stdio.h>

int main(void){
    int use, remainder, fee;
    
    printf("Enter used this month electricity (kw) : "); scanf("%d", &use);
    remainder=use%100;

    if(use>=1 && use<=100){
        fee=370+remainder*52.0;
    }
    else if(use>=101 && use<=200){
        fee=660+100*52.0+remainder*88.5;
    }
    else if(use>=201 && use<=300){
        fee=1130+100*52.0+100*88.5+remainder*127.8;
    }
    else if(use>=301 && use<=400){
        fee=2710+100*52.0+100*88.5+100*127.8+remainder*184.3;
    }
    else if(use>=401 && use<=500){
        fee=5130+100*52.0+100*88.5+100*127.8+100*184.3+remainder*274.3;
    }
    else if(use>=500){
        fee=9330+100*52.0+100*88.5+100*127.8+100*184.3+100*274.3+remainder*494.0;
    }
    
    fee*=1.09;

    printf("This month fee is %dwon\n", fee);

    return 0;
}

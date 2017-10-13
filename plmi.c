#include <stdio.h>

int main(void){
    int a, b;
    char c;
    int result;

    printf("calculator (int) : "); scanf("%d%c%d",&a,&c,&b);
    if(c=='+'){
        result=a+b;
    }
    else if(c=='-'){
        result=a-b;
    }
    else if(c=='/'){
        result=a/b;
    }
    else if(c=='*'){
        result=a*b;
    }

    printf("%d%c%d=%d\n",a, c, b, result);

    return 0;

}

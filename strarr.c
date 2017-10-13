#include <stdio.h>

int main(void)
{
    char *arr[5]={"hello","my","name","is","choi yonghyeon"};
    int a;

    for(a=0;a<5;a++)
    {
        printf("%s ", arr[a]);
    }
    printf("\n");
    
    return 0;
}

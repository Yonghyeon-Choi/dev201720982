#include <stdio.h>

int main(void){
    char *str[20]={"Hi", "Hello", "my", "name", "is", "Loren"};

    for(int i=0; i<10; i++){
        printf("%s ", str[i]);
    }
    
    printf("\n");

    return 0;
}

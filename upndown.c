#include <stdio.h>

void up(int *arr, int len){
    for(int i=0; i<len-1; i++){
        for(int j=0; j<len-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(void)
{
    int arr[5];
    int i, j;

    for(i=0; i<sizeof(arr)/sizeof(int); i++){
        printf("insert %d number : ", i+1);
        scanf("%d", &arr[i]);
    }

    up(arr, sizeof(arr)/sizeof(int));

    for(i=0; i<sizeof(arr)/sizeof(int); i++){
        printf("%d \n", arr[i]);
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main(void){
        int i, j, n;
            int p[2][n];

                printf("�迭�� �� �� : "); fflush(stdout); scanf("%d", &n);

                    printf("[�غ�� �迭]\n");
                        for(i=0; i<2; i++){
                                    if(i==1) printf("\n");
                                            for(j=0; j<n-1; j++){
                                                            p[i][j]=rand()%4;
                                                                        printf("%d ",p[i][j]);
                                                                                }
                                                                                        for( ;j<n;j++){
                                                                                                        p[i][j]=-(rand()%4);
                                                                                                                    printf("%d ",p[i][j]);
                                                                                                                            }
                                                                                                                                }
                                                                                                                                    return 0;
}


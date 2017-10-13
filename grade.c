#include <stdio.h>

int total(int kor, int eng, int mat);
double average(int tot);
void print_title(void);

int main(void){
    print_title(); 
    return 0;
}

int total(int kor, int eng, int mat){
    int tot=kor+eng+mat;
    return tot;
}

double average(int tot){
    double aver=(double)tot/3.0;
    return aver; 
}

void print_title(void){
    printf("===========Report Card===========\n\n");
    printf("korean english math total average\n");
    printf("  %d     %d     %d   %d    %.1lf\n", 80, 70, 91, total(80,70,91), average(total(80,70,91))); 
}

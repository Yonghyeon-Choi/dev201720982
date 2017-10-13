#include <stdio.h>

int main(void){
    int dis, vel;
    int hour, min;
    double sec;

    printf("Please enter distance and speed : "); scanf("%d %d", &dis, &vel);
    
    hour=dis/vel;
    min=(dis%vel)/vel*60;
    sec=(double)(((dis%vel)/vel*60-min)*60);
    
    printf("\nhour : %d, min : %f, sec : %.3f\n", hour, min, sec);
}

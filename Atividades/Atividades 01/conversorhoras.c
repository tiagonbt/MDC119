#include<stdio.h>

int main(){

    int seg=3000;
    
    int horas;
    seg = seg%3600;

    int min = seg/60;

    seg = seg%60;

    printf("Sao %d horas, %d minutos, %d segundos",horas,min,seg);
    
    return 0;



}
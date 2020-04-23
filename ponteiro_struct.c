#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main () {

    int mult;
    for(mult=1; mult<100; mult++){
        if (mult%3==0){
            printf ("%d\n", -mult);
        }
    }
    
    return 0;
}

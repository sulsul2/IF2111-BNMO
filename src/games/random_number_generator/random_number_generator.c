#include <stdio.h>
#include <stdlib.h>
#include "random_number_generator.h"

void RNG(){
    printf("RNG Telah dimulai. Uji keberuntungan Anda dengan menebak X.");
    srand(time(NULL));
    int X = rand() % 20;
    int Y = -999;
    while (Y!=X){
        printf("Tebakan: ");
        scanf("%d",&Y);
        if (Y>X){
            printf("Lebih kecil\n");
        }
        else if(Y<X){
            printf("Lebih besar\n");
        }
    }
    printf("Ya, X adalah %d", X);
}


/*
int main(){
    RNG();
    
    int score;
    int x = 20;
    if (score<10){
        RNG(x*2);
    }
    else if (score<20){
        RNG(x+24);
    }
    else if (score<30){
        RNG(x-11);
    }
    else if (score<40){
        RNG(x*3);
    }
    else {
        RNG(x+27);
    }
*/ 
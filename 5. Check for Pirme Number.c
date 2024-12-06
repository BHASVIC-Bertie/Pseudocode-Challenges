//
// Created by bertie.taylor24 on 06/12/2024.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int IS_PRIME(void){
    int number;
    if (number <= 1){
        printf("Not prime\n");
    }
    for (int i = 2; i < number - 1; i++){
        if(number % i = 0){
        printf("Prime\n");
        }}


    return 0;
}
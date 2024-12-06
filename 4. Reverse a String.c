//
// Created by bertie.taylor24 on 06/12/2024.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {

  char Stringword[12] = "interesting";
  char reversedWord[strlen(Stringword)];
  for (int i = 0; i < strlen(Stringword); i++){
      reversedWord[i]=Stringword[strlen(Stringword)-i];
  }
  printf("the reversed word is %c",reversedWord);





return 0;}
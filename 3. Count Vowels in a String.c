#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(void) {
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    char length[10];
    int totalVowels;
    printf("text.[i]");
    scanf("%s", length);
    for (int I = 0; I < sizeof(length-1); I++){
        for(int X = 0; X < 4; X++){
            if(length(I) == vowels[X]){
                totalVowels++;
            }}}
    printf("%d",totalVowels);
return 0;
}
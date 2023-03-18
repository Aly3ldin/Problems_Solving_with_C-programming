#include<stdio.h>
#include<cs50.h>

int main (void ){

    int length = get_int(" how many score ? \n");
    int scores[length];
    int result = 0;
    for (int j = 0 ; j < 3 ; j++){

   scores [ j ] = get_int("nubmer: ");
   result += scores[j];
    }
    printf("average %f \n " , result / (float)length);

}
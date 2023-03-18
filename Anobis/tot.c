# include <stdio.h>
#include <cs50.h>
int main (void){

     string name = get_string ("what is your name ?");
        printf(" Hello, %s\n" ,name);


         int num1 =get_int("please enter num1 : ");
         int num2 =get_int("please enter num2 : ");

           int result =get_int ("The result = %i\n" ,num1 + num2);
}
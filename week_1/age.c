# include <stdio.h>
#include <cs50.h>

double calc_age(double age){
    double reslut =  age * 365.25;
     return  reslut ;

}
int main (void){
     int days = calc_age(20.5);
      int hours = days * 24;
     printf(" the hours that you lived is %i \n " ,hours);
    calc_age(20.5);
}co
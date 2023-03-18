# include <stdio.h>
# include <cs50.h>


float dicount (float price , int percent );


int main (void){



      float first = get_float( " Enter main price : ");
      int percent_off = get_int( " Enter percent off : ");
      float sale = dicount ( first,  percent_off );

     printf( " Sale price : %.2f \n ", sale );

}
float dicount (float price , int percent ){

return price * (100 - percent)/100;


}
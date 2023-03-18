#include <stdio.h>
#include <cs50.h>
void hello (int n)
{  int x =0;
do {
 printf( " hello my dear \n ");
   ++x;
}

while ( x < n );

}
int main (void){

    hello(5);
}
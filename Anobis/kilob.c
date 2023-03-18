#include <stdio.h>
#include <cs50.h>
int main (void )
{
 /*  int x = get_int ("x = ");
   int y = get_int ("y = ");

   if ( x > y )
   {     printf(" x is more than y \n " );                        }

      else if ( x < y)
      {   printf (" x is less than y \n ");      }

     else {  printf(" x == y \n ");                     }
*/

       char c = get_char(" Do you agree ? \n");

          if ( c == 'y' || c == 'Y') {
             printf(" you are agreed \n ");
          }
        else if ( c == 'n' || c == 'N'){
           printf(" you aren't agreed \n ");
        }
}
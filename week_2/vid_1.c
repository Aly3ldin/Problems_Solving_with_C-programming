#include<stdio.h>
#include<cs50.h>

int main (void ){
    for (  int i = 0 ; i < 4 ; i++){
    string name = get_string("What is your name ? ");
    printf("Hello, %s \n" ,name );

}
}
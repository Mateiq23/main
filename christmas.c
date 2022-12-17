#include <stdio.h>
#include <csbootcamp.h>

int main()
{
    int a;
    
    get_int("Introduceti valoarea numarului natural N: ");
    
    {
    if(a%7){
    printf("Merry \n");
    }
    else if (a%11){
    printf("Christmas \n");
    }
    else if (a%77){
    printf("Christmas \n");
    }
    else{
    printf("%i ",a);
    }
    }
}
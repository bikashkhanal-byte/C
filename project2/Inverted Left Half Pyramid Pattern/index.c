#include <stdio.h>

int main(){
    int rows = 7;

    for(int i = 0 ; i < rows ; i++)
    {
         for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }

    for(int k = 0 ; k <= rows-i-1 ; k++)
    {
        printf(" *");
    }
    printf("\n");
    
    }
    return 0;
}
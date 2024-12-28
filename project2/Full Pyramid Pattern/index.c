# include <stdio.h>

int main(){

    int rows =  7;
    
    for(int i = 0 ; i < rows ; i ++ ) // row
    {

        for(int j = 0 ; j < rows -i -1; j++ )
        {
            printf(" ");
        }

        for(int j = 0; j<=i  ; j++ ) // column
        {

        printf(" *" );
        }

        printf("\n");
    }

    return 0;
    } 

    
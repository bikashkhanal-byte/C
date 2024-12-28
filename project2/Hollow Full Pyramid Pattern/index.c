# include <stdio.h>

int main(){

    int rows =  10;
    
    for(int i = 0 ; i < rows  ; i ++ ) // row
    {

        for(int j = 0 ; j < rows - i  ; j++ ) //spacing
        {
            printf(" ");
      
        }
        
       for (int j = 0; j <= 2 * i + 1 ; j++) {
            
        // j == 0 for left *   j == 2 * i +1 for right *   i == rows-1 for bottom * 

            if (j == 0 || j == 2 * i + 1 || i == rows -1 ) {
                // Print stars for edges and the last row
                printf("*");
            } else {
                // Print spaces inside the pyramid
                printf(" ");
            }
    }
        printf("\n");

    
}
    return 0;

}

#include <stdio.h>

int main() {
    int n, i, j;
    
    

    printf("Enter number of rows (half diamond): ");
    scanf("%d", &n);
    

    // Upper hollow pyramid
    for(i = 1; i <= n; i++) {
            

        // spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        

        // stars with hollow logic
        for(j = 1; j <= 2*i - 1; j++) {
            if (j == 1 || j == 2*i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        
    }

    // Lower inverted hollow pyramid
    for(i = n - 1; i >= 1; i--) {

        // spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        

        // stars with hollow logic
        for(j = 1; j <= 2*i - 1; j++) {
            if (j == 1 || j == 2*i - 1)
                printf("*");
            else
                printf(" ");
        }
        
        printf("\n");
        
    }
    

    return 0;
    
}



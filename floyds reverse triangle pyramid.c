

#include <stdio.h>

int main() {
    int n, i, j, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

  
    int total = n * (n + 1) / 2;

    for(i = n; i >= 1; i--) { // Start from the last row
        for(j = 1; j <= i; j++) {
            printf("%d ", total);
            total--;
        }
        printf("\n");
    }
  

    return 0;
}

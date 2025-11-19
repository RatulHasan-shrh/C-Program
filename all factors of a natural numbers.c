

#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a natural number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
  

    for(i = 1; i <= num; i++) {
        if(num % i == 0) {   // if i divides num
            printf("%d ", i);
        }
    }

    return 0;
  
}

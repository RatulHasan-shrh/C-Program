
#include <stdio.h>

int main() {
    int N, i;

    printf("Enter a number N: ");
    scanf("%d", &N);
  

    printf("Numbers from 1 to %d:\n", N);
    for(i = 1; i <= N; i++) {
        printf("%d ", i);
    }
  
    printf("\n");
  

    return 0;
}

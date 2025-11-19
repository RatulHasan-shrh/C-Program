

#include <stdio.h>

int main() {
    int n, i;
    long long f1 = 0, f2 = 1, f3;
  

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Fibonacci numbers at even indexes:\n");

   
    for(i = 0; i < n; i++) {
        if(i == 0) {
            f3 = 0;
        } else if(i == 1) {
            f3 = 1;
        } else {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }

        if(i % 2 == 0) {   // even index
            printf("%lld ", f3);
        }
    }

    return 0;
}

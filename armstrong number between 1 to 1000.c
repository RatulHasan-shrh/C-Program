

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n;
    double result;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        originalNum = num;
        n = 0;
        result = 0;

        // Count number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            n++;
        }

      

        originalNum = num;

        // Calculate sum of powers of digits
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;

          
        }
        

        // Check if the number is Armstrong
        if ((int)result == num) {
            printf("%d ", num);
        }
    }
    

    printf("\n");
    return 0;
}

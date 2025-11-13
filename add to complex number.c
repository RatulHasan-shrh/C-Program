#include <stdio.h>

struct Complex {

    float real;
    float imag;

};

int main() {

    struct Complex num1, num2, sum;

    printf("Enter first complex number:\n");
    printf("Enter real part: ");
    scanf("%f", &num1.real);
    printf("Enter imaginary part: ");
    scanf("%f", &num1.imag);


    printf("\nEnter second complex number:\n");
    printf("Enter real part: ");
    scanf("%f", &num2.real);
    printf("Enter imaginary part: ");
    scanf("%f", &num2.imag);

    // Add real and imaginary parts
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;


    printf("\nSum = %.1f + %.1fi\n", sum.real, sum.imag);


    return 0;

}

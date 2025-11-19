

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest;
    
   
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    
    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);
    
    printf("Enter the time (in years): ");
    scanf("%lf", &time);
    
   
    compoundInterest = principal * pow((1 + rate / 100), time);
  
    
    printf("The amount after %.2lf years is: %.2lf\n", time, compoundInterest);
    printf("The compound interest is: %.2lf\n", compoundInterest - principal);
  
    
    return 0;
}

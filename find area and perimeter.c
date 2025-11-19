

#include <stdio.h>

#define PI 3.14159

int main() {
    int choice;
    float length, width, side, radius;
    float area, perimeter;
  

    printf("Choose a shape:\n");
    printf("1. Rectangle\n2. Square\n3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
         
            printf("Enter length and width: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            perimeter = 2 * (length + width);
            printf("Area = %.2f\nPerimeter = %.2f\n", area, perimeter);
            break;

       
            printf("Enter side: ");
            scanf("%f", &side);
            area = side * side;
            perimeter = 4 * side;
            printf("Area = %.2f\nPerimeter = %.2f\n", area, perimeter);
            break;

        tf("Enter radius: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            perimeter = 2 * PI * radius;
            printf("Area = %.2f\nPerimeter = %.2f\n", area, perimeter);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdbool.h>

int main() {

    int input;
    double num1, num2;
    bool quit = false;
    
    //Like in the previous, not much to be explained that wasn't explained in the first question (TemperatureAnalyzer)
    while(true) {
        printf("Please select from one of these options:\n0: Addition\n1: Subtraction\n2: Multiplication\n3: Division\n4: Quit\n");
        scanf("%d", &input);
        switch(input) {
            case 0:
                printf("Please input two numbers to be added.\n");
                scanf("%lf %lf", &num1, &num2);
                printf("The sum of %.2f and %.2f is %.2f!\n", num1, num2, (num1+num2));
                break;
            case 1:
                printf("Please input two numbers to be subtracted.\n");
                scanf("%lf %lf", &num1, &num2);
                printf("The difference of %.2f and %.2f is %.2f!\n", num1, num2, (num1-num2));
                break;
            case 2:
                printf("Please input two numbers to be multiplied.\n");
                scanf("%lf %lf", &num1, &num2);
                printf("The product of %.2f and %.2f is %.2f!\n", num1, num2, (num1*num2));
                break;
            case 3:
                printf("Please input two numbers to be divided.\n");
                scanf("%lf %lf", &num1, &num2);
                if(num2 == 0) {
                    printf("You can't divide by 0!\n");
                }
                else {
                    printf("The product of %.2f and %.2f is %.2f!\n", num1, num2, (num1/num2));

                }
                break;
            case 4:
                printf("Thank you for using this program!");
                quit = true;
                break;
            default: 
                printf("That is not a valid option!\n");
        }
        //Used since you can't "double break" in a switch to escape from the switch and the loop it's in.
        if(quit == true) {
            break;
        }
    }

    return 0;
}
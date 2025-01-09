#include <stdio.h>

union Convert {
    int theInt;
    float theFloat;
};

int main() {
    union Convert intFloat;

    printf("Please enter an float value.\n");
    scanf("%f", &intFloat.theFloat);
    printf("The original value was: %.2f\n", intFloat.theFloat);
    
    intFloat.theInt = (int)intFloat.theFloat;
    

    printf("The new value is: %d", intFloat.theInt);
    
    return 0;
}
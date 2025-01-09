#include <stdio.h>
//Includes booleans
#include <stdbool.h>

int main() {

    //Basic input and if statment useage, not much to explain
    int input = 0;
    while(true) {
        printf("Please input a grade, enter a negative number to quit.\n");
        scanf("%d", &input);

        if(input >= 70) {
            printf("Your grade (%d) is a distinction!\n", input);
        }
        else if(input <= 69 && input >= 60) {
            printf("Your grade (%d) is a merit!\n", input);
        }
        else if(input <= 59 && input >= 40) {
            printf("Your grade (%d) is a pass!\n", input);
        }
        else if(input <= 39 && input >= 0) {
            printf("Your grade (%d) is a fail!\n", input);
        }
        else {
            printf("That you for using this program!");
            break;
        }
    }

    return 0;
}
#include <stdio.h>

struct information {
    
    char firstName[100];
    char lastName[100];
    //This is a string so that the contact number can be properly formated
    char phoneNumber[100];
    int age;
};

void getInformation(struct information i) {
    printf("First name: %s\nLast name: %s\nAge: %d\nPhone number: %s", i.firstName, i.lastName, i.age, i.phoneNumber);
}

int main() {

    struct information i;
    printf("Please enter your first name.\n");
    scanf("%s", &i.firstName);
    printf("Please enter your last name.\n");
    scanf("%s", &i.lastName);
    printf("Please enter your age.\n");
    scanf("%d", &i.age);
    printf("Please enter your phone number.\n");
    scanf("%s", &i.phoneNumber);
    printf("You entered this information:\n");
    getInformation(i);

    return 0;
}


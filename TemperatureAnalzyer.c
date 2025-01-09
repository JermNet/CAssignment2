#include <stdio.h>

int main() {
    
    //The array of temperatures, specifying celsius or fahrenheit doesn't matter as long as the user knows to put in all the same type of temperatures
    float temperatures[7];
    //These will be used later for, the names make it clear what each variable is used for
    float highest, lowest, average, sum = 0;
    
    printf("Please enter 7 temperatures of the same unit.\n");
    /*Loops through the array to fill in every value. The operation that i is less than gets the size of the array in bits then divides it by the size of one of it's elements to get
    the length of the array. This is done in case, say, someone where to change this code so it works with any number, not just 7*/ 
    for(int i=0; i < (sizeof(temperatures)/sizeof(temperatures[0])); i++) {
        //Asks for the temperature
        printf("Please input temperature number %d:\n", i+1);
        //Receives the temperatue and puts it into the current element of the array
        scanf("%f", &temperatures[i]);
        //The current temperature is also added to the sum to get the average later
        sum += temperatures[i];

    }

    //Simply sets highest and lowest to the first value in the array so that everything can be compared to these numbers with ease
    highest = lowest = temperatures[0];
    /*This calculates the temperatures for highest and lowest by checking every value and only changing it if it's higher or lower respectively. It starts at 1 instead of 0 here so
    as to no be redundant by checking index 0 with itself*/
    for(int i = 1; i < (sizeof(temperatures)/sizeof(temperatures[0])); i++) {
        if(temperatures[i] > highest) {
            highest = temperatures[i];
        }
        //Else if could be used here but that would not work if both highest and lowest are the same number so I went with two ifs
        if(temperatures[i] < lowest) {
            lowest = temperatures[i];
        }
    }

    //Calculating the average, this could be done before or after the second for loop but I decided to put it here
    average = sum / (sizeof(temperatures)/sizeof(temperatures[0]));

    //.2f truncates the variables to 2 decimal places for ease of viewing
    printf("The highest temperature is %.2f\nThe lowest temperature is %.2f\nThe average temperature is %.2f", highest, lowest, average);
    
    return 0;
}
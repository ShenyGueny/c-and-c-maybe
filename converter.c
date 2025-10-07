#include <ctype.h>
#include <stdio.h>
//
// Created by Shawn on 2025-10-06.
//
int main() {
    int userInput_1 = 0;
    char userInput_2;
    float value;

    while (userInput_1 != 5) {
        //initial decisions
        printf("\n");
        printf("Unit Converter\n");
        printf("Enter an integer action: \n");
        printf("1: Grams and Ounces\n");
        printf("2: Square meter and square yard\n");
        printf("3: Litres and Pints\n");
        printf("4: Meters and Feet\n");
        printf("5: quit\n");
        printf("\n");
        // get user input
        printf("Enter Input: ");
        scanf(" %d",&userInput_1);

        switch (userInput_1) {
            case 1:
                printf("Enter G to input grams enter O to enter ounces: ");
                scanf(" %c",&userInput_2);

                // make user input not case-sensitive
                userInput_2 = toupper(userInput_2);
                if (userInput_2  == 'G') {
                    printf("Please enter a value: ");
                    scanf(" %f",&value);
                    // calculate conversion and output
                    float result = value * 0.03527;
                    printf("It is %.2f ounces.\n", result);

                }

                else if (userInput_2 == 'O') {
                    printf("Please enter a value: ");
                    scanf(" %f",&value);
                    float result = value / 0.03527;
                    printf("It is %.2f grams.\n", result);
                }
                else {
                    printf("Invalid input. Try again please");
                }
                break;

            case 2:
                // process user input
                printf("Enter M for square meters enter Y for square yards: ");
                scanf(" %c",&userInput_2);
                userInput_2 = toupper(userInput_2);

                // decide path and exercise output
                if (userInput_2  == 'Y') {
                    printf("Please enter a value: ");
                    scanf(" %f",&value);
                    float result = value / 1.196;
                    printf("It is %.2f counces.\n", result);
                }
                else if (userInput_2 == 'M') {
                    printf("Please enter a value: ");
                    scanf(" %f",&value);
                    float result = value * 1.196;
                    printf("It is %.2f square yards.\n", result);
                }
                // handle unexpected cases
                else {
                    printf("Invalid input. Try again please");
                }
                break;
            case 3:
                // process user input
                printf("Enter L to enter Litres, enter P to enter square tards: ");
                scanf(" %c",&userInput_2);
                userInput_2 = toupper(userInput_2);

                // decide path and exercise output
                if (userInput_2  == 'L') {
                    printf("Please enter a value: ");
                    scanf(" %f",&value);
                    float result = value * 2.113;
                    printf("It is %.2f pints.\n", result);
                }

                else if (userInput_2 == 'P') {
                    printf("Please enter a value: ");
                    scanf(" %f",&value);
                    float result = value / 2.113;
                    printf("It is %.2f litres.\n", result);
                }
                else {
                    printf("Invalid input. Try again please\n");
                }
                break;
            case 4:
                // process user input
                printf("Enter M to enter Meters enter Y to enter Feet: ");
                scanf(" %c",&userInput_2);
                userInput_2 = toupper(userInput_2);

                // decide path and exercise output
                if (userInput_2  == 'M') {
                    printf("Please enter a value: ");
                    scanf(" %f",&value);
                    float result = value * 3.28;
                    printf("It is %.2f feet.\n", result);
                }
                else if (userInput_2 == 'F') {
                    printf("Please enter a value: ");
                    scanf(" %f",&value);
                    float result = value / 3.28;
                    printf("It is %.2f meters.\n", result);
                }
                // handle unexpected cases
                else {
                    printf("Invalid input. Try again please");
                }
                break;
        }

    }

}
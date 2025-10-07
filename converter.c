#include <stdio.h>
//
// Created by Shawn on 2025-10-06.
//
int main() {
    int userInput_1 = 0;
    char userInput_2;

    while (userInput_1 != 5) {
        //initial decisions
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
        scanf("%d",&userInput_1);

        switch (userInput_1) {
            case 1:
                printf("Enter G to input grams enter O to enter ounces: ");
                scanf("%f",&userInput_2);

        }

    }

}
#include <stdio.h>

int main() {
    int userInput;

    // arrays for numbers associating them to their strings
    char *units0_19[] = {
        "", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "fifteen",
        "sixteen", "seventeen", "eighteen", "nineteen"
    };

    char *tensNames[] = {
        "", "", "twenty", "thirty", "forty", "fifty",
        "sixty", "seventy", "eighty", "ninety"
    };
    
    // program loops until the user types 0
    while (1) { 
        printf("Enter a number (0–999): ");
        scanf("%d", &userInput);

        // typing zero to end
        if (userInput == 0) {
            printf("zero\n");
            break; // stop the program
        }

        // Check valid range
        if (userInput < 0 || userInput > 999) {
            printf("Number out of range! Try again.\n");
            continue;
        }

        // Hundreds
        if (userInput >= 100) {
            int hundred = userInput / 100;
            printf("%s hundred", units0_19[hundred]);
            userInput %= 100;
            if(userInput != 0){printf(" ");}
        }

        // Tens and Ones
        if (userInput > 0) {
            if (userInput < 20) {
                printf("%s", units0_19[userInput]);
            } else {
                int tens = userInput / 10;
                int ones = userInput % 10;

                printf("%s", tensNames[tens]);
                if (ones > 0)
                    printf(" %s", units0_19[ones]);
            }
        }

        printf("\n"); // new line before next input
    }

    printf("Program ended.\n");
    return 0;
}

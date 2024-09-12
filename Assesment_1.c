//						ASSESSMENT-1

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function prototypes
void reverseString(char[]);
void concatenateStrings(char[], char[]);
void checkPalindrome(char[]);
void copyString(char[]);
void stringLength(char[]);
void frequencyOfCharacter(char[]);
void countVowelsAndConsonants(char[]);
void countSpacesAndDigits(char[]);

int main() {
    char str1[100], str2[100];
    int choice;
    char continueChoice;

    do {
        // Display menu
        printf("\n----- String Operations Menu -----\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Check if a string is palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Find the length of a string\n");
        printf("6. Frequency of a character in a string\n");
        printf("7. Find number of vowels and consonants\n");
        printf("8. Find number of blank spaces and digits\n");
        printf("Enter your choice (1-8): ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character after choice input

        // Perform operations based on user's choice
        switch (choice) {
            case 1:
                printf("Enter a string to reverse: ");
                gets(str1);
                reverseString(str1);
                break;
            case 2:
                printf("Enter the first string: ");
                gets(str1);
                printf("Enter the second string: ");
                gets(str2);
                concatenateStrings(str1, str2);
                break;
            case 3:
                printf("Enter a string to check palindrome: ");
                gets(str1);
                checkPalindrome(str1);
                break;
            case 4:
                printf("Enter a string to copy: ");
                gets(str1);
                copyString(str1);
                break;
            case 5:
                printf("Enter a string to find its length: ");
                gets(str1);
                stringLength(str1);
                break;
            case 6:
                printf("Enter a string: ");
                gets(str1);
                frequencyOfCharacter(str1);
                break;
            case 7:
                printf("Enter a string to count vowels and consonants: ");
                gets(str1);
                countVowelsAndConsonants(str1);
                break;
            case 8:
                printf("Enter a string to count spaces and digits: ");
                gets(str1);
                countSpacesAndDigits(str1);
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
                break;
        }

        // Ask user if they want to continue
        printf("\nDo you want to continue? (y/n): ");
        scanf("%c", &continueChoice);
        getchar(); // To consume the newline character after input
    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}

// Function to reverse a string
void reverseString(char str[]) {
    int len = strlen(str);
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
}

// Function to concatenate two strings
void concatenateStrings(char str1[], char str2[]) {
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

// Function to check if a string is palindrome
void checkPalindrome(char str[]) {
    int len = strlen(str);
    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}

// Function to copy a string
void copyString(char str[]) {
    char copy[100];
    strcpy(copy, str);
    printf("Copied string: %s\n", copy);
}

// Function to find the length of a string
void stringLength(char str[]) {
    printf("Length of the string: %ld\n", strlen(str));
}

// Function to find the frequency of a character in a string
void frequencyOfCharacter(char str[]) {
    char ch;
    int count = 0;
    printf("Enter the character to find frequency: ");
    scanf("%c", &ch);
    getchar(); // Consume newline character

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("Frequency of '%c' in the string: %d\n", ch, count);
}

// Function to count vowels and consonants
void countVowelsAndConsonants(char str[]) {
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
}

// Function to count spaces and digits
void countSpacesAndDigits(char str[]) {
    int spaces = 0, digits = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            spaces++;
        } else if (isdigit(str[i])) {
            digits++;
        }
    }
    printf("Blank spaces: %d, Digits: %d\n", spaces, digits);
}


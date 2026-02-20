#include <stdio.h>
#include <ctype.h>
int main() {

    char letter;

    printf("enter the letter");

    scanf("%c",&letter);

    if(isalpha(letter)) {


    switch(letter) {

        case 'a':
        printf("The entered letter is a vowel");

        break;

        case'e':
        
         printf("The entered letter is a vowel");

        break;

        case'i':

         printf("The entered letter is a vowel");

        break;

        case'o':

         printf("The entered letter is a vowel");

        break;

        case'u':

         printf("The entered letter is a vowel");

        break;
        
        case 'A':
        printf("The entered letter is a vowel");

        break;

        case'E':
        
         printf("The entered letter is a vowel");

        break;

        case'I':

         printf("The entered letter is a vowel");

        break;

        case'O':

         printf("The entered letter is a vowel");

        break;

        case'U':

         printf("The entered letter is a vowel");

        break;

        default:

        printf("consonant");
    }
    }
    else {
        
        printf("r u dumb");
    }
        
        




    return 0;
}
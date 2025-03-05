#include <ctype.h>
#include <stdio.h>

int main(void){
    char ch;
    int score = 0;

    printf("Enter a word: ");
    ch = getchar();
    while (ch != '\n'){
        char upper = toupper(ch);
        if (upper >= 65 && upper <= 90) {
            printf("%c | %d\n", upper, upper);
            switch (upper) {
                case 65: 
                    score += 1;
                    break;
                case 66: 
                    score += 3;
                    break;
                case 67: 
                    score += 3;
                    break;
                case 68: 
                    score += 2;
                    break;
                case 69:
                    score += 1;
                    break; 
                case 71: 
                    score += 4;
                    break;
                case 72: 
                    score += 2;
                    break;
                case 73: 
                    score += 4;
                    break;
                case 74: 
                    score += 1;
                    break;
                case 75: 
                    score += 8;
                    break;
                case 76: 
                    score += 5;
                    break;
                case 77: 
                    score += 1;
                    break;
                case 78:
                    score += 3;
                    break;
                case 79: 
                    score += 1;
                    break;
                case 80: 
                    score += 1;
                    break;
                case 81: 
                    score += 3;
                    break;
                case 82: 
                    score += 10;
                    break;
                case 83:
                    score += 1;
                    break;
                case 84: 
                    score += 1;
                    break;
                case 85: 
                    score += 1;
                    break;
                case 86: 
                    score += 4;
                    break;
                case 87: 
                    score += 4;
                    break;
                case 88: 
                    score += 8;
                    break;
                case 89:
                    score += 4;
                    break;
                case 90:  
                    score += 10;
                    break;
            }
        } 
        ch = getchar();
        
    }
    printf("Scrabble value: %d", score);
    return 0;
}
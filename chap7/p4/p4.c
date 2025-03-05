#include <stdio.h>

int main(void){
    char ch;

    printf("Enter phone number: ");
    ch = getchar();
    while (ch != '\n'){
        if (ch >= 65 && ch <= 90) {
            switch (ch){
                case 65: 
                case 66: 
                case 67: 
                    printf("2");
                    break;
                case 68: 
                case 69: 
                case 71: 
                    printf("3");
                    break;
                case 72: 
                case 73: 
                case 74: 
                    printf("4");
                    break;
                case 75: 
                case 76: 
                case 77: 
                    printf("5");
                    break; 
                case 78:
                case 79: 
                case 80: 
                    printf("6");
                    break;
                case 81: 
                case 82: 
                case 83:
                    printf("7");
                    break;
                case 84: 
                case 85: 
                case 86: 
                case 87: 
                    printf("8");
                    break;
                case 88: 
                case 89:
                case 90:  
                    printf("9");
                    break;
            }
        } else {
            printf("%c", ch);
        }
        ch = getchar();
    }
    return 0;
}
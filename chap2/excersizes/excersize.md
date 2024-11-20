# Chapter 2 Excersizes
## 1. Create a hello world program in C
## 2. Consider
```C
#include <stdio.h>
int main(void){
    printf("Parkinson's Law:\nWork expands so as to ")
    printf("fill the time\n")
    printf("available for its completion.\n")
    return 0;
}
```
a. Identify the directives and statements in this program
Directives are the text before the body of code, contained by the # sign. The directives of the above program is just the including of stdio.h
The statements for the program can be found in the body of the main function.
b. The program prints: "Parkinson's Law: " on one line, "Work expands so as to fill the time" on one line, and "available for its completion. " on one line

## 3. Rewrite dweight.c
### Original
```C
/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void){
    int height, length, width, volume, weight;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
```

### Rewritten
```C
/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void){
    int height = 8, length = 12, width = 10, volume, weight;
    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}
```

## 4. Print declared variables without initialization
- See file e4.c

## 5. Not legal C identifiers
a. 100_bottles
    - not valid, cannot start with a number
b. _100_bottles
    - valid
c. one__hundred__bottles
    - valid
d. bottles_by_the_hundred_
    - valid

## 6. Why is it not a good idea for an identifier to contain more than one adjacent underscore?
My answer would be because it is hard to read depending on what ide, text editor, whatever. It could easily be read as one underscore. So why not just have it as one underscore instead?

## 7. Which are keywords in C
a. for
    is keyword for for loop
b. If
    is not keyword, no captials allowed
c. main
    is not keyword, defines entry point for C files, not reserved word
d. printf
    is not keyword, defined in stdio.h, not reserved word
e. while
    is keyword, for while loops

## 8. How many tokens in statement?
Statement: 
```C
answer=(3*q-p*p)/3;
```
- 14 tokens

## 9. answer = (3 * q - p * p) / 3;

## 10. Essential spaces:
The only spaces and new lines that are essential are the seperation between the func and directives, inside strings, the return statement, and the seperation between declared data types and their names.

# Problem 1 - Output of program fragment
```C
i = 1;
while (i <= 128) {
    printf("%d ", i);
    i *= 2;
}
```
Ans:
```
1
2
4
8
16
32
64
128
```

# Problem 2 - Output of program fragment
```C
i = 9384;
do {
    printf("%d ", i);
    i /= 10;
} while (i > 0);
```
Ans:
```
9384
938
93
9
```

# Problem 3 - Output of for loop
```C
for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1){
    printf("%d ", i);
}
```
Ans:
```
5
4
3
2
```

# Problem 4 - Which of the statements are not equivalent to the other two
a. `for (i = 0; i < 10; i++)`
b. `for (i = 0; i < 10; ++i)`
c. `for (i = 0; i++ < 10;)`
Ans:
C is different from the other two. Both a and b increment i after the body of code is run, meaning that if i were printed it would print out 0, 1 , 2, ... 9. C increments i before the body of code is run in the condition check so it will print out 1, 2, ... 10

IMPORTANT NOTE FROM SO:
first the condition is checked, then the loop body is executed, then the increment

# Problem 5 - Which of the statements are not equivalent to the other two
a. `while (i < 10)`
b. `for (;i < 10;)`
c. `do {...} while (i < 10)`
Ans:
C is not equivalent to a and b. The code in the do loop will always execute but the code for a and b will not always execute if i is greater or equal to 10.

# Problem 6 - Translate excersize 1 into a for statement
Original:
```C
i = 1;
while (i <= 128) {
    printf("%d ", i);
    i *= 2;
}
```
Ans:
```C
for (i = 1; i <= 128; i *= 2) {
    printf("%d ", i);
}
```

# Problem 7 - Translate excersize 2 into a for statement
Orig:
```C
i = 9384;
do {
    printf("%d ", i);
    i /= 10;
} while (i > 0);
```
Ans:
```C
for (i = 9384; i > 0; i /= 10){
    printf("%d ", i);
}
```

# Problem 8 - Give output from for loop
```C
for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);
```
Ans:
```
10
5
3
2
1
1
1
```
The program should enter an infinite loop where it just prints out 1. This is because it will add 1 to the 1 in the i++ statement, then the 2 will be divided by 2 and give 1, it will be printed out and this will continue forever.

# Problem 9 - Translate excersize 8 into a while loop
Orig:
```C
for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);
```
Ans:
```C
i = 10;
while (i >= 1) {
    printf("%d ", i++);
    i /= 2;
}
```

# Problem 10 - Show how to replace a continue statement into a goto statement
Continue statement:
```C
sum = 0;
for (i = 0; i < 10; i++){
    if (i % 2)
        continue;
    sum += 1;
}
```
Goto statement:
```C
sum = 0;
for (i = 0; i < 10; i++){
    if (i % 2)
        goto start;
    sum += 1;
    start:
    ;
}
```

# Problem 11 - Output of program fragment
```C
sum = 0;
for (i = 0; i < 10; i++){
    if (i % 2)
        continue;
    sum += 1;
}
printf("%d\n", sum)
```
Ans:
```
5
```

# Problem 12 - Make prime checking more efficient
Old:
```C
for (d = 2; d < n; d++>)
    if (n % d == 0)
        break;
```
New (check divisors up to sqrt of n, ??compare d * d to n??):
```C
for (d = 2; d * d <= n; d++)
    if (n % d == 0)
        break;
```

# Problem 13 - Rewrite the loop so that its body is empty
```C
for (n = 0; m > 0; n++){
    m /= 2;
}
```
Ans:
```C
for (n = 0; m > 0; m /= 2, n++){

}
```

# Problem 14 - Fix error in program fragment
```C
if (n % 2 == 0);
    printf("n is even\n");
```
Ans:
```C
if (n % 2 == 0)
    printf("n is even\n");
```
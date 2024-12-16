# Problem 1 - Output of program fragment
```C
i = 1;
while (i <= 128) {
    printf("%d ", i);
    i *= 2;
}
```

# Problem 2 - Output of program fragment
```C
i = 9384;
do {
    printf("%d ", i);
    i /= 10;
} while (i > 0);
```

# Problem 3 - Output of for loop
```C
for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1){
    printf("%d ", i);
}
```

# Problem 4 - Which of the statements are not equivalent to the other two
a. `for (i = 0; i < 10; i++)`
b. `for (i = 0; i < 10; ++i)`
c. `for (i = 0; i++ < 10;)`

# Problem 5 - Which of the statements are not equivalent to the other two
a. `while (i < 10)`
b. `for (;i < 10;)`
c. `do {...} while (i < 10)`

# Problem 6 - Translate excersize 1 into a for statement

# Problem 7 - Translate excersize 2 into a for statement

# Problem 8 - Give output from for loop
```C
for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);
```

# Problem 9 - Translate excersize 8 into a while loop

# Problem 10 - Show how to replace a continue statement into a goto statement

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

# Problem 12 - Make prime checking more efficient
Old:
```C
for (d = 2; d < n; d++>)
    if (n % d == 0)
        break;
```
New (check divisors up to sqrt of n, ??compare d * d to n??):

# Problem 13 - Rewrite the loop so that its body is empty
```C
for (n = 0; m > 0; n++){
    m /= 0;
}
```

# Problem 14 - Fix error in program fragment
```C
if (n % 2 == 0);
    printf("n is even\n");
```
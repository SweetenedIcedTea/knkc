# Problem 1 - Give output from program frags
a.  i = 5; j = 3;
    printf("%d %d", i / j, i % j);
- 1 2
b.  i = 2; j = 3;
    printf("%d", (i + 10) % j);
- 0
c.  i = 7; j = 8; k = 9;
    printf("%d", (i + 10) % k / j);
- 1
d.  i = 1; j = 2; k = 3;
    printf("%d", (i + 5) % (j + 2) / k);
- 0

# Problem 2
If i and j are positive integers, does (-i) / j always have the same values as -(i/j)? Justify your answer.
    No, in C99 they do but in C89, it will either round up or down where (-7) / 5 can either equal -1 or -2.

# Problem 3 - Value of expression in C89
a. 8 / 5
- 1
b. -8 / 5
- -1 or -2
c. 8 / -5
- -1 or -2 <-- ?
d. -8 / -5
- 1

# Problem 4 - Problem 3 but in C99
a. 1
b. -1
c. -1
d. 1

# Problem 5 - Value of expression in C89
a. 8 % 5
- 3
b. -8 % 5
- -3 or 2
c. 8 % -5
- -3 or 2
d. -8 % -5
- 3

# Problem 6 - Problem 5 but in C99
a. 8 % 5
- 3
b. -8 % 5
- -3
c. 8 % -5
- -3
d. -8 % -5
- 3

# Problem 7 - Computing UPC check digit procedure
- Correct
    Subtract 1 from the total
    Compute the remainder when the adjusted total is divided by 10
    Subtract the remainder from 9
- Incorrect
    Compute the remainder when total is divided by 10
    Subtract the remainder from 10

Ans: If the total is something ending with a zero you get a wrong answer of 10 instead of 9.

# Problem 8 - upc.c orignal vs modified
9 - ((total - 1) % 10) vs (10 - (total % 10)) % 10
Ans: If total is 140 the original path gets the result 9, the other path gets 0. So it is incorrect.

# Problem 9 - Output
a.  i = 7; j = 8;
    i *= j + 1;
    printf("%d %d", i, j);
- 63, 8

b.  i = j = k = 1;
    i += j += k;
    printf("%d %d %d", i, j, k);
- 3 2 1

c.  i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("%d %d %d", i, j, k);
- 0, -1, 3

d.  i = 2; j = 1, k = 0;
    i *= j *= k;
    printf("%d %d %d", i, j, k);
- 0 0 0

# Problem 10
a.  i = 6; 
    j = i += i;
    printf("%d %d", i, j);
- 12, 12

b.  i = 5;
    j = (i -= 2) + 1;
    printf("%d %d", i, j);
- 3 4

c.  i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d", i, j);
- 2.5 8.5

d.  i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d", i, j);
- 6 9

# Problem 11
a.  i = 1;
    printf("%d ", i++ - 1);
    printf("%d", i);
- 1

b.  i = 10; j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d", i, j);
- 6
- 11 6

c.  i = 7; j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d", i, j);
- 0
- 8 7

d.  i = 3; j = 4, k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d", i, j, k);
- 4
- 4 5 4

# Problem 12
a.  i = 5; 
    j = ++i * 3 - 2;
    printf("%d %d", i, j);
- 6 13

b.  i = 5;
    j = 3 - 2 * i++;
    printf("%d %d", i, j);
- 6 -9

c.  i = 7;
    j = 3 * i-- + 2;
    printf("%d %d", i, j);
- 6 20

d.  i = 7;
    j = 3 + --i * 2;
    printf("%d %d", i, j);
- 6 17

# Problem 13
Is ++i or i++ EXACTLY the same to i += 1?
i++ is exactly the same because if you were to call i += 1 in its own statement it would return whatever i was + 1

# Problem 14 - Add parenthesis to expressions
a. a * b - c * d + e
- (a * b) - (c * d) + e
b. a / b % c / d
- ((a / b) % c) / d
c. - a - b + c - + d
- ((- a) - b) + (c - (+ d))
d. a * - b / c - d
- ((a * (- b)) / c) - d

# Problem 15 -  Give values of i and j after these expressions (i = 1 and j = 2 initially)
a. i += j;
- i = 3, j = 2
b. i--;
- i = 0
c. i * j / i;
- i = 1, j = 2
d. i % ++j;
- i = 1, j = 3
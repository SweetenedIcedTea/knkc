# Problem 1 - Give decimal value of integer constants
a. 077
b. 0x77
c. 0XABC

# Problem 2 - Which are not legal constants in C?
a. 010E2
b. 32.1E+5
c. 0790
d. 100_000
e. 3.978e-2

# Problem 3 - Which are not legal types in C?
a. short unsigned int
b. short float
c. long double
d. unsigned long

# Problem 4 - c is variable of type char, which statements are illegal?
a. i += c; // i has type int
b. c = 2 * c - 1;
c. putchar(c);
d. printf(c);

# Problem 5 - Which of the following if not a legal way to write the number 65?
a. "A"
b. 0b1000001
c. 0101
d. 0x41

# Problem 6 - On the following items of data, which of the types char, short, int, or long is the smallest one to guratneed to be large enough to store the item
a. Days in a month
b. Days in a year
c. Minutes in a day
d. Seconds in a day

# Problem 7 - For the character escapes, give the equivalent octal escape
a. \b
b. \n
c. \t
d. \t

# Problem 8 - Repeat excersize 7, but for the equivalent hexadecimal escape

# Problem 9 - i and j are types int. What is the type of expression i / j + 'a'?

# Problem 10 - i is type int, j is type long, k is type unsigned int. What is type of expression: i + (int) j * k?

# Problem 11 - i is type int, f is type foat, and d is type double. What is type of: i * f / d?

# Problem 12 - i is type int, f is type float, and d is type double. What conversions take place during: d = i + f?

# Problem 13 - Give values and type of expressions
```C
char c = "\1"
short s = 2;
int i = -3;
long m = 5;
float f = 6.5f;
double d = 7.5;
```
a. c * i
b. s + m
c. f / c
d. d / s
e. f - d
f. (int) f

# Problem 14 - Does the statement always compute the fractional part of f correctly? (f and frac_part are floats)? If not what's the problem?
`frac_part = f - (int) f;`

# Problem 15 - Use typedef to create types named Int8, Int16, and Int32. Define the types so they represent 8-bit, 16-bit, and 32-bit integers.
# Problem 1 - Give decimal value of integer constants
a. 077
- 57
b. 0x77
- 119
c. 0XABC
- 2749

# Problem 2 - Which are not legal constants in C?
a. 010E2
 - Legal
b. 32.1E+5
 - Legal
c. 0790
 - Not legal
d. 100_000
 - Not Legal, cannot have _ in a numerical constant
e. 3.978e-2
 - Legal

# Problem 3 - Which are not legal types in C?
a. short unsigned int
 - legal
b. short float
 - not legal, floats are already short
c. long double
 - legal
d. unsigned long
 - legal

# Problem 4 - c is variable of type char, which statements are illegal?
    Note: C treats characters as small integers
a. i += c; // i has type int
 - legal, a character constant is an int type in C
b. c = 2 * c - 1;
 - legal, character will wrap overflow
c. putchar(c);
 - legal, putchar is meant to output a character
d. printf(c);
 - not legal, to print out character variable you need to have the "%c", ch

# Problem 5 - Which of the following if not a legal way to write the number 65?
a. "A"  <- Not legal, character must be enclosed in single quotes
b. 0b1000001 <- Not legal, C doesnt have binary representation
c. 0101
d. 0x41

# Problem 6 - On the following items of data, which of the types char, short, int, or long is the smallest one to guratneed to be large enough to store the item
a. Days in a month 
 - 28-31 <- char
b. Days in a year
- 364-365 <- short
c. Minutes in a day
 - 60 min/hr * 24 hr/day = ~1440 min/day <- short
d. Seconds in a day
 - 60 sec/min * 1440 min/day = ~86400 sec/day <- int

# Problem 7 - For the character escapes, give the equivalent octal escape <- why is there no decimal escape? < WRONG >
a. \b
 - 'b' = 98
 - '\143'
b. \n
 - 'n' = 110
 - '\156'
c. \r
 - 'r' = 114
 - '\162'
d. \t
 - 't' = 116
 - '\164'

# Problem 8 - Repeat excersize 7, but for the equivalent hexadecimal escape  < WRONG >
a. \b
 - 'b' = 98
 - '\x143'
b. \n
 - 'n' = 110
 - '\x156'
c. \r
 - 'r' = 114
 - '\x162'
d. \t
 - 't' = 116
 - '\x164'

# Problem 9 - i and j are types int. What is the type of expression i / j + 'a'?
- int

# Problem 10 - i is type int, j is type long, k is type unsigned int. What is type of expression: i + (int) j * k?
- unsigned int

# Problem 11 - i is type int, f is type float, and d is type double. What is type of: i * f / d?
- double

# Problem 12 - i is type int, f is type float, and d is type double. What conversions take place during: d = i + f?
    first the i is converted to a float, then (float) i + f is converted to a double
 
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
- -3, int
b. s + m
- 7, long
c. f / c
- 6.5, float
d. d / s
- 3.75, double
e. f - d
- -1.0, double
f. (int) f
- 6, int

# Problem 14 - Does the statement always compute the fractional part of f correctly? (f and frac_part are floats)? If not what's the problem?
`frac_part = f - (int) f;`
    It does not handle negatives correctly. You can get a negative fractional component like -3.14 - -3 = -0.14

# Problem 15 - Use typedef to create types named Int8, Int16, and Int32. Define the types so they represent 8-bit, 16-bit, and 32-bit integers.
```C
typedef char Int8;
typedef short Int16;
typedef int Int32;
```
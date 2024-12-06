# Problem 1 - Give output from program frags
a.
```C
i = 2; j = 3;
k = i * j == 6;
printf("%d", k);
```
- 1
b.
```C
i = 5; j = 10; k = 1;
printf("%d", k > i < j);
```
- 1
c.
```C
i = 3; j = 2; k = 1;
printf("%d", i < j == j < k);
```
- 1
d.
```C
i = 3; j = 4; k = 5;
printf("%d", i % j + i < k);
```
- 0

# Problem 2
a.
```C
i = 10; j = 5;
printf("%d", !i < j);
```
- 1
b.
```C
i = 2; j = 1;
printf("%d", !!i + !j);
```
- 1
c.
```C
i = 5; j = 0; k = -5;
printf("%d", i && j || k);
```
- 1
d.
```C
i = 1; j = 2; k = 3;
printf("%d", i < j || k);
```
- 1

# Problem 3 - Illustrate short circut behavior
a.
```C
i = 3; j = 4; k = 5;
printf("%d ", i < j || ++j < k);
printf("%d %d %d", i, j, k)
```
- 1
- 3 4 5
b.
```C
i = 7; j = 8; k = 9;
printf("%d ", i - 7 && j++ < k);
printf("%d %d %d", i, j, k)
```
- 0
- 7 8 9
c.
```C
i = 7; j = 8; k = 9;
printf("%d ", (i = j) || (j = k));
printf("%d %d %d", i, j, k)
```
- 1
- 8 8 9
d.
```C
i = 1; j = 1; k = 1;
printf("%d ", ++i || ++j && ++k);
printf("%d %d %d", i, j, k)
```
- 1
- 2 1 1

# Problem 4 - Write single expression whose value is either -1, 0, or 1 depending on whether i is less than equal to or greater than j respectively
Problem: if i < j return -1, i == j return 0, i > j return 1
```C
int res = (i >= j) ? (i > j): -1
```

# Problem 5 - Is if statement legal
```C
if (n >= 1 <= 10)
    printf("n is between 1 and 10 \n")
```
- The statement is legal but it will not give the correct answer, the first n >= 1 will evaulate to either 0 or 1, then it will compare that to <= 10, which will always be true

# Problem 6
```C
if (n == 1-10)
    printf("n is between 1 and 10 \n")
```
- Unless n is -9, this will not print out anything

# Problem 7 - What does statment print if i = 17 or -17
```C
printf("%d\n", i >= 0 ? i : -i)
```
- if i = 17
- 17
- if i = -17
- 17

# Problem 8 - simplify if statement
```C
if (age >= 13)
    if (age <= 19)
        teenager = true;
    else
        teenager = false;
else if (age < 13)
    teenage = false;
```
- WRONG: if (age >= 13 && age <= 19) teenager = true else teenager = false;
- RIGHT: teenager = (age >= 13 && age <= 19) ? true : false;

# Problem 9 - is if statements equivalent
```C
// first
if (score >= 90)
    printf("A");
else if (score >= 80)
    printf("B");
else if (score >= 70)
    printf("C");
else if (score >= 60)
    printf("D");
else
    printf("F");

// second
if (score < 60)
    printf("F");
else if (score < 70)
    printf("D");
else if (score < 80)
    printf("C");
else if (score < 90)
    printf("B");
else
    printf("A");
```
- Yes they are equivilant: if score is lower or equal to 59 both will print out F. 60 prints out D, etc.

# Problem 10 - give output of program frag
```C
i = 1;
switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
}
```
- onetwo

# Problem 11 - Write switch statement for area codes
Area code   Major city
229         Albany
404         Atlanta
470         Atlanta
478         Macon
678         Atlanta
706         Columbus
762         Columbus
770         Atlanta
912         Savannah

```C
switch (areacode) {
    case 229: printf("Albany"); break;
    case 404: printf("Atlanta"); break;
    case 470: printf("Atlanta"); break;
    case 478: printf("Macon"); break;
    case 678: printf("Atlanta"); break;
    case 706: printf("Columbus"); break;
    case 762: printf("Columbus"); break;
    case 770: printf("Atlanta"); break;
    case 912: printf("Savannah"); break;
    default: printf("Area code not recognized"); break;
}
```
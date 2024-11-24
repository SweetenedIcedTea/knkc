# Chapter 3 Excersizes

## 1. printf outputs

a. printf("%6d,%4d", 86, 1040);

- " 86,1040"
  b. printf("%12.5e", 30.253);
- " 3.02530e+01"
  c. printf("%.4f", 83.162);
- "83.1620"
  d. printf("%-6.2g", .0000009979);
- "9.98e-07"

## 2. Write printf calls to match specifications with float variable x

a. Exponential notation; left-justified in a field of size 8; one digit after decimal point

- printf("%-8.1e", x)
  b. Exponential notation; right-justified in a field of size 10; size digits after the decimal point
- printf("%10.10e", x)
  c. Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point
- printf("%-8.3f", x)
  d. Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point
- printf("%8.f", x)

## 3. Are pairs of scanf format strings equivalent?

a. "%d" vs " %d"
- Equivalent
  b. "%d-%d-%d" vs "%d -%d -%d"
- Not Equivalent: first string can only taken in #-#-#, if there is # -#-#, the latter half will be put back for another scanf call
  c. "%f" vs "%f "
- Equivalent
  d. "%f,%f" vs "%f, %f"
- Equivalent
/-? If scanf just ignores all whitespaces, all of these should be equivalant no?

## 4. scanf assignments with varying conversion specifiers

code: scanf("%d%f%d", &x, &i, &y);
inp: 10.3 5 6

- x = 10, i = 5.0, y = 6

## 5. scanf assignments with varying conversion specifiers

code: scanf("%f%d%f", &x, &i, &y);
inp: 12.3 45.6 789

- x = 12.3, i = 45, y = 789.0

## 6. modify addfrac.c so the user can enter fractions that contain spaces before and after each / character

### Original addfrac.c

```C
/* Adds two fractions */

#include <stdio.h>

int main(void){
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
```

### Modified addfrac.c

```C
/* Adds two fractions */

#include <stdio.h>

int main(void){
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d / %d", &num1, &denom1);
    printf("Enter second fraction: ");
    scanf("%d / %d", &num2, &denom2);
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
```

/-? Im not sure how the spaces are parsed in scanf, from what I remember from the textbook, whitespace doesn't really matter in the format string. It kind of ignores it no? Revise later.

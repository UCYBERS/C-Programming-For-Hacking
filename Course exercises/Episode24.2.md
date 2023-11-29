# C Functions


**Syntax**

```
returnType functionName() {
  ...
  ...
}
```

### Funtion : Example 1 
```c
#include <stdio.h>

void greet() {
  printf("Good Morning\n");
}

int main() {

  greet();
  greet();
  greet();

  return 0;
}

```

**Output**
```
Good Morning
Good Morning
Good Morning

```

## Function Parameters
### Example : 1
```c
#include <stdio.h>

void calculateSquare(int number) {
  int square = number * number;
  printf("Square of %d is %d \n", number, square);
}

int main() {

  calculateSquare(5);

  return 0;
}

```

**Output**
```
Square of 5 is 25



```
### Example : 2

```c
#include <stdio.h>

void addNumbers(int number1, int number2) {
  int sum = number1 + number2;
  printf("Sum of %d and %d is %d", number1, number2, sum);
}


int main() {

  addNumbers(8, 9);

  return 0;
}


```
**Output**
```
Sum of 8 and 9 is 17


```

## Return Types
```c
#include <stdio.h>

int addNumbers(int number1, int number2) {
  int sum = number1 + number2;
  return sum;
}


int main() {

  int result = addNumbers(8, 9);
  printf("Result = %d", result);

  return 0;
}

```
**Output**
```
Result = 17



```
## Function Prototype
```c
#include <stdio.h>

int addNumbers(int number1, int number2);

int main() {

  int result = addNumbers(8, 9);
  printf("Result = %d", result);

  return 0;
}

int addNumbers(int number1, int number2) {
  int sum = number1 + number2;
  return sum;
  printf("After Return");
}

```
**Output**
```
Result = 17


```

## Standard Library Function
```c
#include <stdio.h>
#include <math.h>

int main() {

  float result = sqrt(25);

  printf("Square Root is %f", result);

  return 0;
}

```

**Output**
```

Square Root is 5.00000


```

---

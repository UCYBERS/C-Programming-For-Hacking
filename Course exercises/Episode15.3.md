# abs() Function in C prgramming

In the C programming language, the use of the function abs in C is to return the absolute value of an integer. By integer, it means that the abs() is an arithmetics function. The math.h library contains predefined function abs() for computing the absolute value of integers.

By absolute value, it means the function returns the positive value of an integer. Let's say we have an int value -3, and we want to know what the absolute value of -3 is. So we will use the absolute function and return the absolute value of -3, which is 3.

Let's have a look at the syntax of abs() function :
**Syntax** :

```c
int abs(int x);

```

**Example :** 
```c
#include <stdio.h>
#include <math.h>

int main() {

        printf("%d\n",abs(3-5));

     return 0;
}

```

**Output**
```
2
```

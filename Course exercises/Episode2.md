# C Variables


## Print Line of Text

```c
#include <stdio.h>

int main() {

  int age = 27;
  printf("C Programming");

  return 0;
}
```

**Output**

```
C Programming
```

---
## Print Variable

```c
#include <stdio.h>

int main() {

  int age = 27;
  printf("%d", age);

  return 0;
}
```

**Output**

```
27
```

---
## Print Text and Variable Together

```c
#include <stdio.h>

int main() {
  
  int age = 27;
  printf("Age = %d", age);

  return 0;
}
```

**Output**

```
Age = 27
```

---
## Change Value of Variable

```c
#include <stdio.h>

int main() {

  int age = 27;
  printf("Age = %d ", age);

  age = 32;
  printf("New age =  %d", age);

  return 0;
}
```

**Output**

```
Age: 27 New age: 32
```

---
## Change Value of Variable Example 2

```c
#include <stdio.h>

int main() {

  int age = 27;
  printf("Age: %d\n", age);

  age = 32;
  printf("New age value: %d", age);

  return 0;
}
```

**Output**

```
Age: 27
New age value: 32
```

---
## Assign one variable to another variale

```c
#include <stdio.h>

int main() {

  int firstNumber = 33;
  printf("first Number = %d \n", firstNumber);

  int secondNumber = firstNumber;
  printf("second Number = %d", secondNumber);

  return 0;
}
```

**Output**

```
first Number = 33
second Number = 33
```

## Declare Multiple Variables at once

```c
#include <stdio.h>

int main() {
    int variable1, variable2; 
    return 0;
}
```

```c
#include <stdio.h>

int main() {
    int variable1, variable2 = 25; 
    return 0;
}
```

---
## UCYBERS Quiz

**Q. Can you guess the output of this program?**

```c
#include <stdio.h>

int main() {

  int number1 = 33;
  printf("%d ", number1);
  printf("%d", number2);

  return 0;
}
```

**Options**
a. 33
b. 3333
c. 33 33
d. '33.0'


**Correct Answer: c** 

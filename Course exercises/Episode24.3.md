# C Variable Scope and Storage Class


## Local Scope
```c
#include <stdio.h>

int addNumbers(int number1, int number2) {
  int result = number1 + number2;
  return result;
}

int main() {

  int sum = addNumbers(5, 6);
  printf("Result = %d", sum);

  return 0;
}

```

**Output**
```
Result = 11


```

## Global Scope

```c
#include <stdio.h>

int result;

void addNumbers(int number1, int number2) {
  result = number1 + number2;
}

int main() {

  addNumbers(5, 6);
  printf("Result = %d", result);

  return 0;
}

```
**Output**
```
Result = 11


```

---

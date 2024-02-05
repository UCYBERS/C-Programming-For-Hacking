# C Pointers

 
## Pointer Variables

```c
#include <stdio.h>

int main() {

  int age = 25;

  printf("%p", &age);

  int* ptr = &age;

  printf("\n%p", ptr);

  return 0;
}

```
**Output**
```
0x7ffc875fe0ec
0x7ffc875fe0ec
```

## Access Value using Pointer
```c
#include <stdio.h>

int main() {

  int age = 25;

  int* ptr = &age;

  printf("Address: %p\n", ptr); 

  printf("Value: %d", *ptr);

  return 0;
}

```
**Output**
```
Address: 0x7fff7e4319bc
Value: 25


```
## Change Value using Pointer

```c
#include <stdio.h>

int main() {

  int age = 25;

  int* ptr = &age;

  *ptr = 31;

  printf("%d", age);

  return 0;
}

```
**Output**
```
31
```
---

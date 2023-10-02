# for Loop in C Programming

 **Syntax** :

```c
for (initializationExpression; testExpression; updateExpression) {
  // code inside the for loop
}

```

### Example 1 : print numbers from 1 to 10
```c
#include <stdio.h>

int main() {

  for (int i = 1; i <= 10; i++) {
    printf("%d ", i);
  }

  return 0;
}

```

**Output**
```
1 2 3 4 5 6 7 8 9 10

```

### Example 2 : print numbers from 10 to 1
```c
#include <stdio.h>

int main() {

  for (int i = 10; i >= 1; i--) {
    printf("%d ", i);
  }

  return 0;
}

```

**Output**
```
10 9 8 7 6 5 4 3 2 1

```
### Sum of all the numbers from 1 to 100

```c
#include <stdio.h>

int main() {
  
  int sum = 0;
  
  for (int i = 1; i <= 100; i++) {
    sum += i;
  }

  printf("Sum = %d", sum);
  return 0;
}

```
**Output**
```
Sum = 5050
```

### Fill the array using For and print it

```c
int main(void) {

    int a[10]={5};

    for(int index=0;index<10;index++){
        a[index]=a[index]+2;
    }

    for(int index=0;index<10;index++){
        printf("a[%d] = %d\n",index,a[index]);
    }

  return 0;
}

```
**Output**
```
a[0] = 7
a[1] = 2
a[2] = 2
a[3] = 2
a[4] = 2
a[5] = 2
a[6] = 2
a[7] = 2
a[8] = 2
a[9] = 2

```
---
### The C program asks the user to enter 10 numbers and then print them

```c
int main(void) {

    int a[10];

    for(int index=0;index<10;index++){
        printf("Please enter value %d in the array: ",index);
        scanf("%d",&a[index]);
    }

    for(int index=0;index<10;index++){
        printf("a[%d] = %d\n",index,a[index]);
    }

  return 0;
}


```
**Output**
```
Please enter value 0 in the array: 15
Please enter value 1 in the array: 15
Please enter value 2 in the array: 15
Please enter value 3 in the array: 15
Please enter value 4 in the array: 75
Please enter value 5 in the array: 78
Please enter value 6 in the array: 95
Please enter value 7 in the array: 75
Please enter value 8 in the array: 25
Please enter value 9 in the array: 35
a[0] = 15
a[1] = 15
a[2] = 15
a[3] = 15
a[4] = 75
a[5] = 78
a[6] = 95
a[7] = 75
a[8] = 25
a[9] = 35

```
---

### The C program outputs the max number in the array

```c
#include <stdio.h>

int main(void) {

int a[10]={12,15,60,20,66,40,2,4,44,90};

int max=a[0];

for( int index=0;index<10;index++){
        if(a[index]>max) max= a[index];
}

printf("max = %d\n",max);

  return 0;
}



```
**Output**
```
max = 90
```
---




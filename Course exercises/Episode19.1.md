# C Arrays
# Two Dimensional / 2D Arrays
A two dimensional array has two subscripts/indexes.

The first subscript refers to the row, and the second, to the column.

Its declaration has the following form,
```
data_type array_name [1 dimension size][2 dimension size];


```
### For examples

```
int xInteger[3][4];
float matrixNum [20][25];
```
The first line declares xInteger as an integer array with 3 rows and 4 columns.

Second line declares a as a floating-point array with 20 rows and 25 columns.

### Initialization of multidimensional array
```
int arr[2][3] = { {1, 3, 5}, {2, 4, 6} };


```

## Access Array Elements

```c
#include <stdio.h>

int main() {

  int arr[2][3] = { {1, 3, 5}, {2, 4, 6} };

  printf("%d\n", arr[0][0]);
  printf("%d", arr[1][2]);

  return 0;
}

```
**Output**
```
1
6
```

## Change Array Indexes
```c
#include <stdio.h>

int main() {

  int arr[2][3] = { {1, 3, 5}, {2, 4, 6} };

  arr[0][2] = 7;
  arr[1][1] = 8;

  printf("%d\n", arr[0][2]);
  printf("%d", arr[1][1]);

  return 0;
}

```
**Output**
```
7
8 
```

## Multidimensional Array and for loop

```c
#include <stdio.h>

int main() {

  int arr[2][3] = { {1, 3, 5}, {2, 4, 6} };

  for (int i = 0; i < 2; ++i) {
    for(int j = 0; j < 3; ++j) {
      printf("%d    ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}


```
**Output**
```
1    3    5    
2    4    6
```
 
Q. Which value will we get when we print arr[1][4] from the following array?
```c
int arr[1][4] = { {3, 6, 9, 12}, {2, 4, 6, 8} };
```

**Options:**
1. 82 
1. 5  
1. 0  
1. Random Value


**Answer: 4**

# Arrays with function in C
In C programming, you can pass an entire array to functions. Before we learn that, let's see how you can pass individual elements of an array to functions.
## Pass Individual Array Elements
Passing array elements to a function is similar to passing variables to a function

 
### Example 1: Pass Individual Array Elements

```c
#include <stdio.h>
void display(int age1, int age2) {
  printf("%d\n", age1);
  printf("%d\n", age2);
}

int main() {
  int ageArray[] = {2, 8, 4, 12};

  // pass second and third elements to display()
  display(ageArray[1], ageArray[2]); 
  return 0;
}


```
**Output**
```
8
4
```

### Here, we have passed array parameters to the display() function in the same way we pass variables to a function.
```
// pass second and third elements to display()
display(ageArray[1], ageArray[2]);


```

## We can see this in the function definition, where the function parameters are individual variables:

```c
void display(int age1, int age2) {
  // code
}
```
## Example 2: Pass Arrays to Functions
```c
// Program to calculate the sum of array elements by passing to a function 

#include <stdio.h>
float calculateSum(float num[]);

int main() {
  float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};

  // num array is passed to calculateSum()
  result = calculateSum(num); 
  printf("Result = %.2f", result);
  return 0;
}

float calculateSum(float num[]) {
  float sum = 0.0;

  for (int i = 0; i < 6; ++i) {
    sum += num[i];
  }

  return sum;
}
```
**Output**
```
Result = 162.50

```
To pass an entire array to a function, only the name of the array is passed as an argument
```
result = calculateSum(num);

```
## Pass Multidimensional Arrays to a Function
```c
#include <stdio.h>
void displayNumbers(int num[2][2]);

int main() {
  int num[2][2];
  printf("Enter 4 numbers:\n");
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 2; ++j) {
      scanf("%d", &num[i][j]);
    }
  }

  // pass multi-dimensional array to a function
  displayNumbers(num);

  return 0;
}

void displayNumbers(int num[2][2]) {
  printf("Displaying:\n");
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 2; ++j) {
      printf("%d\n", num[i][j]);
    }
  }
}
```
**Output**
```
Enter 4 numbers:
2
3
4
5
Displaying:
2
3
4
5
```

# for Loop in C Programming
### Sum of all the numbers
**C program to print the sum of all elements in an array** :
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int sum=0;

    for(int i=0;i<10;i++){
        sum+=a[i];
    }
    printf("Sum = %d\n",sum);
    return 0;
}

```
**Output**
```
Sum = 55
```
### C program finds the maximum or largest and second maximum element present in an array.
```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a[10]={1,2,3,15,5,16,7,8,9,10};
    int max=a[0];
    int secondMax=a[0];


    for( int i=0;i<10;i++){
        if(a[i]>max){
              secondMax=max;
              max= a[i];
                }
        else if(a[i]>secondMax)
            secondMax=a[i];
                          }


    printf("Max = %d\n",max);
    printf("Second Max = %d\n",secondMax);


  return 0;
}

```

**Output**
```
Max = 16
Second Max = 15

```
### C program to Reverse an array into another array and print it

```c
#include <stdio.h>

int main(void) {

    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10];

    for(int i=0;i<10;i++){
        b[i]=a[9-i];
}
    for(int i=0;i<10;i++){
        printf("b[%d] = %d\n",i,b[i]);
}
  return 0;
}

```
**Output**
```
b[0] = 10
b[1] = 9
b[2] = 8
b[3] = 7
b[4] = 6
b[5] = 5
b[6] = 4
b[7] = 3
b[8] = 2
b[9] = 1
```

### C program to Reverse an array into the same array and print it

```c
#include <stdio.h>

#define size 10

int main(void) {

  int a[size]={1,2,3,4,5,6,7,8,9,10};



int start=0;
int end=size-1;
for(;start<end;){
int temp=a[start];
a[start]=a[end];
a[end]=temp;
start++;
end--;

}
for(int i=0;i<10;i++){
    printf("a[%d] = %d\n",i,a[i]);
}
return 0;
}


```
**Output**
```
a[0] = 10
a[1] = 9
a[2] = 8
a[3] = 7
a[4] = 6
a[5] = 5
a[6] = 4
a[7] = 3
a[8] = 2
a[9] = 1
```
---

## Programming Task

Q. Can you use the for loop to compute the sum of only odd numbers from 1 to 100. In each iteration, you need to add an odd number to the sum.

  
  sum = sum + 1  
  sum = sum + 3  
  sum = sum + 5  
  ....  
  ....  
  sum = sum + 99

## Solution :
```c
    #include <stdio.h>

int main() {
    int sum = 0;
    for(int i = 1; i <= 100; i = i+2) {
        sum = sum + i;
    }
    printf("Sum of odd numbers from 1 to 100: %d", sum);
    
    return 0;
}
```
**Output**
```
Sum of odd numbers from 1 to 100: 2500
```
---

Q. Tracing a C program containing for loop ?

```c
 #include <stdio.h>

int main(void) {


int i,j;

for(i=1;i<3;i++)
{  for(j=2;j>=1;j--) {
    printf("%d:%d\t",i,j);
    }

printf("\n");  }

//i=1 j=2                     1:2
//i=1 j=1                     1:1
//i=1 j=0                     \n
//i=2 j=2                    2:2
//i=2 j=1                    2:1
//i=2 j=0                     \n
//i=3

  return 0;
}
```

**Output**
```
1:2     1:1
2:2     2:1
```

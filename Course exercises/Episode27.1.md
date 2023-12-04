# Recursion in C program

 
## Example: C Recursion Sum Digits

```c
#include <stdio.h>
#include <stdlib.h>

int sumDigits(int n){
if(n<10){
    return n;
}

return n%10+sumDigits(n/10);

}

int main()
{
    printf("sum digit = %d\n",sumDigits(1234));
    return 0;
}
```
 
**Output**
```
sum digit = 10


```
 

---
## Example: C Recursion Sum two number

```c
#include <stdio.h>
#include <stdlib.h>
int sum(int x,int y){
if(x==0) return y;
if(y==0) return x;

return 1+sum(x-1,y);

}

int main()
{
    printf("sum = %d\n",sum(5,7));
    return 0;
}
```
 
**Output**
```
sum = 12


```
 

---

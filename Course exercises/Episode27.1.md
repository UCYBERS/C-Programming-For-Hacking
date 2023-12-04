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
## Example: C Recursion Tracing

```c
#include <stdio.h>
#include <stdlib.h>
#define size 5

int tracing(int n){

    int x;
    
    if(n<=2){ x=n; }

        else {
            printf("before n: %d\n",n);
            x=tracing(n-1)+n;
            printf("after x: %d\n",x);
            return x+n;
             }

    printf("x = %d\n",x);

    return n;
}

int main()
{
    printf("Result = %d\n",tracing(5));
    
    printf("END\n");
    
    return 0;
}
```
 
**Output**
```
before n: 5
before n: 4
before n: 3
x = 2
after x: 5
after x: 12
after x: 21
Result = 26
END



```
 

---

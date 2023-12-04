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

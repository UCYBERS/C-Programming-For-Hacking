# The conditional operator ( ?: ) in C
Course Link : [https://ucybers.com]()

## Syntax :

```c
test_condition ? expression1 : expression2;
```

## Example: The conditional operator ( ?: )
### Example 1: 
```c
#include <stdio.h>

int main() {


    int a=1,x=60,y=100;

    printf("%d\n",a>0?x:y);

    int i=110;

    if(i<=(x>y?x:y))
        printf("hi\n");
    else printf("Bye\n");

     int r;

    r=x>y?a+2:a-2;
    printf("r = %d\n",r);


  return 0;
}
```

**Output**
```
60
Bye
r = -1

```
### Example 2: Pre-increment and Post-increment in C programming
```c
#include <stdio.h>

int main(void) {
 int r,x,y;
 x= 5;
 y= 7;

 y++;

 printf("y = %d\n",y);

//x=5 y=8

 r= y++ * --x;

 printf("r = %d\ny = %d\nx = %d\n",r,y,x);


  return 0;
}
```

**Output**
```
y = 8
r = 32
y = 9
x = 4
```
## Example 3 :

```c
#include <stdio.h>

int main(void) {
    int x=10,y=13;
    if(x<y-3)
    printf("Hi");
    else
    printf("Bye");


  return 0;
}
```
**Output**
```
Bye
```
## Example 4 :

```c
#include <stdio.h>

int main(void) {

   int x=10,y=13;
   int r;
   r=x+y/2-x*3;

   printf("r = %d\n",r);

  return 0;
}

```
**Output**
```
r = -14
```

---


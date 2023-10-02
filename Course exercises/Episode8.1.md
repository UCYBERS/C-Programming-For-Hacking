# Writing without (and, or) in C Programming

### Example 1 : With the conditional sentence

```c
#include <stdio.h>

int main(void) {
 int a=10,b=13;
 int z;

 if((a>=2&&b<=30)|| (b!=20&&z>0))
  printf("Yes");
else
printf("No");




  return 0;
}

```

**Output**
```
Yes

```
### Example 2 : Removing if statement from previous example
```c
int main(void) {
 int a=10,b=13;
 int z;


   if(a>=2){
     if(b<=30){
     printf("Yes");
     return 0;
     }
   }
   if(b!=20){
     if(z>0)
     printf("Yes");
     else printf("NO");
   }

  return 0;
}

```

**Output**
```
Yes

```

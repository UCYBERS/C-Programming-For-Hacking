# C Library Functions rand() and srand()


## rand()
**Example 1:** 
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=rand();
    
    printf("%d\n",num);
    
    return 0;
}

```

**Output**
```
41


```

**Example 2:**
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={0};

    for(int i=0;i<10;i++){
        a[i]=rand();
        printf("%d ",a[i]);
    }

    return 0;
}

```

**Output**
```
41 18467 6334 26500 19169 15724 11478 29358 26962 24464


```
**Example 3:**
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={0};

    for(int i=0;i<10;i++){
        a[i]=rand()%10;
        printf("%d ",a[i]);
    }

    return 0;
}

```
**Output**
```
1 7 4 0 9 4 8 8 2 4


```

## Generate 10 random numbers from 50 to 75 using rand() function
 (50-75) == 50+rand()%26;
 
 last-first+1 == %
 
 75-50+1=%26
 
 first+rand()%(last-first+1)
 
 50+rand()%26;
 
 
 
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={0};

    for(int i=0;i<10;i++){
        a[i]=50+rand()%26;
        printf("%d ",a[i]);
    }

    return 0;
}


```

**Output**
```
65 57 66 56 57 70 62 54 50 74


```
---
## srand() function
The srand() function is a C library function that determines the initial point to generate different series of pseudo-random numbers. A srand() function cannot be used without using a rand() function. The srand() function is required to set the value of the seed only once in a program to generate the different results of random integers before calling the rand() function.

## Syntax :
```c
srand(time(NULL));



```
**Example :** 
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[10]={0};
    srand(time(NULL));
    for(int i=0;i<10;i++){
        a[i]=20+rand()%11;
        printf("%d ",a[i]);
    }

    return 0;
}

```

**Output**
```
26 27 21 21 25 20 21 24 27 24


```

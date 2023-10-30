# while & do...while loop in C Programming

### Syntax while loop :

```c
while (condition) {
    // statements inside while
}


```

### Example 1 : C program that prints numbers from 1 to 10 while loop
```c
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i=1;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }

    return 0;
}

```

**Output**
```
1
2
3
4
5
6
7
8
9
10
....

```

## do...while Loop

**Syntax :**

```c
do {
    // body of loop
} while(condition);
```
### Example 1: do..while
```c
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i=1;
    do{
        printf("%d\n",i);
        i++;

    }while(i<=10);

    return 0;
}


```
**Output**
```
1 
2 
3 
4
5
6
7
8
9
10 

```
### Example 2: do...while loop with false condition
```c
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    do{
        printf("please enter number: ");
        scanf("%d",&i);

    }while(i<=0);

    return 0;
}

```

**Output**
```
please enter number: -1
please enter number: -5
please enter number: -3
please enter number: 0
please enter number: 5 
```
---
### Example 3: C program to count characters array using while loop
```c
#include <stdio.h>
#include <stdlib.h>

int main(){

   char ucybers[]="Everything related to ethical hacking & cyber security in one place";

   int i=0;
   int length=0;

   while(ucybers[i]!='\0'){
    length++;
    i++;
   }
   printf("The number of character in the text: %d\n",length);
    return 0;
}

```

**Output**
```
The number of character in the text: 67
 
```
---

## Programming Task

Q. A C program to search for a character within an array, and if it finds it, it prints found, and if it does not find it, it prints not found.


## Solution :
```c
#include <stdio.h>
#include <stdlib.h>

int main(){

   char ucybers[]="Cyber Security";
   char key;

   printf("Please enter any character: ");
   scanf("%c",&key);

   int found=0;
   int i=0;

   while(ucybers[i]!='\0'){
        if(ucybers[i]==key) {
            found=1;
            printf("Found in loction %d\n",i);
        }
    i++;
   }

   if(found==0) printf("Not found\n");
    return 0;
}
    
```
**Output**
```
Please enter any character: e
Found in loction 3
Found in loction 7
```

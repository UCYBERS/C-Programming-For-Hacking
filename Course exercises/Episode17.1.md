# Tracing C Program


### Question 1
What is the output of the following code assuming that user input

1 2 3 0 2 0 4 2 0 1 2 2 3 5 3 5

Note, the printf statement is inside the loop.
```c
#include <stdio.h>

int main() {
    int v =1, a, b;

    for(int j=1; j<=10;j++){

                scanf("%d",&a);
                scanf("%d",&b);
                v=v+1;

    if(j==8) break;
    if(j==3) continue;

    switch(a+b){
        case 1: v=v+a;
            break;
        case 3: v=v+b;
            break;
        case 4: v=v-a;
        case 5: v=v-b;
            break;
        default:
            v=v+1;}

    printf("%d\n",v);
}
    return 0;
}
```

**Output**
```
1 2
4
3 0
5
2 0
4 2
8
0 1
9
2 2
6
3 5
8
3 5

```

### Question 2

```c
#include <stdio.h>
#include <stdlib.h>

int main(){ 
    
    char ch;
    char title1[] = "C Programming for hacking";
    char title2[] = "0123456789ABCDE";
    
    ch=title1[4];
    
    printf("%c\n",ch);
    
    for(int i=4;i<=7;i++){
        ch = title1[i];
        title2[i+3]=ch;
    }
    
    title1[4]='\0';
    
    printf("%s\n",title1);
    printf("%s\n",title2);
    
    return 0;
}
```

**Output**
```
o
C Pr
0123456ograBCDE
```

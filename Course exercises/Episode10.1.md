# break and continue in C Programming


### C program prints the numbers from 1-10 except 6/7/8 using continue inside the loop
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1;i<=10;i++){
         if(i>=6&&i<=8) continue;
        printf("%d\n",i);
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
9
10

```

### break statement with decision making statement
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1;i<=10;i++){
        if(i>=6&&i<=8) break;
        printf("%d\n",i);

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
```
## Using break within the GCD (Greatest common divisor) program

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,gcd;

    printf("Please enter two integer number: ");
    scanf("%d%d",&num1,&num2);

    for(int i=(num1<num2?num1:num2) ; i>=1;i--){
        if(num1%i==0&&num2%i==0){
            gcd=i;
            break;
        }
    }

    printf("The GCD = %d\n",gcd);

    return 0;
}

```
**Output**
```
Please enter two integer number: 18 27
The GCD = 9

```

## C program that prints the sum of the numbers from 1-10 excluding 3 using continue Statement
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;

    for(int i=1;i<=10;i++){
        if(i==3){
            continue;
        }
        sum+=i;
    }

    printf("Sum = %d\n",sum);

    return 0;
}
```
**Output**
```
Sum = 52

```
## Example: Tracing a C program containing break and continue
```c
#include <stdio.h>

int main(void) {
int num1,num2;
printf("please enter two integers: ");
scanf("%d%d",&num1,&num2);
//m=12 n=6  //m=11 n=5 //m=10 n=4 //m=9 n=3 //m=8 n=2 m=7 n=1
//m=11 n=5  //m=10 n=4  //m=8 n= 2
  for(; num1>num2;){
    if(num1==7) {break;}
    if(num2%3==0){--num1;--num2; continue;}
   printf("num1 = %d\tnum2 = %d\n",num1,num2);
   --num1;
   --num2;

  }

  return 0;
}
```
**Output**
```
please enter two integers: 12 6
num1 = 11       num2 = 5
num1 = 10       num2 = 4
num1 = 8        num2 = 2

```

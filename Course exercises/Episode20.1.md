# Two dimensional (2D) arrays in C programming

 
### Enter row by row of elements into 2d array
```
#include <stdio.h>
#include <stdlib.h>
#define rows 4
#define cols 3
int main()
{
    int a[rows][cols];

    printf("Please enter 12 integers: ");

    for(int i=0;i<rows;i++){
     for(int j=0;j<cols;j++){
       scanf("%d",&a[i][j]);
     }
  }

  printf("\nThe array is :\n");
  for(int i=0;i<rows;i++){
     for(int j=0;j<cols;j++){
    printf("%d ",a[i][j]);}
    printf("\n");
  }

    return 0;
}

```
### Enter column by column of elements into 2d array
```
#include <stdio.h>
#include <stdlib.h>
#define rows 4
#define cols 3
int main()
{
    int a[rows][cols];

    printf("Please enter 12 integers: ");

    for(int i=0;i<cols;i++){
     for(int j=0;j<rows;j++){
       scanf("%d",&a[j][i]);
     }
  }

  printf("\nThe array is :\n");
  for(int i=0;i<rows;i++){
     for(int j=0;j<cols;j++){
    printf("%d ",a[i][j]);}
    printf("\n");
  }

    return 0;
}

```

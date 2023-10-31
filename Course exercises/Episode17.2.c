/*
 c program takes a student survey and displays the frequency that people rated 1-5
 and print frequancy histogram as a * and Print the mode, which is the most frequent value
  */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int answers[24]={1,2,3,4,5,4,5,2,3,4,5,2,1,3,2,3,4,5,2,3,3};
    int f[6]={0};
    int maxf=0,mode;

    for(int i=1;i<6;i++){
        printf("f[%d] = %d\n",i,f[i]);
    }
    printf("-------------------------\n");

    for(int i=0;i<24;i++){
        f[answers[i]]++;
    }
    for(int i=1;i<6;i++){
        printf("f[%d] = %d\n",i,f[i]);
    }
    printf("-------------------------\n");

    for(int i=1;i<6;i++){
        printf("%d: ",i);
        for(int j=1;j<=f[i];j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++){
        if(f[i]>maxf) {maxf=f[i];
                      mode=i;}
    }
    printf("the mode: %d\n",mode);

     return 0;
}



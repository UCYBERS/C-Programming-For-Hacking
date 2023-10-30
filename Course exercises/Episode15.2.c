/*
write a program to find the maximum in an integer array of size s and place it at the end
using one loop only, don't use another array
  */

#include <stdio.h>
# define s 5

int main() {
    int a[s]={1,14,16,1,5};

       for(int i=0;i<s-1;i++){
           if(a[i]>a[i+1]){
                int temp=a[i];
                   a[i]=a[i+1];
                   a[i+1]=temp;
           }
}

    for(int i=0;i<s;i++){
        printf("a[%d] = %d\n",i,a[i]);
}

     return 0;
}

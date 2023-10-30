/*
Assume that you have a group of N students forming a circle. The end up standing next to the first student as it is a circle.
Write a complete C program 
1. MaxDiff : define an array of integers and its size S as input parameters. Initialize the array
from the user array represent the heights of the students standing in a circle format.
Find and print the maximum height difference between any two students standing next to each other.

2. Average use the same array of integers and its size as input parameters.
The array represents the heights of the students standing in a circle format.
The function returns the average (arithmetic mean) of the heights in the array.
Print your results.
*/
#include <stdio.h>
#include <math.h>
# define s 5
int main() {

    int h[s];
    float sum=0;

    for(int i=0;i<s;i++){
        printf("please enter height of student %d: ",i);
        scanf("%d",&h[i]);
        sum+=h[i];
    }
    int maxdiff=0;

    for(int j=0;j<s-1;j++){
        if(abs(h[j]-h[j+1])>maxdiff)
        maxdiff=abs(h[j]-h[j+1]);
}

    if(abs(h[0]-h[s-1])>maxdiff) maxdiff=abs(h[0]-h[s-1]);

    printf("the maximum diff =%d\n",maxdiff);
    printf("the avg = %.0f\n",sum/s);

     return 0;
}


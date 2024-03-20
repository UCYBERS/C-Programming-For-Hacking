/*
Write a complete C program including a main and three functions named Max, CountAbove, and IndexOf.   
Max takes 1) an array of integer grades and 
          2) its size as integer input parameters and returns the maximum grade in the array as integer type.  

CountAbove takes 1) an array of integers, 
                 2) its size as integer, and 
                 3) a score value as integer  input parameters and returns the number of grades in the array that are more or equal to the input score .

IndexOf takes 1) an array of integers, 
              2) its size as integer, and 
              3) a score value as integer  input parameters and return the location of the first occurrence of the input score. Location means index. 
  If the value is not found, it should return -1.

The main defines an integer array of size 70 and fills it with grades from user input. 
The main function then calls function Max to compute the maximum value and function CountAbove 
to compute the number of Passing grades (grades >=50) for the read grades. Then, it calls the IndexOf function find out 
the location of grade 80 in the read grades.
*/
#include <stdio.h>
#include <stdlib.h>
int MAX(int a[],int s){
    int max=a[0];
    for(int i=0;i<s;i++){
        if(a[i]>max) max=a[i];
    }
    return max;
}
int CountAbove(int a[],int s,int score){
    int count=0;
    for(int i=0;i<s;i++){
        if(a[i]>=score){
            count++;
        }
    }
    return count;
}
int IndexOf(int a[],int s,int score){
    for(int i=0;i<s;i++){
        if(a[i]>=score){
            return i;
        }

    }
    return -1;

}
int main()
{
    int arr[10];

    for(int i=0;i<70;i++){
        printf("plaese enter grade %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("the max is %d\n",MAX(arr,70));
    printf("count is %d\n",CountAbove(arr,70,50));
    if(IndexOf(arr,10,80)==-1){
        printf("Not found\n");
    }
    else printf("found in location %d\n",IndexOf(arr,70,80));
    return 0;
}

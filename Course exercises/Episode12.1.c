/*
Write a C program that meets the following criteria

Ask the user to enter the number of students for a specific 
course and define integer array by this size named grades (int).
Each grade is in the range of 0 to 100.
The program reads the grades but keep reading if the user enter invalid
The program should calculate and print the following:
1. Number of passed grade>=50
2. Average number of students passed the course
3. Highest Grade
4. Pass Percentage
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int size,pass=0;
    float sump=0, avgp;
    int max=-1;

    printf("Please enter number of students: ");
    scanf ( "%d" ,&size);

    int g[size] ;
    int input;

    for(int i=0;i<size;i++){
        printf("Please enter grade %d: ",i);
        scanf( "%d" ,&input);

        if(input<=100 && input>=0) g[i]=input;
        else {
                --i;
            continue;}
        if(g[i]>=50){ pass++;
                      sump+=g[i];
        }
        if(g[i]>max) max=g[i];
    }

    avgp=sump/pass;

    for(int i=0;i<size;i++){
        printf("g[%d] = %d\n",i,g[i]);
    }

    printf("Number of passed grade: %d\n",pass);
    printf("Average number of students passed the course: %f\n",avgp);
    printf("Highets grade: %d\n",max) ;
    printf("pass percentage: %f %%\n",((float)pass/size)*100);

    return 0;
}

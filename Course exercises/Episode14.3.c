/*
QI: Write a C program that meets the following criteria
Use a while loop to enter students grades for a specific course. Each grade is in the range of 0
to 100. The program will stop reading when it reads a negative grade. The program should
calculate and print the following:
1. Number of grades
2. Highest Grade
3. Average number of students passed the course
4. Pass Percentage
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int g;

  printf("please enter the first grade :");
  scanf("%d",&g);

  int count=0;
  float sump=0,avgp=0,p=0;
  int max=g;


  while(g>=0){
        count++;
    if(g>=50){
        p++;
        sump+=g;
    }
    if(g>max){max=g;}

    printf("plaese enter the next grade any negstive value to end: ");
    scanf("%d",&g);

  }
   avgp =sump/p;
   printf("Number of students : %d\n",count);
   printf("Average number of students passed the course: %.1f\n",avgp);
   printf("Highest Grade: %d\n",max);
   printf("pass percanteg: %f",(p/count)*100);



    return 0;
}

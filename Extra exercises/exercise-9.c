/*
Assume that Ahmad has several tasks to finish. 
Ahmad uses his mobile phone to set several alarms to awake him in case if he sleeps. 
The number of alarms set are 20 alarms. The alarm time is set in 24-hour time format for hours and minutes using integer numbers. 
Write a C program to read the 20 alarm values. Each alarm value requires reading two integers HH MM. 
Your program is supposed to calculate the maximum period that Ahmad can sleep without getting awaken by the Alarm sound. 
Print the total number of minutes. Assume that the alarm times given are sorted in ascending order (from early time of the day to later time of the day).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours[20];
    int minutes[20];

    for(int i=0;i<20;i++){
        printf("Please enter alarm number %d: ",i);
        scanf("%d%d",&hours[i],&minutes[i]);
    }

    int sleep_max=0;
    int max=0;
    for(int i=0;i<19;i++){
        int sleep_period=(hours[i+1]-hours[i])*60+(minutes[i+1]-minutes[i]);
        if(sleep_period>sleep_max){
            sleep_max=sleep_period;
            max=i;
        }
    }
    printf("the total max = %d\n",sleep_max);
    printf("bitween %d:%d and %d:%d",hours[max],minutes[max],hours[max+1],minutes[max+1]);
}

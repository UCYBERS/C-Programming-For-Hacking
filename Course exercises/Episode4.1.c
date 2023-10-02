/*
a c program that read the total time in
second and find and print the time in
 hours: mints: seconds format

Example:
6005 second----> 1H: 40M: 5S
6005/60 = 1OOM
Second 6005%60 = 5S
Hours= total/60/60 = 1H
Mints=(total/60)%60 = 40S
*/

#include <stdio.h>

int main() {
    
    int totalTimeS;
    int mints,seconds,hours;

    printf("Please enter the total number of seconds: ");
    scanf("%d",&totalTimeS);

    seconds=totalTimeS%60;
    hours=totalTimeS/60/60;
    mints=totalTimeS/60%60;

    printf("%d = %dH:%dM:%dS\n",totalTimeS,hours,mints,seconds);

  return 0;
}

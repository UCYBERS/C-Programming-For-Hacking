// A city population year 2000 =1000 person
// Each year annual growth =10%
// Write a recursive function take
// the number of years after 2000
// Return the population after these years

#include <stdio.h>
#include <stdlib.h>

int population(int nYear){
if(nYear==0){
    return 1000;
}
else {
    return population(nYear-1)+population(nYear-1)*.1;
}

}

int main()
{
    printf("Population after %d years from 2000 = %d\n",6,population(6));
    return 0;
}

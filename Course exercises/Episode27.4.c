// Write a recursive function that
// take the strength of a signal as
// float return the number of
// second, the signal will travel
// If strength <=10 the signal will stop
// Each second the signal lose 50%
// from its strength

#include <stdio.h>
#include <stdlib.h>

float signal(float strength){
if(strength<=10){
    return 0;
}
else {
    return 1+signal(strength*.5);
}

}

int main()
{
    printf("Time for the signal to stop: %.2f seconds\n",signal(100.2));
    return 0;
}

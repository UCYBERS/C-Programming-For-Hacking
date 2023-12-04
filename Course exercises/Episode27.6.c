// Assume we have a lake that changes in volume according to the daily weather conditions. 
// In a sunny day, it loses 2% of its volume. 
// In a cloudy day, the volume stays the same, and for a rainy day, the volume increases by 1

// To know today's weather assume that the rainy days have probability of 30% of the days, and
// Sunny days have probability of 35% of the days, and the rest are cloud days.

// Write a recursive C function that takes the current lake volume V and the number of days N, 
// and returns the resulting volume after N days. Your function prototype is:
// float computeVolume(float V, int N)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float computeVolume(float V,int N){
    srand(time(NULL));
    if(N==0) return V;

    int r=rand()%101;

    if(r<=35){

                    return computeVolume(V-V*.02,N-1);
    }
    else if(r>35&&r<=65){
                    return computeVolume(V+V*.01,N-1);
    }
    else return computeVolume(V,N-1);
}

int main() {

    printf("%.2f\n", computeVolume(300.1,10));
    return 0;
}

// A cell type might split into two or three every hour or might die.
// The likelihood for splitting into two is 30% and into three is 55% and dying is 15% for every lifespan. 
// Assume that we start with a sample of one cell, 
// write a recursive function that simulates the cell life span for 24 hours and return the total number of cell possible that time. 

// Hint: use rand() function to simulate the percentage. 
// Use this function signature:   int Cell(int total_hours).   The function should stop when the total_hours left is 0 or less.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Cell(int total_hours) {
    srand(time(NULL));

    if (total_hours <= 0)
        return 1;

    int r = rand() % 101;

    if (r >= 55)
        return 3 + Cell(total_hours - 1);
    else if (r >= 30)
        return 2 + Cell(total_hours - 1);
    else
        return 1 + Cell(total_hours - 1);
}

int main() {
    printf("Total number of cells after 24 hours: %d\n", Cell(24));
    return 0;
}


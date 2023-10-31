/*
Write a program to define two int arrays of size N read N from the user
The first array name first exam and the second named second exam
Read the grades of first and second exam for N students from the user and find and
compute the following:
1. Number of students who takes higher grade in the first exam than the second exam.
2. Pass percentage of the first exam
3. Find the sum of the two exams and store it in array sum; then finds The frequency of
grades in 90s frequency in 80s and , frequency in 70s and frequency in 60s and
frequency in 50.
4. Print a histogram to represent the frequencies distributions of (3)
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    int N;

    printf("please enter the number of students: ");
    scanf("%d",&N);

    int first[N],second[N],sum[N];
    int count=0;
    float passF=0;
    int f[10]={0};
    for(int i=0;i<N;i++){
            printf("please enter your first then second exam: ");
            scanf("%d%d",&first[i],&second[i]);
            if(first[i]>second[i]) count++;
            if(first[i]>=25) passF++;
            sum[i]=first[i]+second[i];
            ++f[sum[i]/10];
    }

    printf("the number of students first > second: %d\n",count);
    printf("the pass percentage for the first exam : %f\n",passF/N*100);

    for(int i=9;i>=5;i--){
        printf("%d: %d ",i*10,f[i]);
        for(int j=1;j<=f[i];j++){
            printf("*");
        }
        printf("\n");
    }

     return 0;
}

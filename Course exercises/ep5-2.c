/*
Write a C program to read integer number of four digits and find the new transform number as
follow:
Example n=3412
newN= 2341
or
Example n=3412
newN= 1234
  */
int main()
{
    int n,part1,part2,newN;


    printf("please enter integer number of four digits: ");
    scanf("%d",&n);

    part1=n%100;
    part2=n/100;

    newN=part1*100+part2;



    printf("Your number is %d\nThe transform number is %d\n",n,newN);




    return 0;
}

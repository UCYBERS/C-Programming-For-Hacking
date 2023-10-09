/*
The personal income tax is calculated based on the status and taxable income. There are three
statuses: Single (S), Married (M), and Head of Household (H). The tax rates for 2023 are shown
in the table.
Write a program that prompts the user to enter the status as a character: S, M or H, and taxable
income and computes the tax.
  */
#include <stdio.h>

int main(void) {
    char status;
    double income,tax;

    printf("please enter the status as a character (S M H):");
    scanf("%c",&status);

    printf("please enter taxable income: ");
    scanf("%lf",&income);

    switch(status){
    case 's':
    case 'S': if(income<6000) tax=income*0.10;
                else if(income>=6000&&income<=27500) tax=income*0.15;
                    else if(income>=27501&&income<67600) tax=income*0.27;
                       else if(income>=67601&&income<=141250) tax =income*0.3;
                           else if(income>=141251&&income<=307050) tax=income*0.35;
                               else tax=income*0.386;
                    break;

    case 'm':
    case 'M': if(income<12000) tax=income*0.10;
                else if(income>=12001&&income<=46700) tax=income*0.15;
                    else if(income>=46701&&income<112850) tax=income*0.27;
                        else if(income>=12851&&income<=171950) tax =income*0.3;
                             else if(income>=171951&&income<=307050) tax=income*0.35;
                               else tax=income*0.386;
                    break;

    case 'h':
    case 'H': if(income<6000) tax=income*0.10;
                else if(income>=6000&&income<=27500) tax=income*0.15;
                    else if(income>=27501&&income<67600) tax=income*0.27;
                        else if(income>=67601&&income<=141250) tax =income*0.3;
                            else if(income>=141251&&income<=307050) tax=income*0.35;
                                else tax=income*0.386;
                    break;

    default: printf("Invalid status\n");

    }
    printf("Your income tax is: $%.2lf",tax);




  return 0;
}

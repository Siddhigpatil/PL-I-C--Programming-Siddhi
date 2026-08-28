/*
Program(2) to make use of basic I/O function using different data
types.
Solution: User Define Values.
*/
#include<stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

printf("\n Enter Student Roll Number:");
scanf("%d", &rollnum);
printf("\n Enter Student Percentage:");
scanf("%f",  &per);
printf("\n Enter Student Grade:");
scanf("  %c", &grade);

    printf("-----Student Information-----\n");
    printf("\n Roll Number :%d", rollnum);
    printf("\n Precentage :%f", per);
    printf("\n Grade :%c", grade);

    return 0;
}
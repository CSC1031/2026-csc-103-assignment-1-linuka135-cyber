#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1,m2,m3,total;
    float average;
    char grade;
    char passorfail;

    printf("Enter your Mathematics marks (out of 100): ");
    scanf("%d",&m1);
    printf("Enter your Science marks (out of 100): ");
    scanf("%d",&m2);
    printf("Enter your English marks (out of 100): ");
    scanf("%d",&m3);

    total = m1 + m2 + m3;
    average = total / 3.0;

    if (average >= 80)
        grade = 'A';
    else if (average >=70)
        grade = 'B';
    else if (average >=60)
        grade = 'C';
    else if (average >=50)
        grade = 'D';
    else
        grade = 'F';




    printf("Total: %d\n",total);
    printf("Average: %2f\n",average);
    printf("Grade: %c\n",grade);

    if (m1>=40 && m2>=40 && m3>=40)
     printf("Result: PASS");
    else
     printf("Result: FAIL");




    return 0;
}

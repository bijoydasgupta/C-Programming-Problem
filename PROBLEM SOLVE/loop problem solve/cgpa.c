#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    char x[3];
    float p_cgpa, p_credit;
    float gpa = 0, credit, gpa_sum = 0, credit_sum = 0, cgpa;
    printf("Enter the previous CGPA: ");
    scanf("%f", &p_cgpa);
    printf("Enter the previous credit: ");
    scanf("%f", &p_credit);
    printf("\nEnter the new number of courses: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nEnter the grade: ");
        scanf("%s", x);
        printf("Enter the credit: ");
        scanf("%f", &credit);

        if (strcmp(x, "A") == 0)
            gpa = 4.00;
        else if (strcmp(x, "A-") == 0)
            gpa = 3.67;
        else if (strcmp(x, "B+") == 0)
            gpa = 3.33;
        else if (strcmp(x, "B") == 0)
            gpa = 3.00;
        else if (strcmp(x, "B-") == 0)
            gpa = 2.67;
        else if (strcmp(x, "C+") == 0)
            gpa = 2.33;
        else if (strcmp(x, "C") == 0)
            gpa = 2.00;
        else if (strcmp(x, "C-") == 0)
            gpa = 1.67;
        else if (strcmp(x, "D+") == 0)
            gpa = 1.33;
        else if (strcmp(x, "D") == 0)
            gpa = 1.00;
        else
            gpa = 0.00;

        gpa_sum += gpa * credit;
        credit_sum += credit;
    }

    cgpa = (gpa_sum + p_cgpa * p_credit) / (credit_sum + p_credit);
    printf("\nCurrent CGPA = %.2f\n", cgpa);

    return 0;
}
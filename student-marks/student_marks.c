#include <stdio.h>
#include <string.h>

int main()
{
    char name[10][50];
    int rollno[10];
    int phy[10];
    int chem[10];
    int math[10];
    int eng[10];
    int cs[10];
    int total[10];
    float avg[10];
    int i, j, ch;
    char n[50];

    for (i = 0; i < 10; i++)
    {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Roll Number: ");
        scanf("%d", &rollno[i]);

        printf("Enter Physics marks: ");
        scanf("%d", &phy[i]);

        printf("Enter Chemistry marks: ");
        scanf("%d", &chem[i]);

        printf("Enter Math marks: ");
        scanf("%d", &math[i]);

        printf("Enter English marks: ");
        scanf("%d", &eng[i]);

        printf("Enter CS marks: ");
        scanf("%d", &cs[i]);

        total[i] = phy[i] + chem[i] + math[i] + eng[i] + cs[i];
        avg[i] = total[i] / 5.0;
    }

    printf("\n\n--- All Students ---\n");
    for (i = 0; i < 10; i++)
    {
        char grade;

        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", name[i]);
        printf("Roll No: %d\n", rollno[i]);
        printf("Physics: %d\n", phy[i]);
        printf("Chemistry: %d\n", chem[i]);
        printf("Math: %d\n", math[i]);
        printf("English: %d\n", eng[i]);
        printf("CS: %d\n", cs[i]);
        printf("Total: %d\n", total[i]);
        printf("Average: %.2f\n", avg[i]);

        if (avg[i] >= 90) grade = 'A';
        else if (avg[i] >= 80) grade = 'B';
        else if (avg[i] >= 70) grade = 'C';
        else if (avg[i] >= 60) grade = 'D';
        else grade = 'F';

        printf("Grade: %c\n", grade);
    }

    printf("\nEnter 1 for Searching Student\nEnter 2 for Sorting\n");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1:
        {
            int found = 0;

            printf("Enter name of student to search: ");
            scanf("%s", n);

            for (i = 0; i < 10; i++)
            {
                if (strcmp(name[i], n) == 0)
                {
                    char grade;

                    printf("\nStudent Found!\n");
                    printf("Name: %s\n", name[i]);
                    printf("Roll No: %d\n", rollno[i]);
                    printf("Physics: %d\n", phy[i]);
                    printf("Chemistry: %d\n", chem[i]);
                    printf("Math: %d\n", math[i]);
                    printf("English: %d\n", eng[i]);
                    printf("CS: %d\n", cs[i]);
                    printf("Total: %d\n", total[i]);
                    printf("Average: %.2f\n", avg[i]);

                    if (avg[i] >= 90) grade = 'A';
                    else if (avg[i] >= 80) grade = 'B';
                    else if (avg[i] >= 70) grade = 'C';
                    else if (avg[i] >= 60) grade = 'D';
                    else grade = 'F';

                    printf("Grade: %c\n", grade);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Student Not Found!\n");

            break;
        }

        case 2:
        {
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 9; j++)
                {
                    if (total[j] < total[j + 1])
                    {
                        int tempRoll;
                        char tempName[50];
                        float tempAvg;
                        int tempTotal = total[j];

                        total[j] = total[j + 1];
                        total[j + 1] = tempTotal;

                        tempAvg = avg[j];
                        avg[j] = avg[j + 1];
                        avg[j + 1] = tempAvg;

                        strcpy(tempName, name[j]);
                        strcpy(name[j], name[j + 1]);
                        strcpy(name[j + 1], tempName);

                        tempRoll = rollno[j];
                        rollno[j] = rollno[j + 1];
                        rollno[j + 1] = tempRoll;

                        int tempPhy = phy[j];
                        phy[j] = phy[j + 1];
                        phy[j + 1] = tempPhy;

                        int tempChem = chem[j];
                        chem[j] = chem[j + 1];
                        chem[j + 1] = tempChem;

                        int tempMath = math[j];
                        math[j] = math[j + 1];
                        math[j + 1] = tempMath;

                        int tempEng = eng[j];
                        eng[j] = eng[j + 1];
                        eng[j + 1] = tempEng;

                        int tempCs = cs[j];
                        cs[j] = cs[j + 1];
                        cs[j + 1] = tempCs;
                    }
                }
            }

            printf("\n--- Sorted by Total Marks (Highest to Lowest) ---\n");
            for (i = 0; i < 10; i++)
            {
                char grade;

                printf("\nStudent %d:\n", i + 1);
                printf("Name: %s\n", name[i]);
                printf("Roll No: %d\n", rollno[i]);
                printf("Physics: %d\n", phy[i]);
                printf("Chemistry: %d\n", chem[i]);
                printf("Math: %d\n", math[i]);
                printf("English: %d\n", eng[i]);
                printf("CS: %d\n", cs[i]);
                printf("Total: %d\n", total[i]);
                printf("Average: %.2f\n", avg[i]);

                if (avg[i] >= 90) grade = 'A';
                else if (avg[i] >= 80) grade = 'B';
                else if (avg[i] >= 70) grade = 'C';
                else if (avg[i] >= 60) grade = 'D';
                else grade = 'F';

                printf("Grade: %c\n", grade);
            }
            break;
        }

        default:
            printf("Invalid Choice\n");
            break;
    }

    return 0;
}

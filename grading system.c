#include <stdio.h>

#include <conio.h>


struct student{

    char name[50];

    int ID;

    int marks;

    char grade;

};

main()

{

    struct student stud[15];

    int i,n;

    printf("ENTER THE NUMBER OF STUDENTS:");

    scanf("%d",&n);



    for(i=0;i<n;i++)

    {

        printf("ENTER STUDENT INFORMATION:\n");

        printf("NAME:");

        scanf("%s",&stud[i].name);

        printf("ID:");

        scanf("%d",&stud[i].ID);

        printf("MARKS(In Percentage):");

        scanf("%d",&stud[i].marks);

        printf("\n");

    }

    for(i=0;i<n;i++)
    {

        if(stud[i].marks <= 50)
        {

            stud[i].grade = 'F';

        }
        else if(stud[i].marks > 50 && stud[i].marks <= 55)
        {

            stud[i].grade = 'FX';

        }
        else if(stud[i].marks > 55 && stud[i].marks <= 60)
        {

            stud[i].grade = 'D';

        }
        else if(stud[i].marks > 60 && stud[i].marks <= 75)
        {

            stud[i].grade = 'C';

        }
        else if (stud[i].marks > 75 && stud[i].marks <= 85)
        {

            stud[i].grade = 'B';

        }
        else if (stud[i].marks > 85 && stud[i].marks <= 90)
        {

            stud[i].grade = 'A';

        }
        else if(stud[i].marks > 90)
        {

            stud[i].grade = 'A++';

        }

    }

    for(i = 0;i<40;i++)
    printf("_");printf("\n");

    printf("Name\tID\tMarks\tGrade\n");

    for(i = 0;i<40;i++)
    printf("_");printf("\n");

    for(i=0;i<n;i++)
        {

        printf("%s\t%d\t%d\t%c\n",stud[i].name,stud[i].ID,stud[i].marks,stud[i].grade);

   }

   for(i = 0;i<40;i++)
   printf("_");printf("\n");

   getch();

       return 0;

}

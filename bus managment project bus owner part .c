#include<stdio.h>
int main()
{
    int input, number, owner, nbus=0, nseat=0, ntime=0, money=0, tincome=0;

    printf("\t Welcome to Bus Management System.\n\n\a");

    printf("\t Here are the Options-\n\n");

    printf("\t 1.Bus Driver\n\n");

    printf("\t 2.Bus Owner\n\n");

    printf("\t Note:Please input one option at a time\n\n");

    printf("\t Enter a number:\n");

    scanf("\t%d", &input);

    switch(input)
    {
        case 1 : printf("\t\t Hello,Sir.\n\n");

                 printf("\tBecause of Passenger Safety issue please answers the question below:\n\n");

                 printf("\tSir,Do you have the Driving license with you?\n\n");

                 printf("\t1.Yes\n");

                 printf("\t2.No\n\n");

                 printf("\tEnter a number\n");

                 scanf("%d", &number);

                 if(number==1)
                 {
                    printf("\tThank you,Sir\n");

                    printf("\tHave a Safe Driving\n\n");
                 }

                 else if(number==2)
                {

                    printf("\tPlease take your driving license,Sir.\n");

                    printf("\tUnless the system will alert the Bus Owner.\n");

                 }
                 break;

        case 2 : printf("\tGood Evening,Sir.\n");

                 printf("\tHope you're doing really good.\n");

                 printf("\tSir,How can i help you?\n\n");

                 printf("\tHere are the options:\n\n");

                 printf("\t1.Calculate the total profit or loss....\n\n");

                 printf("\t2.Exit..\n\n");

                 scanf("%d", &owner);

                 (owner==01)?printf("\tStart calculating......\n\n"):printf("\t Thank you for using the system,Sir.\n\t Have A Good Day,Sir.\n\n");

                 if(owner==01)
                    {

                    printf("\tTell me How many Buses you Have?\n\n");

                      printf("\tEnter the number:\n");

                        scanf("%d", &nbus);

                    printf("\tHow many seats per a bus:\n");

                      printf("\tEnter the number:\n");

                        scanf("%d", &nseat);

                    printf("\tHow much money per a seat:\n");

                      printf("\tEnter the number:\n");

                        scanf("%d", &money);

                    printf("\tHow many times it travel:\n");

                      printf("\tEnter the number:\n");

                        scanf("%d", &ntime);

                    printf("\tCalculating.........\n\n");

                      printf("\tCalculating.........\n\n");

                        printf("\tCalculating.........\n\n");

                    tincome = (nbus*nseat*money*ntime);

                    printf("The total income : $%d Dollar \n\n", tincome);

                    printf("Exit...");

                 }
    }
    return 0;
}

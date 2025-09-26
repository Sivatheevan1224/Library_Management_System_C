#include <stdio.h>
#include <stdlib.h>


void showbooks()
    {

    FILE *sb;
    sb=fopen("books.txt","r");

    if (sb !=NULL)
        {
        char c1;
        while ((c1=fgetc(sb)) != EOF )
        printf("%c",c1);
        fclose(sb);
        }

    else
        printf("ERROR OPENING FILE!!!\n");

    }


void showmembers()
    {

    FILE *sm;
    sm=fopen("members.txt","r");

    if (sm !=NULL)
        {
        char c2;
        while ((c2=fgetc(sm)) != EOF )
        printf("%c",c2);
        fclose(sm);
        }

    else
    printf("ERROR OPENING FILE!!!\n");
    }


void addbook()
    {
    char book_name[30],author_name[30];
    int available_copies;

    FILE *ab;
    ab=fopen("books.txt","a");

    printf("\nENTER BOOK NAME: ");
    scanf("%s",&book_name);

    printf("ENTER AUTHOR NAME: ");
    scanf("%s",&author_name);

    printf("ENTER AVAILABLE COPIES: ");
    scanf("%d",&available_copies);

    fprintf(ab,"\nBook:%s\nAuthor:%s\nCopies:%d\n",book_name,author_name,available_copies);
    fclose(ab);
    printf("\nSUCESSFULLY ADDED!!!\n\n");
    }


void addmember()
    {
    char member_name[30];
    int member_id;

    FILE *am;
    am=fopen("members.txt","a");

    printf("\nENTER NAME: ");
    scanf("%s",&member_name);

    printf("ENTER MEMBER ID: ");
    scanf("%d",&member_id);

    fprintf(am,"\nName:%s\nStudent_ID:%d\n",member_name,member_id);
    fclose(am);
    printf("\nSUCESSFULLY ADDED!!!\n\n");

    }


int main()
    {

    printf("\n\n");
    printf("\t\t\t\t============================\n");
    printf("\t\t\t\t\"LIBRARY MANAGEMENT STYSTEM\"\n");
    printf("\t\t\t\t     *LIBRARY OF WISDOM*\n");
    printf("\t\t\t\t============================");

    int a;
    for(a==1;10>=a;a++){

    FILE *up;
    up=fopen("password.txt","r");

    char password[20],pw[20];

    fscanf(up,"%s%s",password);
    printf("\n\nENTER PASSWORD:");
    gets(pw);

    if((strcmp(password,pw)==0))
        {

        int choice;

    do
        {
        printf("\n\n\t\t\t\t\t=============\n");
        printf("\t\t\t\t\t+++OPTIONS+++\n");
        printf("\t\t\t\t\t=============\n\n");
        printf("\t\t\t\t\t1.AVAILABLE BOOKS\n ");
        printf("\t\t\t\t\t2.MEMBER DETAILS\n ");
        printf("\t\t\t\t\t3.ADD BOOKS\n ");
        printf("\t\t\t\t\t4.ADD MEMBERS\n ");
        printf("\t\t\t\t\t5.EXIT!!!\n ");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&choice);

        switch (choice)
            {
            case 1:
                showbooks();
                break;

            case 2:
                showmembers();
                break;

            case 3:
                addbook();
                break;

            case 4:
                addmember();
                break;
            case 5:
                 printf("EXITING... GOOD BYE!!!\n");
                 break;
            default:
                printf("INVALID CHOICE!!! PLEASE TRY AGAIN!!!\n");
            }
        }while(choice !=5);
            break;
        }

    else
        {
        printf("\nINCORRECT!!!");
        }
    }

    return 0;
    }


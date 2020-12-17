#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
COORD coord = {0, 0};
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
struct ticket
{
    int coach_no;
    char name[30];
    char depart_time[20];
    int mobile_no;
    char seat_no[30];
    float price;

} tic;


int main()
{
    char name[20];
    char password[10];
    printf("\n\t\t\t***BUS TICKET MANAGEMENT SYSTEM***");

    printf("\n\n\t   ********************* Log In ***********************\n\n");
    printf("Enter username: ");
    scanf("%s",name);
    printf("Enter password: ");
    scanf("%s",password);
    if (strcmp(name, "a") == 0 && strcmp(password, "p") == 0)
    {
        printf("Access granted\n");
        mai();
    }
    else
    {
        system("color 4");
        printf("\n\nAccess denied\nUSER NAME OR PASSWORD INVALID\n");
    }

    getch();
}
void mai()
{
    system("cls");
    gotoxy(2,3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf(" MAIN MENU ");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    int a;
    printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2 Press 1 For PASSENGER\n\n\t\t\xDB\xDB\xDB\xDB\xB2 Press 2 For DRIVER\n\n");
    printf("\t\tENTER YOUR CHOICE: ");
    scanf("%d",&a);
    switch(a)
    {


    case 1:
        coustomar();
        break;
    case 2:
        driver();
        break;
    }
}



void coustomar()
{
    system("cls");

    int n;
    gotoxy(2,3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf(" PASSENGER MENU ");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,6);
    printf("\xDB\xDB\xDB\xDB\xB2 1. Add Record");
    gotoxy(20,8);
    printf("\xDB\xDB\xDB\xDB\xB2 2. View  Record");
    gotoxy(20,10);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Search Record");
    gotoxy(20,12);
    printf("\xDB\xDB\xDB\xDB\xB2 4. Delete Record");
    gotoxy(20,14);
    printf("\xDB\xDB\xDB\xDB\xB2 5. Exit");
    gotoxy(20,16);
    printf("ENTER YOUR BEST CHOICE :");
    scanf("%d",&n);
    switch (n)
    {
        {
        case 1:
        {
            insert();
        }
        break;
    }
    {
        case 2:
        {
            disp();
        }
        break;
    }
    {
        case 3:
        {
            search();
        }
        break;
    }
    {
        case 4:
        {
            delete();
        }
        break;
    }
    {
        case 5:
        {
            system("cls");
            system("color 2");
            gotoxy(2,3);
            printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
            printf(" THANK YOU ");
            printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
            exit(1);
        }
        break;
    }
    }


}
void insert()
{
    system("cls");
    FILE *fp;
    fp=fopen("a.text","a");
    printf("\n\n\t\t\xDB\xDB\xDB Enter the coach_no: ");
    scanf("%d",&tic.coach_no);
    printf("\n\n\t\t\xDB\xDB\xDB Enter the name:");
    scanf("%s",&tic.name);
    printf("\n\n\t\t\xDB\xDB\xDB Enter the depart_time:");
    scanf("%s",&tic.depart_time);
    printf("\n\n\t\t\xDB\xDB\xDB Enter the mobile_no:");
    scanf("%d",&tic.mobile_no);
    printf("\n\n\t\t\xDB\xDB\xDB Enter seat_no:");
    scanf("%s",&tic.seat_no);
    printf("\n\n\t\t\xDB\xDB\xDB Enter the price:");
    scanf("%f",&tic.price);
    printf("\n\n");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf(" SUCESSFULLY ENTERED ");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    fwrite(&tic,sizeof(tic),1,fp);
    fclose(fp);
}
void disp()

{
    system("cls");
    FILE *fp1;
    fp1=fopen("a.text","r");
    printf("\nCoach_no\t Name\t  Depart_time\t  Mobile_no\tSeat_no  \tprice\n\n\n\n\n");
    while(fread(&tic,sizeof(tic),1,fp1))
        printf("%d     \t\t%s     %s   \t%d  \t%s \t\t%.2f\n",tic.coach_no,tic.name,tic.depart_time,tic.mobile_no,tic.seat_no,tic.price);
    fclose(fp1);
}
void search()
{
    system("cls");
    FILE*fp3;
    fp3=fopen("a.text","r");
    char name[30];
    printf("\n\n\t\t\xDB\xDB\xDB Enter the name which you want to search:");
    scanf("%s",name);
    printf("\n\n\n");
    while(fread(&tic,sizeof(tic),1,fp3))
    {
        if(strcmp(name,tic.name)==0)
        {
            printf("THESE ARE THE RECORD OF:%s\n",name);
            printf("\ncoach_no\t name\t  depart_time\t  mobile_no\tseat_no  \tprice\n\n");
            printf("%d     \t\t%s     %s   \t%d  \t%s \t\t%.2f\n",tic.coach_no,tic.name,tic.depart_time,tic.mobile_no,tic.seat_no,tic.price);
        }
        else
        {
            printf("Not Found");
        }


    }
    fclose(fp3);

}
void delete()
{
    system("cls");
    char a[30];
    int found=0;
    struct ticket tic,ti;
    FILE *fp;
    fp=fopen("a.text","r");
    FILE *f;
    f=fopen("temp.txt","w");
    getc(stdin);
    printf("\n\n\t\t\xDB\xDB\xDB Enter the name you want to delete:");
    gets(a);

    while(fread(&ti,sizeof(ti),1,fp))
    {
        if(strcmp(a,ti.name)==0)
        {
            found=1;
        }
        else
        {
            fwrite(&ti,sizeof(ti),1,f);
        }

    }

    fclose(f);
    fclose(fp);

    fp=fopen("a.text","w");
    f=fopen("temp.txt","r");

    if(found==0)
    {
        printf("\n\n\t\tNo record found\n");
    }
    else
    {
        while(fread(&ti,sizeof(ti),1,f))


        {
            fwrite(&ti,sizeof(ti),1,fp);
        }

        printf("\n\n\t\tDeletion successful\n");
    }
    fclose(fp);
    fclose(f);

}

void driver()
{
    system("cls");
    int n;
    gotoxy(2,3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf(" DRIVER MENU ");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,6);
    printf("\xDB\xDB\xDB\xDB\xB2 1. Add Record");
    gotoxy(20,8);
    printf("\xDB\xDB\xDB\xDB\xB2 2. View  Record");
    gotoxy(20,10);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Search Record");
    gotoxy(20,12);
    printf("\xDB\xDB\xDB\xDB\xB2 4. Delete Record");
    gotoxy(20,14);
    printf("\xDB\xDB\xDB\xDB\xB2 5. Exit");
    gotoxy(20,16);
    printf("ENTER YOUR BEST CHOICE :");
    scanf("%d",&n);
    switch (n)
    {
        {
        case 1:
        {
            insert2();
        }
        break;
    }
    {
        case 2:
        {
            disp2();
        }
        break;
    }
    {
        case 3:
        {
            search2();
        }
        break;
    }
    {
        case 4:
        {
            delete2();
        }
        break;
    }
    case 5:
    {
        system("cls");
        system("color 2");
        gotoxy(2,3);
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf(" THANK YOU ");
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
        exit(1);
    }
    break;


    }
}
void insert2()
{
    system("cls");
    FILE *fp;
    fp=fopen("b.text","a");
    printf("\n\n\t\t\xDB\xDB\xDB Enter the coach_no: ");
    scanf("%d",&tic.coach_no);
    printf("\n\n\t\t\xDB\xDB\xDB Enter the name:");
    scanf("%s",&tic.name);
    printf("\n\n\t\t\xDB\xDB\xDB Enter the depart_time:");
    scanf("%s",&tic.depart_time);
    printf("\n\n\t\t\xDB\xDB\xDB Enter the mobile_no:");
    scanf("%d",&tic.mobile_no);

    printf("\n\n");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf(" SUCESSFULLY ENTERED ");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    fwrite(&tic,sizeof(tic),1,fp);
    fclose(fp);
}
void disp2()

{
    system("cls");
    FILE *fp1;
    fp1=fopen("b.text","r");
    printf("\nCoach_no\t Name\t  Depart_time\t  Mobile_no\n\n\n\n\n");
    while(fread(&tic,sizeof(tic),1,fp1))
        printf("%d     \t\t%s     %s   \t%d  ",tic.coach_no,tic.name,tic.depart_time,tic.mobile_no);
    fclose(fp1);
}
void search2()
{
    system("cls");
    FILE*fp3;
    fp3=fopen("b.text","r");
    char name[30];
    printf("\n\n\t\t\xDB\xDB\xDB Enter the name which you want to search:");
    scanf("%s",name);
    printf("\n\n\n");
    while(fread(&tic,sizeof(tic),1,fp3))
    {
        if(strcmp(name,tic.name)==0)
        {
            printf("THESE ARE THE RECORD OF:%s\n",name);
            printf("\ncoach_no\t name\t  depart_time\t  mobile_no\n\n");
            printf("%d     \t\t%s     %s   \t%d  \n",tic.coach_no,tic.name,tic.depart_time,tic.mobile_no);
        }
        else
        {
            printf("Not Found");
        }


    }
    fclose(fp3);

}
void delete2()
{
    system("cls");
    char a[30];
    int found=0;
    struct ticket tic,t;
    FILE *fp;
    fp=fopen("b.text","r");
    FILE *f;
    f=fopen("tempa.txt","w");
    getc(stdin);
    printf("\n\n\t\t\xDB\xDB\xDB Enter the name you want to delete:");
    gets(a);

    while(fread(&t,sizeof(t),1,fp))
    {
        if(strcmp(a,t.name)==0)
        {
            found=1;
        }
        else
        {
            fwrite(&t,sizeof(t),1,f);
        }

    }

    fclose(f);
    fclose(fp);

    fp=fopen("b.text","w");
    f=fopen("tempa.txt","r");

    if(found==0)
    {
        printf("\n\n\t\tNo record found\n");
    }
    else
    {
        while(fread(&t,sizeof(t),1,f))


        {
            fwrite(&t,sizeof(t),1,fp);
        }

        printf("\n\n\t\tDeletion successful\n");
    }
    fclose(fp);
    fclose(f);

}


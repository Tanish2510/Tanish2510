#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _addbook
{
    char  fname[25];
    char  lname[25];
    char  line1[50];
    char  line2[50];
    char  line3[50];
    char  pin[10];
    char  city[25];
    char  state[25];
    char  phone[25];

}address;

void getvalue(address *A)
{
    printf("\n First Name :");
    fflush(stdin); gets(A->fname);

    printf("\n Last Name :");
    fflush(stdin); gets(A->lname);

    printf("\n Street/Locality :");
    fflush(stdin); gets(A->line1);

    printf("\n Landmark :");
    fflush(stdin); gets(A->line2);

    printf("\n House no./Ward no./Apartment no. :");
    fflush(stdin); gets(A->line3);

    printf("\n Pin code :");
    fflush(stdin); gets(A->pin);

    printf("\n City :");
    fflush(stdin); gets(A->city);

    printf("\n State:");
    fflush(stdin); gets(A->state);

    printf("\n Phone:");
    fflush(stdin); gets(A->phone);

}

void showadd(address const *p)
{
    printf("\n");
    printf("\n First Name:  %S",p->fname);
    printf("\n Last Name:   %s",p->lname);
    printf("\n ADDRESS:     %s",p->line1);
    printf("\n              %s",p->line2);
    printf("\n              %s",p->line3);
    printf("\n PINCODE:     %s",p->pin);
    printf("\n CITY:        %s",p->city);
    printf("\n STATE:       %s",p->state);
    printf("\n Contact No.: %s",p->phone);
}

void ADDaddress()
{
    FILE *f;
    address a;
    char ch;
    do
    {
        system("cls");
        getvalue(&a);

        printf("\n Do you want to save it? (Y/N):");
        fflush(stdin);
        ch=getche();

        if(ch=='y'||ch=='Y')
        {
            f=fopen("address.dat","ab");
            fwrite(&a,sizeof(a),1,f);
            printf("DATA SAVED!");
            fclose(f);
        }

        printf("\n Add more? (Y/N):");
        fflush(stdin);
        ch=getche();

    } while (ch=='y'||ch=='Y');
    
}

void showall()
{
    FILE *f;
    address a;

    f=fopen("address.dat","rb");
    if(f==NULL)
    {
        printf("\n FILE NOT FOUND");
    }
    else
    {
        while(fread(&a,sizeof(a),1,f)!=0)
        {
            showadd(&a);
        }
        fclose(f);
    }
}

int totalrecords()
{
    FILE *f;
    int n=0;

    f=fopen("address.dat","rb");
    if(f!=NULL)
    {
        fseek(f,0,SEEK_END);
        n=ftell(f)/sizeof(address);
        printf("\n n = %d",n);
        fclose(f);
    }

    return n;
}

void showspecific(int x)
{
    FILE *f;
    address a;

    f=fopen("address.dat","rb");
    fseek(f,x*sizeof(a),SEEK_SET);
    fread(&a,sizeof(a),1,f);
    fclose(f);

    showadd(&a);
}

void edit(int x)
{
    FILE *f;
    address a;
    char ch;

    showspecific(x);

    printf("\n Do you want to change? (Y/N):");
    fflush(stdin);
    ch=getche();
    if(ch=='y'||ch=='Y')
    {
        getvalue(&a);

        printf("\n SAVE? (Y/N):");
        fflush(stdin);
        ch=getche();
        if(ch=='y'||ch=='Y')
        {
            f=fopen("address.dat","r+b");
            fseek(f,x*sizeof(a),SEEK_SET);
            fwrite(&a,sizeof(a),1,f);
            fclose(f);
            printf("\n MODIFIED!");
        }
    }
}

void del(int x)
{
    FILE *f;
    address a;
    char ch;

    showspecific(x);

    printf("\n Do you want to DELETE it? (Y/N):");
    fflush(stdin);
    ch=getche();
    if(ch=='y'||ch=='Y')
    {
        printf("\nAre you sure? (Y/N):");
        fflush(stdin);
        ch=getche();
        if(ch=='y'||ch=='Y')
        {
            FILE *t;
            int y,n;
            n=totalrecords();

            f=fopen("address.dat","rb");
            t=fopen("temp.dat","wb");

            for(y=0;y<n;y++)
            {
                if(y!=x)
                {
                    fseek(f,y*sizeof(a),SEEK_SET);
                    fread(&a,sizeof(a),1,f);
                    fwrite(&a,sizeof(a),1,t);
                }
                fclose(f);
                fclose(t);

                remove("address.dat");
                rename("temp.dat","address.dat");
                printf("\n RECORD REMOVED!");
            }
        }
    }
}

void menu()
{
    int op;
    int x,n;

    do
    {
        system("cls");
        printf("\n\t\t\t ADDRESS BOOK ");
        printf("\n 1. Add new Address ");
        printf("\n 2. Show all Address ");
        printf("\n 3. Show Specific Address ");
        printf("\n 4. Edit Address ");
        printf("\n 5. Delete Address ");
        printf("\n 6. EXIT ");
        printf("\n Enter choice number :");
        scanf("%d",&op);

        switch(op)
        {
            case 1: 
                    ADDaddress();
            break;

            case 2: 
                    showall();
                    fflush(stdin);
                    printf("\n Press any key...");
                    getch();
                    break;

            case 3: 
                    n=totalrecords();
                   
                    printf("\n Total %d records found!",n);
                    printf("\n Enter record number between 1 and %d.",n);
                    scanf("%d",&x);
                    x--;
                   
                    if(x<0||x>=n)
                    {
                        printf("\nWRONG RECORD NUMBER GIVEN!");
                    }
                    else
                        showspecific(x);

                    printf("\n Press Any Key...");
                    fflush(stdin);
                    getch();
                    break;
            
            case 4:
                    n=totalrecords();
                    
                    printf("\n Total %d records found",n);
                    printf("\n Enter record number between 1 and %d.",n);
                    scanf("%d",&x);
                    x--;
                    if(x<0||x>=n)
                    {
                        printf("\n Wrong record number!");
                    }
                    else
                        edit(x);

                    printf("\n Press Any Key...");
                    fflush(stdin);
                    getch();
                    break;
            
            case 5:
                    n=totalrecords();
                    
                    printf("\n Total %d records found",n);
                    printf("\n Enter record number between 1 and %d.",n);
                    scanf("%d",&x);
                    x--;
                    if(x<0||x>=n)
                    {
                        printf("\n Wrong record number!");
                    }
                    else
                        del(x);
            
                    printf("\n Press Any Key...");
                    fflush(stdin);
                    getch();
                    break;
        }

    } while (op!=6);   
}

int main()
{
    menu();
    return(0);
}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _student
{
    char  name[30];
    char  house[15];
    int   marks[6];
    float percent;
    char  grade[6];

}student;

char const* nms[5]={"physics",
                    "Chemisry",
                    "Maths",
                    "English",
                    "Computer Science",
                   };

void getvalue(student *A)
{
    int x,y,tot;
    char const* gnm[6] = {"A+","A","B+","B","C+","C"};

    printf("\n First Name :");
    fflush(stdin); gets(A->name);

    printf("\n House :");
    fflush(stdin); gets(A->house);

    printf("\n Enter Marks :");
    for(y=tot=0;y<5;y++)
    {
        printf("\b\t Marks for %-16s :",nms[y]);
        scanf("%d",&A->marks[y]);
        tot += A->marks[y];
    }
    A->marks[5]=tot;
    A->percent=A->marks[5]/5.0;

    if(A[x].percent>=95)
        {
            strcpy(A[x].grade,gnm[0]);
        }
        else if(A[x].percent>=85)
        {
            strcpy(A[x].grade,gnm[1]);
        }
        else if(A[x].percent>=75)
        {
            strcpy(A[x].grade,gnm[2]);
        }
        else if(A[x].percent>=65)
        {
            strcpy(A[x].grade,gnm[3]);
        }
        else if(A[x].percent>=55)
        {
            strcpy(A[x].grade,gnm[4]);
        }
        else if(A[x].percent>=45)
        {
            strcpy(A[x].grade,gnm[5]);
        }

}

void showstudent(student const *p)
{
    printf("\n|  %-30s  |   %-15s  |",p->name,p->house);
    for(int x=0;x<6;x++)
    {
        printf("  %5d  |",p->marks[x]);
    }
    printf("  %-6.2f  |  %5s  |",p->percent,p->grade);
}

void addstudent()
{
    FILE *f;
    student a;
    char ch;

    do
    {
        system("cls");
        getvalue(&a);

        printf("\n Save it ? (Y/N) :");
        fflush(stdin); ch=getche();

        if(ch=='y'||ch=='Y')
        {
            f=fopen("Student.dat","ab");
            fwrite(&a,sizeof(a),1,f);
            fclose(f);
            printf("\n Data Saved!");
        }
        
        printf("\n Add More Students? (Y/N) :");
        fflush(stdin); ch=getche();

    } while (ch=='y'||ch=='Y');
  
}

void showall()
{
    FILE *f;
    student a;

    f=fopen("student.dat","rb");
    if(f==NULL)
    {
        printf("\n FILE NOT FOUND !");
    }
    else
    {
        while(fread(&a,sizeof(a),1,f)!=0)
        {
            showstudent(&a);
        }
        fclose(f);
    }
}

int totalrecords()
{
    FILE *f;
    int n=0;

    f=fopen("student.dat","rb");
    if(f!=NULL)
    {
        fseek(f,0,SEEK_END);
        n=ftell(f)/sizeof(student);
        printf("\n n = %d",n);
        fclose(f);
    }

    return n;
}

void showspecific(int x)
{
    FILE *f;
    student a;

    f=fopen("student.dat","rb");
    fseek(f,x*sizeof(a),SEEK_SET);
    fread(&a,sizeof(a),1,f);
    fclose(f);

    showstudent(&a);
}

void editstudent(int x)
{
    FILE *f;
    student a;
    char ch;

    showspecific(x);

    printf("\n DO YOU WANT TO CHANGE IT? (Y/N) :");
    fflush(stdin); ch=getche();
    if(ch=='y'||ch=='Y')
    {
        getvalue(&a);

        printf("\n SAVE CHANGES? (Y/N) :");
        fflush(stdin); ch=getche();
        if(ch=='y'||ch=='Y')
        {
            f=fopen("student.dat","r+b");
            fseek(f,x*sizeof(a),SEEK_SET);
            fwrite(&a,sizeof(a),1,f);
            fclose(f);
            printf("\n RECORD MODIFIED!");
        }
    }
}

void deletestudent(int x)
{
    
    FILE *f;
    student a;
    char ch;

    showspecific(x);

    printf("\n DO YOU WANT TO DELETE IT? (Y/N):");
    fflush(stdin); ch=getche();
    if(ch=='y'||ch=='Y')
    {
        printf("\n Are You Sure? (Y/N):");
        fflush(stdin); ch=getche();
        if(ch=='y'||ch=='Y')
        {
            FILE *t;
            int y,n;
            n=totalrecords();

            t=fopen("temp.dat","wb");
            f=fopen("student.dat","rb");
            
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

                remove("student.dat");
                rename("temp.dat","student.dat");
                printf("\n RECORD REMOVED!");
            }
        }
    }

}

void menu()
{
    int op;
    int n,x;

    do
    {
        system("cls");
        printf("\n 1. Add new Student ");
        printf("\n 2. Show all Student ");
        printf("\n 3. Show Specific Student ");
        printf("\n 4. Edit Student ");
        printf("\n 5. Delete Student ");
        printf("\n 6. EXIT ");
        printf("\n Enter choice number :");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
                addstudent();
            break;
            case 2:
                showall();
                fflush(stdin);
                printf("\n Press Any Key...");
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
                editstudent(x);

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
                deletestudent(x);
            
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
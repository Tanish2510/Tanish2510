#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"random.h"

#define MAX 25

typedef struct _student
{
    char  name[30];
    char  house[15];
    int   marks[6];
    //int   total;
    float percent;
    char  grade[4];
    
}student;

char const* nms[6]={"physics",
                    "Chemisry",
                    "Maths",
                    "English",
                    "Computer Science",
                   }; 

/*void getvalue(student A[],int N)
{
    int x,y;
    for(x=0;x<N;x++)
    {
        printf("\n Enter Name  :");
        fflush(stdin); gets(A->name);

        printf("\n Enter House :");
        fflush(stdin); gets(A->house);
        
        printf("\n Enter Marks :");
        A[x].total=0;
        for(y=0;y<5;y++)
        {
            printf("\b\t %-16s",nms[y]);
            scanf("%d",A[x].marks[y]);

            A[x].total += A[x].marks[y];

        }
        A[x].percent = (A[x].total/5.0);

    }
}*/

void randassigns(student *A,int N)
{
    char const* snm[30] = {"Tanish","Aditya","Parth","Atharva","Vikash","Akash","Ramesh",
                           "Suresh","Ketaki","Kritika","Medha","Apporva","Modi","Loki",
                           "Umesh","Virat","Ramu","Shamu","Mamu","Chomu","Aryan",
                           "Aishwariya","Haka","Rastogi","Saoirse","Lapurjhanna","Dimak",
                           "Katre","Thatre","Anyaa"
                          };

    char const* hnm[8] = {"Gibson","Campbell","Bishop","Wordsworth","Ashoka","Tagore",
                          "Shivaji","Raman"
                         };

    char const* gnm[6] = {"A+","A","B+","B","C+","C"};                     

    int y,x,index,tot,data[30]={0};
  
    randomize();
    for(x=0;x<N;x++)
    {
        index=random(30);
        while(data[index]==1)
        {
            index=random(30);
          
        }
        data[index]++;
        strcpy(A[x].name,snm[index]);

        index=random(8);
        strcpy(A[x].house,hnm[index]);

        for(y=tot=0;y<5;y++)
        {
            A[x].marks[y]=random(61)+40;
            tot+=A[x].marks[y];
        }
        A[x].marks[5]=tot;
        A[x].percent=tot/5.0;

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
}

void showarr(student *A,int N)
{
    int x,y,z;

   
    randassigns(A,N);

    for(x=0;x<N;x++)
    {  
        printf("\n");
        printf("| %-15s    |  %-15s  |",A[x].name,A[x].house);

        for(y=0;y<5;y++)
        {
            printf(" %-6d  |",A[x].marks[y]);
        }
        printf(" %-6d  |",A[x].marks[5]);
        printf(" %-6G  |",A[x].percent);
        printf(" %-3s  |",A[x].grade);
        
    }
 
}


int main()
{
    student ar[MAX];

    randassigns(ar,MAX);

    showarr(ar,MAX);

   return(0);
}
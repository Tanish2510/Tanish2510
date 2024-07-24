#include <stdio.h>
#include <conio.h>


void DoBaarAaneWaleElements(int arr[], int n) 
{
    int count = 1;

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] == arr[i - 1]) 
        {
            count++;
        } 
        else 
        {
            if (count == 2) 
            {
                printf("%d ", arr[i - 1]);
            }
            count = 1;
        }
    }

    if (count == 2) 
    {
        printf("%d ", arr[n - 1]);
    }
}

int main()
{
    int Ques[] = {1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 7, 7, 8, 8, 8, 9, 9, 10, 11, 11, 12};
    int n = sizeof(Ques) / sizeof(Ques[0]);

    printf("The Elements that are occurring exactly twice are :\n\t ");
    
    DoBaarAaneWaleElements(Ques, n);

    return (0);
}







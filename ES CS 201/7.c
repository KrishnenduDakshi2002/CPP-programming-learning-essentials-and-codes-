#include <stdio.h>
#include <string.h>


// sample for your testing
// 12
// 1 1 2 1 2 3 4 5 3 2 4 1
void printArray(int a[], int size)
{
    //printing in reverse order
    for (int i = size-1; i >=0; i--)
    {
        printf("%d", a[i]);
        printf("%c", ' ');
    }
}

void sort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[j] > a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], res[n], index = 0,count =0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, n);
    for (int i = 0, j = i; i < n; j++)
    {

        if (a[j] != a[i])
        {
            res[index] = a[i];
            index++;
            i = j;
        }
        else{
            if(i!=j)count++;
            continue;
        }
    }
    printArray(res, n-count);


    return 0;
}
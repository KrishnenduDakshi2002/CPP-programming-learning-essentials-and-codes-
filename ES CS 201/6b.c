#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int rows = 5,cols = 9;
    for(int i=0;i<rows;i++)
    {
        for(int j=4;j>=i;j--)
        {
            printf("%s","  ");
        }

        int digit = i;
        int itr = (2 * i + 1);
        bool is_true = true;
        while(itr > 0)
        {
            printf("%c",' ');
            printf("%d",digit);


            if(digit>0 && is_true == true){
                digit--;
            }
            else if (digit >= 0){
                digit++;
            }

            if(digit == 0)is_true = false;
            itr--;
        }
        printf("\n");
    }
    return 0;
}
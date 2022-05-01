#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0;
    while(count <= 255)
    {
        printf("\n%d = ASCII value of %c",count,count);
        count++;
    }
    return 0;
}
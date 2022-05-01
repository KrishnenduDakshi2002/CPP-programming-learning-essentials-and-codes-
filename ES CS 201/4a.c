#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int n)
{
    long sum = 1;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i*i!=n)
            {
                sum = sum + i + n/i;
            }else{
                sum = sum + i;
            }
        }
    }

    if(sum==n && n!= 1){

        return true;
    }
    
    return false;
}

int main()
{
    int n;
    scanf("%d",&n);

    if(isPerfect(n))printf("%d is a perfect number",n);
    else printf("%d is not a perfect number",n);
    return 0;
}
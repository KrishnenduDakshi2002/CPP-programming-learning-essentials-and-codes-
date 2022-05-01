#include <stdio.h>
#include <string.h>
// As nothing is clearly mentioned in the question
// this program follows letter grading system for MAKAUT
// on the basis of percentage

int main()
{
    
    int marks;
    printf("Enter percentage - ");
    scanf("%d",&marks);

    switch (marks)
    {
    case 90 ... 100 :
        printf("Your grade - O (Outstanding) ");
        break;
    
    case 80 ... 89 :
        printf("Your grade - E (Excellent)");
        break;
    
    case 70 ... 79 :
        printf("Your grade - A (Very good)");
        break;
    
    case 60 ... 69 :
        printf("Your grade - B (Good)");
        break;
    
    case 50 ... 59 :
        printf("Your grade - C (Fair)");
        break;

    case 40 ... 49 :
        printf("Your grade - D (Bad)");
        break;
    
    default :
        printf("Your grade - F (Failed)");
        break;

    }

    return 0;
}
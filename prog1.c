#include<stdio.h>
int main()
{
    int choice;
    printf("Enter a number:");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
            printf("You typred %d", choice);
            break;
        case 2:
            printf("You typed %d", choice);
            break;
        case 3:
            printf("You typed %d", choice);
            break;
        default:
            printf("You typed something else");
    }
    return 0;
}

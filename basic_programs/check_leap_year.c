#include <stdio.h>
int main()
{
    int y;

    printf("Enter year to be checked : ");
    scanf("%d",&y);

    if(y % 4 == 0)
    {
    	//Nested if else
        if( y % 100 == 0)
        {
            if ( y % 400 == 0)
                printf("%d is a LEAP YEAR", y);
            else
                printf("%d is not a LEAP YEAR", y);
        }
        else
            printf("%d is a LEAP YEAR", y );
    }
    else
        printf("%d is not a LEAP YEAR", y);

    return 0;
}

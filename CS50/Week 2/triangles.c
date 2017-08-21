#include <stdio.h>
#include <stdlib.h>

int main(){

    /*triangle a*/
    int a;
    int b;

    /*triangle b*/
    int c;
    int d;

    /*triangle c*/
    int e;
    int f;

    /*triangle d*/
    int g;
    int h;

    printf("(A)\n\n");

    for(a = 0; a < 10; a++)
    {
        for (b = 1; b <= a; b++)
        {
            printf("*");
        }
        printf("*\n");
    }

    printf("(B)\n\n");

    for(c = 10; c >= 1; --c)
    {
        for(d = 1; d <= c; ++d)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("(C)\n\n");

    for(e = 0; e < 10; e++)
    {
        for(f = 1; f < 11; f++)
        {
            if(f <= e)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    printf("(D)\n\n");

    for(g = 1; g <= 10; g++)
	{  
        for(h = 1; h <= 10; h++)
		{
            if(h <= 10 - g)
			{
                printf(" "); 
            } else 
			{
                printf("*"); 
			}
        }
        printf("\n");  
    }  
    return 0;
}
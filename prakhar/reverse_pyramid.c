#include <stdio.h> 
int main ()
{ 
    int n,i,j ;
    printf (" Enter the number of row : ") ;
    scanf (" %d " ,&n) ;

    for ( i =5 ; i<=1 ; i--)
    {
        for ( j=1 ; j<=2*i-1 ; j++)
        {
            printf ("*") ;
        }
        printf ( "\n") ;
    }
    return 0 ;
}
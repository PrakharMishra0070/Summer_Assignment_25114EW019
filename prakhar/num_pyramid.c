# include <stdio.h>
int main ()
{
    int n,j,i ;
    printf ("Ente the number of row : ") ;
    scanf ("%d", &n) ;

    for( i=1 ; i <=5 ; i++)
    {
        for ( j=1 ; j<=1 ; j++)
        printf("%d",j) ;

        for (j=i-1 ; j>=1 ; j--)
        printf ( "%d",j) ;

        printf ("\n") ;
       
    }
      return 0 ;
}
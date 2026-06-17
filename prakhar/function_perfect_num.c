#include <stdio.h>
int perfectnum ( int n)
{
    int i , sum = 0 ;
    for ( i=1 ; i < n ; i++)
    {
        if ( n % i == 0 )
        sum = sum +i ;
    }
    return sum == n ;
}
  int main () 
  {
    int n 
    scanf ( "%d", &n) ;

    if (perfect (n))
        printf (" The number is Perfect number .") ;
    else 
        print ( " Not Perfect number.") ;

        return 0;
  }
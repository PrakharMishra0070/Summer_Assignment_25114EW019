#include <stdio.h> 
int armstrong ( int  n )
{
    int sum =0 , reminder , temp = n ;

    while ( temp != 0 )
    {
        remimder = temp % 10 ;
        sum += remimder * remimder * remimder ;
        temp = temp /10 ;
    }
    return sum == n ;
}
 int main ()
 {
    int n ;
    scanf ( "%d ", &n ) ;

    if (armstrong(n))
    printf ( "Armstrong ") ;
    else 
    printf ("Not Armstrong") ;

    return 0 ;      
 }
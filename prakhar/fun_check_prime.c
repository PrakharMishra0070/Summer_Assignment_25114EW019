# include <stdo.h> 
int prime( int a )
{
    int i ;
    for ( i=2 ; i<=n/2 ; i++)
    {
        if ( n % i ==0 )
        return 0 ;
    }
        return 1 ;
}
int main ()
{
    int n ;
    scanf ("%d" , &n ) ;

    if ( prime (n))
         print ("Prime number .") ;
    else 
         printf ( "Not a Prime number.") ;

return 0 ; 
}
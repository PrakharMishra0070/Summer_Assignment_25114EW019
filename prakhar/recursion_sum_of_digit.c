# include <stdio.h> 
int sumdigit (int n )
{
    if ( n==0) 
    return 0;
    return ( n % 10 ) + sumdigit( n / 10 );

}
int main ()
{
    int n ;
    printf (" Enter the number: ");
    scanf ("%d",&n) ;

    printf (" Sum of digit of given number is : " sumdigit(n));

    return 0;

}
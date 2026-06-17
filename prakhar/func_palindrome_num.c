#include <stdio.h> 
int palindrome (int n )
{
    int reverse = 0 , reminder , temp = n ;

    while ( temp != 0 )
    {
        reminder = temp % 10 ;
        reverse = reverse * 10 + reminder ; 
        temp = temp / 10 ; 
    }
    return reverse == n ; 
}

int main ()
{
    int n ;
    scanf ( "%d" , &n );

    if ( palindrome (n))
    printf (" Palindrome ");
    else 
    printf (" Not Palindrome .") ;   
 
 return 0; 
}

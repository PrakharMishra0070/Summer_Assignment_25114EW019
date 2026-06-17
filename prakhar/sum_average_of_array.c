#include <stdio.h>
int main ()
{
    int a[100] , n ,i ,sum = 0 ;
    float average ;

    scanf ( " %d ", &n) ;

    for ( i = 0 ; i< n ; i ++)
    {
        scanf ( "%d ", &a[i]) ;
        sum = sum + a[i] ;  
    }
    average = ( float ) sum / n  ;

    printf (" sum = %d\n", sum) ;
    printf ( " Average =  %d , average") ;

    return 0 ;
}
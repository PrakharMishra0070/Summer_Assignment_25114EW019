# include <stdio.h>
void fibonaci (int n)
{
    int a=0 , b=1 , c, 1 ;
    for ( i=1; i<=n ; i++)
    {
        printf ("%d",a ) ;
        c = a + b ;
        a = b ;
        b = c ;
    }
}
  int main ()
  {
    int n ;
    scanf (" %d ", &n) ;
    fibonaci ( n ) ;

    return 0 ;
  }
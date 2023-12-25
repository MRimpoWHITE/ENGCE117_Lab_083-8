#include<stdio.h>

int main(){

    int n ; 

    printf( "Input (n) : " ) ;
    scanf( "%d" , &n ) ;

    for ( int i = 0; i < n ; i++ )
    {
        printf( "[%d] Hello World\n" , i + 1 ) ; 
    } // end for

    //test

    printf("test") ;


    return 0 ;
}// end function
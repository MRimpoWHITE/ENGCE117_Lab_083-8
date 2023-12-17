#include <stdio.h>

int *GetSet( int * ) ;

int main()
{
    int *data , num ;
    data = GetSet( &num ) ;
    
    printf("\n%d" , data ) ;

    return 0 ;
} // end function

int *GetSet(int *){

    int* num ;
    printf(" Enter Number of set : " ) ;
    scanf( "%d" , num ) ; 

    int *data = new int[*num];

    printf("\n%d" , num ) ;


    return data ;
}
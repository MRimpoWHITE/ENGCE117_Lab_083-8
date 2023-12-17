
#include <stdio.h>
#include <string.h>

void GetSet(int *[], int *);

int main()
{
    int *data, num;
    GetSet( &data, &num );

    return 0;
} // end function


void GetSet( int **data, int *num ){

    printf( "Input the size of the set[] : " ) ;
    scanf( "%d" , num ) ;

    *data = new int[*num] ;


    for (int i = 0; i < *num ; i++)
    {
        printf( "Input Data in set[%d] : " , i + 1 ) ;
        scanf( "%d" , &(*data)[i] ) ;
    } // end for

    printf( "=====================\n" ) ;

    printf("Number of set[%d] \n" , *num );

    for (int i = 0; i < *num ; i++)
    {
        printf( "Data set[%d] : %d\n" , i + 1 , (*data)[i] ) ;
    } // end for

    delete [] data ;

}// end function GetSet









// #include <stdio.h>
// #include <string.h>

// void GetSet( int **data , int *num );

// int main()
// {
//     int *data , num ;
//     GetSet( &data , &num ) ;

//     printf( "=====================\n" ) ;

//     printf("Number of set[%d] \n" , num );
//     for (int i = 0; i < num ; i++)
//     {
//         printf( "Data  set[%d] : %d\n" , i + 1 , data[i] ) ;
//     } // end for

//     delete [] data ;

//     return 0 ;
// } // end function

// void GetSet( int **data , int *num ){

//     printf( "Input the size of the set[] : " ) ;
//     scanf( "%d" , num ) ;

//     *data = new int[*num] ;


//     for (int i = 0; i < *num ; i++)
//     {
//         printf( "Input Data in set[%d] : " , i + 1 ) ;
//         scanf( "%d" , &(*data)[i] ) ;
//     } // end for

// }// end function GetSet
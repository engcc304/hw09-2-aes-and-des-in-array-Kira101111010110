/*
    ให้ผู้ใช้กรอกค่าเข้ามาเก็บในอาเรย์ จากนั้นให้ทำการแสดงค่าข้อมูล 2 แบบคือ "เรียงข้อมูลจากมากไปน้อย" และ "เรียงข้อมูลจากน้อยไปมาก"
    
    Test case:
        Input : 
            1
        Input : 
            5
        Input : 
            1
        Input : 
            4
        Input : 
            6
        Input : 
            9
        Input : 
            13
        Input : 
            -1
    Output:
        0-99 : 1 1 4 5 6 9 13
        99-0 : 13 9 6 5 4 1 1

*/
#include <stdio.h>

int main() {

    int array[99] ;
    int check = 0 ;
    int cout = 0 ;
    int temp = 0 ;

    while ( check != -1 ) {
        printf( "Input : \n" ) ;
        scanf( "%d", &check ) ;
        if ( check != -1 )
        {
            array[cout] = check;
            cout++ ;
        } // end if
    } // end while
    for ( int i = 0 ; i < cout ; i++ ) {
        for ( int j = i + 1 ; j < cout ; j++ ) {
            if (array[i] > array[j]) {
                temp = array[i] ;
                array[i] = array[j] ;
                array[j] = temp ;
            } // end if
        } // end for j
    } // end for i

    printf( "0-99 :" ) ;
    for ( int i = 0 ; i < cout ; i++ ) {
        printf( " %d", array[i] ) ;
    } // end for
    for (int i = 0; i < cout; ++i) {
        for ( int j = i + 1 ; j < cout ; j++ ) {
            if ( array[i] < array[j] ) {
                temp = array[i] ;
                array[i] = array[j] ;
                array[j] = temp ;
            } // end if
        }   // end for j
    }   // end for i
    printf("\n99-0 :");
    for ( int i = 0 ; i < cout ; i++ ) {
        printf( " %d", array[i] ) ;
    } // end for
    return 0 ;
} // end main
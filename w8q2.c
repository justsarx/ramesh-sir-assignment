//Write a program to print and element and its address using pointer.
#include <stdio.h> 
int main() 
{ 
    int a; 
    int* ptrtoa; 
    ptrtoa = &a; 
    a = 5; 
    printf("The value of a is %d\n", a); 
    printf("The address of a is %d\n", &a); 
    printf("The value of ptrtoa is %d\n", ptrtoa); 
    printf("It stores the value %d\n", *ptrtoa); 
    return 0; 
}
//Write a program to display the examination result of students using bit fields.


#include <stdio.h> 
#include <string.h> 

struct Examinee { 
	unsigned int rollno : 5; 
	unsigned int age : 3; 
	unsigned int marks : 6; 
	unsigned int passing : 1; 
}; 

int main() 
{ 
	struct Examinee e1 = { 1, 6, 255, 1 }; 
	printf("Size of structure is %lu bytes\n", sizeof(e1)); 
	printf("Roll number is %d\n", e1.rollno); 
	printf("Age is %d\n", e1.age); 
	printf("Marks are %d\n", e1.marks); 

	if (e1.passing == 1) 
		printf("Passed\n"); 
	else
		printf("Failed\n"); 

	return 0; 
}
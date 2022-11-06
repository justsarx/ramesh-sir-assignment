//Write a program to find the perfect square from 1 to 500.
# include <stdio.h>
# include <math.h> 
int main() 
{ 
	 int m, n; 
	 float p ; 
  
 	
	for(n=1;n<=500;n++)
	{
		p = sqrt(n) ; 
 		m = p ; 
 		if (p == m) 
  			printf("%d ", n) ; 
 		  		
	}
	
 	return 0;
} 
			
	
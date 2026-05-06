/*Name:-Krunali Devanand Joshi
PRN:-2503033111378UD009*/


#include <stdio.h>

int main()

{
	int i,numA=1,numB=0,numC;
	
	
	for(i=1;i<=10;i++)
	
	{
		
		numC=numA+numB;
		
		numA=numB;
		numB=numC;
		
		printf("%d\n",numC);
	}
	
	return 0;
}

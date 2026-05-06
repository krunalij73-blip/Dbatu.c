/*Name:-Krunali Devanand Joshi
PRN:-2503033111378UD009*/



#include <stdio.h>
int main()

{
	float dia,area,cir,r;
	
	
	printf("Enter the diameter of the circle :\t");
	scanf("%f",&dia);
	
	r=dia/2;
	area=3.14*(r)*(r);
	
	printf("\n area of the circle is %f ",area);
	
	cir=2*3.14*(r);
	printf("\n circumference of the circle %f", cir);
	
	return 0;
}

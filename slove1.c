#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	double a,b,c,disc,x1,x2,p,q;
	scanf("%lf%lf%lf", &a,&b,&c);
	disc=b*b-4*a*c;
	if (disc<0)
		printf("unsolvable");
	else
	{
		p=-b/(2.0*a);
		q=sqrt(disc)/(2.0*a);
		x1=p+q;x2=p-q;
		printf("x1=%7.2f\nx2=%7.2f",x1,x2);
	}
	system("pause");
	return 0;
}
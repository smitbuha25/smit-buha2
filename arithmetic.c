#include<stdio.h>
main()
{
	int a=5,b=3,c;
	c=a+b;
	printf("%d+%d=%d\n",a,b,c);
	c=a-b;
	printf("%d-%d=%d\n",a,b,c);
	c=a*b;
	printf("%d*%d=%d\n",a,b,c);
	c=a/b;
	printf("%d/%d=%d\n",a,b,c);
	c=a%b;
	printf("a%b=%d",a,b,c);
}

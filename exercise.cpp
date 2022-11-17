#include <iostream>
 
int main()
{
	int i=0;
	int sum=0;
    for (;i<=100; ++i)
	{
		sum += i;
		printf("%i+",i);
	}
	printf("%i=%i",i,sum);
}

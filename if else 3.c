#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    scanf("%d",&a);
    if(a%5==0)
	{
		printf("5 ");
		if(a%7==0)
			printf("7");
    }
	else
    {
		if(a%7==0)
			printf("7");
    }
	system("pause");
	return 0;
}

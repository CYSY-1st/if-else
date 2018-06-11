#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    scanf("%d",&a);
    if(a>0)
		printf("%d",a);
    if(a<0)
		printf("%d",0-a);
    else
		printf("0");
	system("pause");
	return 0;
}

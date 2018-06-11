#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b>c)
		printf("%d %d %d",a,b,c);
    if(a>c>b)
		printf("%d %d %d",a,c,b);
    if(b>a>c)
		printf("%d %d %d",b,a,c);
    if(b>c>a)
		printf("%d %d %d",b,c,a);
    if(c>a>b)
		printf("%d %d %d",c,a,b);
    if(c>b>a)
		printf("%d %d %d",c,b,a);
    else
		printf("%d %d %d",a,b,c);
	system("pause");
	return 0;
}

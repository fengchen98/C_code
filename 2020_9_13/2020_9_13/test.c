#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a = %d b = %d c = %d\n:", a, b, c);
	return 0;
}
	
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0; 
//}
//int main()
//{
//	 int i = 0, a = 1, b = 2, c=3,d=4;
//	 i = a++ || ++b || d++;
//	 printf("%d %d %d %d",a,b,c,d);
//return 0;
//}
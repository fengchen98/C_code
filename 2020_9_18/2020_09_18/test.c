#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	total = money;
	empty = money;
	while(empty>1)
	{
		total += empty/2;
		empty = empty/2+empty%2;
	}
	printf("%d\n",total);
	return 0;
}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//void print(struct Stu* s){
//	printf("%s %d\n",s->name,s->age);
//
//}
//int main()
//{
//	struct Stu s={"zhangsan",20};
//	print(&s);
//	return 0;
//}
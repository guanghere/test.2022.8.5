#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//static--��̬��
//1 . static ���ξֲ�����
//2 . static ����ȫ�ֱ���
//3 . static ���κ���
//void ADD() {
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//
//int main() {
//
//	int i = 0; 
//	while (i < 10) {
//
//		ADD();
//		i++;
//	}
//	return 0;
//}


//1 . static ���ξֲ�����
//static ���ξֲ�������ʱ�򣬸ı��˾ֲ������Ĵ洢����
//����һ���ֲ������Ǵ洢��ջ���ģ���static���ι����洢�ھ�̬��
//��ջ���ľֲ�����������������������
//��static���εľֲ�����������������������������Ȼ��
//
//
//void ADD() {
//	static int a = 0;
//	a++;
//	printf("%d ", a);
//}
////�ͳ������������һ��
//
//int main() {
//	int i = 0; 
//	while (i < 10) {
//		ADD();
//		i++;
//	}
//	return 0;
//}
//ʹ�ó���������֮��ϣ�����ı䣬��ԭ���Ļ����ϼ���ʹ��



//2 . static ����ȫ�ֱ���
//ȫ�ֱ��������ⲿ��������
//static����ȫ�ֱ�����ʱ�򣬸ı���ȫ�ֱ�������������
//����һ��ȫ�ֱ��������ⲿ���ԣ����Ǳ�static���κ�ͱ�����ڲ���������
// static���ε�ȫ�ֱ���ֻ���ڱ�Դ�ļ�(.c)��ʹ�ã������ļ��޷�ʹ��
//
//���������ⲿ�ı���
//extern int ship;
//
//int main() {
//
//	printf("%d\n", ship);
//
//	return 0;
//}



//3 . static ���κ���
//���������ⲿ�ĺ���
//extern int ADD(int, int );
//
//int main() {
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = ADD(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
//static���κ���������ȫ�ֱ����ǲ��ģ�һ����������Ҳ������������
// ����static���ε�ʱ���ⲿ�������Ծͱ�����ڲ���������
// �������ֻ���ڱ�Դ�ļ��ڲ�ʹ�ã��������������ļ�




////#define���峣���ͺ�
////define ���峣��
//#define BLCK 100
//#define BEACH "on the sea"
//
////define�����(���ƴ�д)
////���в����������Ǻ���
//#define ADD(x,y)(x+y)
////     �����������������壩
////#define ADD(x,y)((x)+(y))	�����һ������ʽ����Ҫ������������
//
//
//int main() {
//	//printf("%d\n", BLCK);//printf("%d\n", 100);
//	//printf("%s\n", BEACH);//printf("%s\n", "on the sea");
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}



//ָ��




//�ṹ��
//�ؼ��֣���ǩ��
//����һ������
//struct stu {
//	char name[20];
//	int age;
//	char sex[7];
//	long long  stunum;
//
//};
//
////����һ��ѧ��
//int main() {
//
//	struct stu s1 = { "Billy",18,"men",123456 };
//	struct stu s2 = {"Amy",19,"woman",112233};
//
//	scanf("%s %d %S %lld",s1.name, &(s1.age), s1.sex, &(s1.stunum));
//
//	//1.
//	//printf("%s %d %s %lld\n", s1.name,s1.age,s1.sex,s1.stunum);
//	// ...�ṹ��Ա���ʲ�����
//	//	�ṹ�����	.	�ṹ���Ա
//
//	//2.ͨ��ָ���ҵ������ٽ�����
//	//struct stu* pc = &s2;
//	//printf("%s %d %s %lld\n", (*pc).name, (*pc).age, (*pc).sex, (*pc).stunum);
//
//	//3.	�ṹ��ָ��	"->"	�ṹ��Ա		Ҳ���� �ṹ��Ա���ʲ�����
//	//struct stu* pc = &s2;
//	//printf("%s %d %s %lld\n", pc->name, pc->age, pc->sex, pc->stunum);
//
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//static--静态的
//1 . static 修饰局部变量
//2 . static 修饰全局变量
//3 . static 修饰函数
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


//1 . static 修饰局部变量
//static 修饰局部变量的时候，改变了局部变量的存储类型
//本来一个局部变量是存储在栈区的，被static修饰过后会存储在静态区
//在栈区的局部变量，出作用域生命结束
//被static修饰的局部变量，出作用域生命不结束且依然在
//
//
//void ADD() {
//	static int a = 0;
//	a++;
//	printf("%d ", a);
//}
////和程序的生命周期一致
//
//int main() {
//	int i = 0; 
//	while (i < 10) {
//		ADD();
//		i++;
//	}
//	return 0;
//}
//使用场景，用完之后不希望被改变，在原来的基础上继续使用



//2 . static 修饰全局变量
//全局变量具有外部连接属性
//static修饰全局变量的时候，改变了全局变量的连接属性
//本来一个全局变量具有外部属性，但是被static修饰后就变成了内部连接属性
// static修饰的全局变量只能在本源文件(.c)中使用，其他文件无法使用
//
//声明来自外部的变量
//extern int ship;
//
//int main() {
//
//	printf("%d\n", ship);
//
//	return 0;
//}



//3 . static 修饰函数
//声明来自外部的函数
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
//static修饰函数和修饰全局变量是差不多的，一个函数本身也具有连接属性
// 当被static修饰的时候，外部链接属性就变成了内部连接属性
// 这个函数只能在本源文件内部使用，不可用在其他文件




////#define定义常量和宏
////define 定义常量
//#define BLCK 100
//#define BEACH "on the sea"
//
////define定义宏(名称大写)
////宏有参数，但不是函数
//#define ADD(x,y)(x+y)
////     宏名（参数）（宏体）
////#define ADD(x,y)((x)+(y))	如果是一个表达式，就要用括号括起来
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



//指针




//结构体
//关键字，标签名
//创建一个类型
//struct stu {
//	char name[20];
//	int age;
//	char sex[7];
//	long long  stunum;
//
//};
//
////描述一个学生
//int main() {
//
//	struct stu s1 = { "Billy",18,"men",123456 };
//	struct stu s2 = {"Amy",19,"woman",112233};
//
//	scanf("%s %d %S %lld",s1.name, &(s1.age), s1.sex, &(s1.stunum));
//
//	//1.
//	//printf("%s %d %s %lld\n", s1.name,s1.age,s1.sex,s1.stunum);
//	// ...结构成员访问操作符
//	//	结构体变量	.	结构体成员
//
//	//2.通过指针找到对象，再解引用
//	//struct stu* pc = &s2;
//	//printf("%s %d %s %lld\n", (*pc).name, (*pc).age, (*pc).sex, (*pc).stunum);
//
//	//3.	结构体指针	"->"	结构成员		也属于 结构成员访问操作符
//	//struct stu* pc = &s2;
//	//printf("%s %d %s %lld\n", pc->name, pc->age, pc->sex, pc->stunum);
//
//
//	return 0;
//}
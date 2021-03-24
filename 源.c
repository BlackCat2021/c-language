#include<stdio.h>
//int age = 18;
//int main (){
//	int age = 20;
//	printf("%d\n",age);
//	return 0;
//}



//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	//输入数据使用输入函数scanf
//	scanf("%d%d",&num1,&num2);
//	int sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//}


//局部变量的作用域在大括号内部
//全局变量的作用域是整个工程
//extern 声明外部变量(另外一个原文件定义)
//int a = 10 ;
//int main()
//{
//	printf("%d\n",a);
//	return 0;
//}


//********常量********* 

   //3  字面常量
   //* 100  字面常量
   //* const  使变量不能变
   //* define 定义标识符常量
  // #define max 10  //max的值为 10且不变 
   // 枚举常量  意义一一列举---关键字  enum 枚举常量不可更改 
//   enum color {red  ,yellow,bule
//   	
//   };
//   int main(){
//   	enum color x = yellow;//默认值2   
//   	printf("%d\n",x);
//   	return 0;
//   } 


// ********字符串********


//#include<cstring>
//int main()
//{
//    eof文件结束标志 
//	char arr1[]="abc";//  \0 \n 转意字符  \? 打印多个？时防止解析为三 字母词  斜杠可以转意斜杠 
//	char arr2[]={'a','b','c'};
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	printf("%c\n",'\'');
//	printf("%s\n","\"");
//	printf("%d\n",strlen("c:\text\\32\text.c"));//  \32 代表8进制转化为10进制的数对应ascii码对应的字符 
//	return 0;
//} 


//*********循环 ***********
//*********函数*************
/*int Add(int x, int y)
{
	int sum;
	sum = x + y;
	return sum;
}

int main()
{
	int a = 10;
	int b = 20;
	int c;
	c=Add(a, b);
	printf("%d\n",c);
	return 0;
}*/


/*int main()
{
	char arr[20] = "\n";
	char arr2[20] = "####";
	strcpy(arr2,arr);//第一个参数是目标位置，第一个是源头  拷贝会拷贝\n  进而覆盖目标相应位置
	printf("%s", arr2);
	return 0;

}*/

//strcpy()函数

/*int main()
{
	char arr[20] = "hello word";
	memset(arr, '*', 5);//将arr的前五个字符用*号替代；
	printf("%s", arr);
	return 0;
}*/

//memset()函数

//void swap(int x, int y)//传值调用
// //     实参   
////  swap(1,2) 
//{
//	int tmp;
//	tmp = x;
//	x = y;//无法真正的交换  因为x与a无直接的联系
//}

//          形参  函数被调用的时候再实例化 分配内存单元  形参是实参的临时拷贝 
//对形参的改变并不会不对实参造成影响，二者没直接联系
//void swap1(int* pa ,int* pb)  // 传址调用形参实参可以有联系
//{
//	int tmp;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	swap1(&a, &b);
//	printf("%d\n%d", a, b);
//	return 0;
//}
//#include<math.h>
////int is_prime(int i)//素数返回1 否则返回0
////{
////	int j;
////	if (i % 2 == 0)
////		return 0;//代替了偶数的全部情况
////	for (j = 3; j < sqrt(i); j+=2)  //q = a*b  当过了q^1/2 ab数值调换
////	{
////		if (i% j == 0)
////		{
////			return 0;
////		}	
////	}
////	return 1;
////}
//
////素数判断函数（含有优化过程）！！！！！
//
////int main()
////{
////	int a = 0;
////	a = is_prime(11);
////	printf("%d", a);
////	return 0;
////}
//
//#include<string>
////二分差  在  有序的  数组中查找一个数
////                 不是数组而是一个指针  数组传参第一个数的地址
//int binary_search(int arr[], int k,  int size )
//{	
//	int left = 0;
//	int right = size - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int size = sizeof(arr) / sizeof((arr)[0]);
//	printf("%d", size);
//	//                     数组传参传的是第一个数的地址。。
//	int ret = binary_search(arr, k,size);
//	printf("%d", ret);
//	return 0;
//}


//函数的嵌套调用
//#include "add.h"//自己写的头文件用“”
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = a + b;
//	printf("%d", printf("%d", printf("%d", sum)));//printf打印了几个数 数值就是几
//	return 0;
//}

//定义函数应该在主函数前面
//否则需要函数声明 函数声明应该放在头文件中  调用的时候 #include“头文件.h”






//*********运算符 ********




// 
//&按位与
//| 按位或        都是在二进制位上操作 
//^按位异或  对应二进制位相同则为0  不相同则为1
// && 逻辑与 
// ||逻辑或


//int main(){
//	int a = 5%2;
//	printf("%d\n",a);
//	a<<2; //位移符 使a的二进制位进行位移，用0补齐 
//	printf("%d\n",a);
//} 
//int main(){
//	int a=(int)3.14;//括号里面写类型表示强制性转换
//	int b = 0;
//	
//	int d = a&&b;
//	printf("%d\n",d);
//	printf("%d\n",a||b);
//	int Max;
//	if (a<b)
////		Max = b;    //三目表达式   Max= （a>b ? a:b） 
//	else
//		Max = a;
//	return 0;
//} 

//b=a++  后置加加 先使用在加加   后置加加先加加在使用 
//

//#include <stdio.h> 
//int Max(int x, int y){
//	if(x > y)
//		return x;
//	else
//		return y;	
//} 
//
//#define MAX(X, Y) (X> Y? X: Y) //宏定义函数   三目表达式 
//int main(){
//	int x = 10;
//	int y = 20;
//	int M = Max(x,y);
//	int n = MAX(x,y);
//	printf("%d  %d\n",M,n);
//	return 0;
//}


//***********指针********* 
//一个内存单元是一个字节 

//int main(){
//	int a = 10; //占用四个字节的内存
//	//&a 取缔a的内存地址 
//	
//	int *p = &a;//有种变量来储存地址，这就是指针
//	printf("%p\n",p); 
//	*p =20;//  *p位指针  且相应的内存地址存20  指针在32位机上是4个字节，在64位机上是8个字节 
//	printf("%p\n",&a);
//	printf("%d\n",a);
//	return 0; 
//	
//} 

//int main(){
//	char ch = 'hello';
//	printf("%c\n",ch);
//	char* Ch = &ch;
//	*Ch = 't';
//	printf("%d\n",sizeof(Ch));//8个字节 
//	return 0;
//	
//} 

//指针类型

//指针类型决定了解引用操作访问的字节
//指针类型决定了指针加一变化的字节
//int 加4个字节  char加一个字节
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	for (int i = 0; i < 10; i++)
//		*(pa + i) = i;
//	printf("%d\n", arr[8]);
//	return 0;
//}
//指针越界会产生野指针
//函数结束内存释放也可能产生野指针（指针指向的位置被释放了）

//int main()
//{
//	int a = 0;
//	int* p NULL= ;//未初始化   使用指针的时候必须初始化  初始化常常用NULL初始化；
//	*p = 10;//找不到p指向的地址
//	printf("%d\n", *p);
//	//int a;//变量不初始化值为随机值
//	//{*p = i;
//	// p++;
//	//	等于  *p++ = i；}
//	return 0;
//}

 
//int* test()
//{
//	int a = 0;//零时变量
//	return &a;// 函数结束时a的地址还给系统
//}
//
//int main()//该程序隐形错误
//{
//	int* p = test();//p指针任指向临时变量a的地址但是地址已经被回收，很可能被计算机重新分配 故p为野指针
//	printf("%d\n", *p);//0
//	return 0;
//}

//当不用指针时把它置成空指针，防止成空指针
//指针使用前进行判断是否可用



//指针的运算
// *p++ = 0先解引用赋值在p++
// *--p = 0先减减p在接应用操作在赋值
// 指针-指针得到指针之间元素个数（必须大地址减小地址）
// 
// 
// 
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	&arr[9] - &arr[0];
//	printf("%d\n", &arr[8] - &arr[1]);//7
//	return 0;
//}
// 
// 
//指针求字符串长度
// 
// 
//int str_len(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end !='\0')
//		end++;
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int b = str_len(arr);
//	printf("%d\n", b);
//	return 0;
//}

//指针的比较大小
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与指向第一个元素之前的那个内存位置的指针进行比较。


//int main()
//{
//	int values[5] = {1,2,3,4,5 };
//	for(int* p = &values[5]; p > &values[0];)
//	{
//		*--p = 0;
//	}
//
//	printf("%d\n", values[4]);
//	return 0;
//}
// 
//二级指针存放指针的地址
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;// 二级指针
//	printf("%d\n", **ppa);//二级指针解引用用两个**
//	return 0;
//}
//指针数组  存放指针的数组
//int main()
//{
//	int a = 10;
//	int b = 9;
//	int c = 8;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* arr[10] = {0};//存放指针的数组；
//	arr[0] = pa;
//	arr[1] = pb;
//	arr[2] = pc;
//	printf("%4d\n", *arr[0]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//		printf("%d\n", *(p+i));
//	return 0;
//}
//********结构体*********
//书----结构体---复杂体    关键字struct    在python中相当于类 
#include<string.h> 
//struct Book
//{
//	char name[20];
//	short price;
//}; 
// int main() 
// {
// 	struct Book b1 = {"c语言程序设计",55};//整体初始化方法
//	 printf("价格：%d\n",b1.price);
//	 printf("名字：%s\n",b1.name);
//	 b1.price = 45;//更改数据 
//	 strcpy(b1.name, "C++");//名字是数组形式的不能直接更改 数组更改方法  strcpy（） {重新复制一个数组进行命名} 必须与应用头文件#include<string.h> 
//	 printf("更改后的书名是%s\n",b1.name);
//	 printf("降价过后的价格是%d\n",b1.price);
//	 struct Book* pb = &b1;  //创建指针w 
//	 printf("%d\n",(*pb).name);
//	 printf("%d\n",(*pb).price);
//	 printf("%s\n",pb->name);  // 用指向符号的时候指针不用*号 
//	 printf("%d\n",pb->price);
//	 return 0;
//  } 


//********分支语句与循环语句*********

//c语言中由分号隔开的是一条语句 
//int main()
//{
//	int age;
//	printf("小屁孩你多大\n");
//	scanf("%d",&age);
//	if (age<18)
//	{
//		printf(" 你好小学生\n");
//		printf("%d\n",age);
//	}
//	else printf("你好打工人");  //else总是和离自己最近的未匹配的if相匹配 
////空语句只含分号 
//return 0;
//} 
// 

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (1 == i % 2)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)    //不能出现continue 可以嵌套使用
//	{
//	/*case 1:printf("星期一");
//		break;
//	case 2:printf("星期二");
//		break;
//	case 3:printf("星期三");
//		break;
//	case 5:printf("星期五");*/
//	case 1:
//	case 2:
//	case 3: //case 是入口
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default: //输入错误将后面的执行程序
//		printf("请重新输入\n");
//		break;
//	}
//	return 0;
//}




//int main()
//{
//	int n;
//	printf("请输入一个数字\n");
//	scanf("%d", &n);
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;
//	case 2: n++;
//	case 3: 
//		switch (n)
//		{
//		case 1: n++;
//		case 2: m++, n++;
//			break;
//		}
//		break;
//	case 4: m++;
//		break;
//	default:
//		printf("请输入一个数字\n");
//		scanf("%d", &n);
//	
//	}
//	printf("m = %d, n = %d", n, m);
//	return 0;
//}

//while循环

//int main()
//{
//	int a = 0;
//	int n = 0;
//	while ((n = getchar()) != EOF)
//	{
//		putchar(n);
//	}
//	/*while ((a = getchar()))
//	{
//		;
//	}*/   //这段代码能清空缓冲区的字符
//	return 0; 
//}
//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)//一直输入字符
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//输出输入字符串中数字部分

//for 循环
//int main()
//{
//	int i;
//	//  初始  判断   调整
//	for (i = 1; i <= 10; i++)
//		printf("%d", i);
//	return 0;
//}


/******** 做题********/

/*int main()
{
	int a, b, c;
	int tmp;
	scanf("%d %d %d", &a, &b, &c);//  scanf 函数三个数中间的符号与输入时的符号应该相同 通常不输最好；
	if (a > b)
	{
		tmp = a;
		a = b;
		b = a;
	}
	if (b > c)
	{
		tmp =  b;
		b = c;
		c = tmp;
	}
	if (a > b)
	{
		tmp = a;
		a = b;
		b = a;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}*/
//排序三个数

/*int main()
{
	int a, b, tmp;
	scanf("%d%d", &a, &b);
	while (a % b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	printf("%d\n", b);
	return 0;
}*/
//辗转相除法求最大公因数


/*int main()
{
	int year;
	int count = 0;
	for (year = 1; year <= 1000; year++) {
		if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))  //闰年能杯被四整除且不能被100整除 能被400整除。
			count++;
	};
	printf("%d\n", count);
	return 0;
}*/
//求闰年
#include<math.h>

/*int main()
{
	int i;
	int j;
	int count = 0;
	for (i = 101; i <= 200; i+=2)//偶数不可能是素数
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}//        开平方i   二分之i也可以
			if (j >sqrt(i))//数据优化减少循环
			{
				printf("%d ", i);
				count++;
			}
	}
	printf("\n\n\n\n%d\n", count);
	//判断是否为素数（试除法）
	//用小于本身的数进行试除
	return 0;*/
	//}//素数求解的N种境界

	//求素数
	//int main()
	//{
	//	int i = 0;
	//	double sum = 0;
	//	int sign = 1;
	//	for(i = 1; i <= 100; i++)
	//	{
	//		sum = sum + sign*1.0 / i;
	//		sign = -sign;
	//	}
	//	printf("%fl\n", sum);
	//	return 0;
	//}

	/*int main()
	{
		int i = 0;
		int j = 0;
		for (i = 1; i < 10; i++)
		{
			for (j = 1; j <=i; j++)
			{
				printf("%d * %d = %2d  ",i, j, i * j);//%2d表示打印两位 不足两位用空格补齐
			}    %-2d  左对齐
			printf("\n");
		}
		return 0;
	}*/
	//九九乘法表
#include<time.h>
#include<stdlib.h>
//void menu()
//{
//	printf("**************************************\n");
//	printf("**        1:play          0:eixt    **\n");
//	printf("*************************************\n");
//}
//
//void game()
//{
//	int randint;
//	int m= 0;
//	randint = rand();
//	randint = randint%100 ; //程序启用产生函数总是相同
//	//rand 的参数要不断的变才能真正意义上产生随机数
//	//用时间戳 产生rand参数
//	//当前计算机的时间减去1990年0时0时0分转化成秒数的数值
//	
//	printf("请猜数字\n");
//	scanf("%d", &m);
//	while (1)
//	{
//		if (randint < m)
//		{
//			printf("猜大了\n");
//		}
//		else if (m < randint)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你\n");
//			break;
//		}
//		scanf("%d", &m);
//	}
//}
//
////猜字游戏
//#define _CRT_SECURE_NO_WARNINGS
//
//int main()
//{
//	srand((unsigned int)time(NULL));//设置随机数的生成器
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误，请重新选择\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}


//goto语句直接跳到想要的语句   容易逻辑混乱  尽量少用   适用跳出于深度嵌套循环
//int main()
//{
//	char ch[20] = {};
//	system("shutdown -s -t 60");
//	while (1)
//	{
//	printf("你的电脑即将在一分钟内关机，请您输入‘我是猪’取消关机\n");
//	scanf("%s", &ch);
//	/*if (strcmp(ch, "我是猪") == 0)
//		system("shutdown -a");
//	else
//		goto again;*/
//		if (strcmp(ch, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("算你聪明"); 
//			break;
//;		}
//	}
//	return 0;
//} 
// 

//关机程序

//***********递归************
//常见错误栈溢出，栈空间被耗干

//  倒叙输出输入的数字

//void print(int num)
//{
//	printf("%d", num % 10);
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//}
////递归
//int main()
//{
//	unsigned num;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int my_strlen(char* ch)
//{
//	int count = 0;
//	while(*ch != '\0')
//	{
//		count++;
//		ch++;
//	}
//	return count;
//}

//int my_strlen(char* ch)
//{
//	if (*ch != '\0')
//		return 1 + my_strlen(ch + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[100] = {};
//	arr[3] = 'r';
//	printf("%c%c", arr[3],arr[2]);
//	int sum;
//	 sum = my_strlen(arr);
//	// printf("%d", sum);
//	return 0;
//}



//斐波那契数列；
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n < 3)
//	return 1;
//	for (int i = 1; i <= n-2; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int num;
//	scanf("%d", &n);
//	num = Fib(n);
//	printf("%d", num);
//	return 0;
//}

// 汉诺塔问题  ----经过了两个小时才算出来；  zx辣鸡
//int m = 0;
//int han(int n, int begin, int center, int end)
//{
//	
//	if (n == 1)
//	{
//		printf("%d-->%d\n", begin, end);
//		m++;
//		return m;
//	}
//	han(n - 1, begin, end, center);
//	printf("%d-->%d\n", begin,end );
//	m++;
//	han(n - 1, center, begin, end);
//}
//
//int main()  
//{
//	int n;
//	int numot;//移动次数
//	scanf("%d",&n);
//	m = han(n,1,2,3);
//	printf("%d", m);
//	return 0;
//}

//青蛙条问题
//int count = 0;
//
//int jump(int n)
//{
//	if (n == 0)
//	{
//		count++;
//		return 0;
//	}
//	else if (n == -1)
//	{
//		return 0;
//	}
//
//	jump(n - 1);
//	jump(n - 2);
// }
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	jump(n);
//	printf("%d", count);
//	return 0;
//}
//

//创建一个数组

//int main()
//{
//	int arr[20] = {1, 2, 4, 5, 6, 7, 8, 9};//不完全初始化  剩下的元素全部是0
//	char arr2[5] = { 'a', 'b' };  //b处的地方还可以写98  98对应的ascii 表的值是b
//	/*int n = 10;
//	* sizeof()  求字符串数组的大小千万不要忘记'\0' 是一个操作符  单位是bite
//	* 
//	* arr_n[] = {'b', 'c' , 'n' }
//	* arr_m[] = "bit"
//	* 
//	* strlen(arr_m) = 3
//	* strlen(arr_n) = 随机值 （因为在数组中不知道什么时候才找到‘\0’）
//	* sizeof(arr_m) = 4    '\0'还占一个字节
//	* sizeof（arr_n） = 3
//	* strlen() 求字符串的长度遇到‘\0’结束  是一个库函数
//	char[n];// error   数组的长度应该为常量*/   
//	return 0;
// }//    去掉数组名就是数组的类型


//int main()
//{
//	//                          0   1   2   3   4   5   6
//	char arr[] = "abcdefg";  //[a] [b] [c] [d] [e] [f] [g]
//	int len = strlen(arr);//求数组的长度。
//	for (int i = 0; i <= len - 1; i++)
//		printf("%c\n", arr[i]);
//	return 0;
//}
//数组的访问


//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7};
//	int sa = sizeof(arr)/sizeof(arr[0]);
//	for (int i = 0; i < sa; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]);
//	}
//	return 0;
//}//数组在空间地址是连续的


//二维数组的创建以及初始化
//int main()
//{
//	int arr[3][4] = { {1,2,3,4}, {1,2,3,4} };//3行4列
//	//int arr1[][4] = { {1,3,5,7},{5,7,8,9} };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d",arr[i][j]);//访问
//		}
//		printf("\n");
//	}
//	//二维数组初始化时可以省略行但是不能省略列
//	return 0;
//}

//二维数组是怎么存储的？？？
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,0,8,7} };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}结论二维数组的存储是连续的

//冒泡排序法排序数组

//void bubble_sort(int arr[], int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - 1 - i; j++)
//		{
//			int flag = 1;//优化
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];  //9 8 7 6 5 4 3 2 1 
//				arr[j + 1] = tmp;
//				flag = 0;//优化
//			}
//			if (flag == 1)  //优化
//				break;
//		}
//	}
//}
////问题： 如果排序在途中已经完成排序后面的过程是无用的
////优化: 在进行排序时做一个标记如果在中途不出现交换，表示排序已完成 可以提前退出程序；
//
//int main()
//{
//	int arr[] = {10,9,8,7,6,5,4,3,2,1};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", size);//10
//	printf("%d\n", sizeof(arr));//40
//	printf("%p\n", arr);//数组名就是首地址 = &arr[0]
//	bubble_sort(arr, size);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//return 0;
//}

//数组名在以下两种情况代表数组
//   1：在使用操作符sizeof（）时
//   2: 在使用&符号是  地址代表 数组的地址但是输出时任然以首字母表示；

//************************操作符****************
//   右移操作符   >>  二进制位向右移一位相当于去掉最右边的一位，数值除以二；
//   左移操作符   <<   二进制位向左移一位在末尾添一个0；数值乘以二；
//   移位不能移动负数位只能作用于整数
//在计算机中数值以补码的形式存储
//int main()
//{
//	int a = 9;
//	a = a >> 1;   
//	printf("%d\n", a);
//	return 0;
//}

//   & 按位与（二进制）都为1则为1否则为0
//   | 按位或    有1 则1否则为0
//   ^  按位异或    相同为0 不同为1
//0^a = a  ; a^b^b = a; b^b = 0   可用于两数交换，找出基数个数的数
//   & 取地址操作符
//   * 解引用操作符用于取出指针指向的值
//   sizeof 计算变量所占内存的大小
//     ~    按位取反
//    （int）在数据前面放强制性转换

//int main()//按位取反
//{
//	int a = 11;
//	int b = (1 << 2) | a;
//	printf("%d\n", b);
//	b = b& ~(1 << 2);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//强制转换
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 3;//00000000000000000000000000000011
//	int b = 5;//00000000000000000000000000000101
//	int c = a & b;// 00000000000000000000000000000001
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	long b = 0;
//	int* p = &a;
//	float c = 123456789.123456789;
//	double d = 123456789.123456789;
//	long double g = 0;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof p);
//	printf("%d\n", sizeof(b));
//	printf("%f\n", c);
//	printf("%d\n", sizeof(c));
//	printf("%lf\n", d);
//	printf("%d\n", sizeof(d));
//	printf("%d\n", sizeof(g));
//	return 0;
//}

//结论：无论是32位机还是64位机 整型还是实型所占空间大小相同，指针的大小会改变，32位指针占4个字节  64位机指针占8个字节
//int main()
//{
//	int a;
//	int count = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < 32; i++)
//	{
//		a = a >> i;
//		if (a & 1 == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}、、计算一个数储存在内存中二进制1的个数

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2   short 的长度
//	printf("%d\n", s);//0  sizeof(）中的表达式不会真正的计算
//	return 0;
//}


//逗号表达式  依次计算最后一个表达式才起作用
//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a += 1, b -= 1, b > 0)
//		printf("%d %d\n", a, b);
//	return 0;
//}

//struct stu {
//	char name[10];
//	int age;
//	char sex[];
//};
//
//int main()
//{
//	struct stu s2 = { "zhangsan",20,"male" };
//	struct stu* p = &s2;
//	printf("%s\n",p->sex);
//	printf("%d\n", s2.age);
//	return 0;
//}

///C语言中char short类型在计算中会先转化为整形在计算,  为了获得精度  这叫整形提升 计算结果进行截断转换为原类型
//   有符号数整形提升用最高位（符号位）补充
//   无符号数直接补零

//int main()
//{
//	char a = 0xb6;  
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)//整型提升
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//写表达式时要有唯一顺序否者就为问题表达式



//结构体
typedef struct stu {
	char name[10];
	int age;
}stu;
void print1(stu s1)
{
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
}
void print2(stu* s1)
{
	printf("s1's name is %s\n", s1->name);
	printf("s1's age is %d\n", s1->age);
}
int main()
{
	stu s1 = { "张三",18 };
	print2(&s1);
	print1(s1);
	return 0;
}
//print2与print1相比较更节省时间空间     函数传参是参数的零时拷贝如果结构体过大会消耗大量的资源，结构体传参传传地址为宜


/*内存  1.栈区  （局部变量储存空间）
*				调用函数先为函数开辟空间
*				传参参数是由右向左传参 传参的时候是一个压栈操作，如果结构体过大会降低性能
*		2.堆区  （全局变量）
*		3.静态区
*/


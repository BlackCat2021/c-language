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
//	//��������ʹ�����뺯��scanf
//	scanf("%d%d",&num1,&num2);
//	int sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//}


//�ֲ��������������ڴ������ڲ�
//ȫ�ֱ���������������������
//extern �����ⲿ����(����һ��ԭ�ļ�����)
//int a = 10 ;
//int main()
//{
//	printf("%d\n",a);
//	return 0;
//}


//********����********* 

   //3  ���泣��
   //* 100  ���泣��
   //* const  ʹ�������ܱ�
   //* define �����ʶ������
  // #define max 10  //max��ֵΪ 10�Ҳ��� 
   // ö�ٳ���  ����һһ�о�---�ؼ���  enum ö�ٳ������ɸ��� 
//   enum color {red  ,yellow,bule
//   	
//   };
//   int main(){
//   	enum color x = yellow;//Ĭ��ֵ2   
//   	printf("%d\n",x);
//   	return 0;
//   } 


// ********�ַ���********


//#include<cstring>
//int main()
//{
//    eof�ļ�������־ 
//	char arr1[]="abc";//  \0 \n ת���ַ�  \? ��ӡ�����ʱ��ֹ����Ϊ�� ��ĸ��  б�ܿ���ת��б�� 
//	char arr2[]={'a','b','c'};
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	printf("%c\n",'\'');
//	printf("%s\n","\"");
//	printf("%d\n",strlen("c:\text\\32\text.c"));//  \32 ����8����ת��Ϊ10���Ƶ�����Ӧascii���Ӧ���ַ� 
//	return 0;
//} 


//*********ѭ�� ***********
//*********����*************
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
	strcpy(arr2,arr);//��һ��������Ŀ��λ�ã���һ����Դͷ  �����´��\n  ��������Ŀ����Ӧλ��
	printf("%s", arr2);
	return 0;

}*/

//strcpy()����

/*int main()
{
	char arr[20] = "hello word";
	memset(arr, '*', 5);//��arr��ǰ����ַ���*�������
	printf("%s", arr);
	return 0;
}*/

//memset()����

//void swap(int x, int y)//��ֵ����
// //     ʵ��   
////  swap(1,2) 
//{
//	int tmp;
//	tmp = x;
//	x = y;//�޷������Ľ���  ��Ϊx��a��ֱ�ӵ���ϵ
//}

//          �β�  ���������õ�ʱ����ʵ���� �����ڴ浥Ԫ  �β���ʵ�ε���ʱ���� 
//���βεĸı䲢���᲻��ʵ�����Ӱ�죬����ûֱ����ϵ
//void swap1(int* pa ,int* pb)  // ��ַ�����β�ʵ�ο�������ϵ
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
////int is_prime(int i)//��������1 ���򷵻�0
////{
////	int j;
////	if (i % 2 == 0)
////		return 0;//������ż����ȫ�����
////	for (j = 3; j < sqrt(i); j+=2)  //q = a*b  ������q^1/2 ab��ֵ����
////	{
////		if (i% j == 0)
////		{
////			return 0;
////		}	
////	}
////	return 1;
////}
//
////�����жϺ����������Ż����̣�����������
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
////���ֲ�  ��  �����  �����в���һ����
////                 �����������һ��ָ��  ���鴫�ε�һ�����ĵ�ַ
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
//	//                     ���鴫�δ����ǵ�һ�����ĵ�ַ����
//	int ret = binary_search(arr, k,size);
//	printf("%d", ret);
//	return 0;
//}


//������Ƕ�׵���
//#include "add.h"//�Լ�д��ͷ�ļ��á���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = a + b;
//	printf("%d", printf("%d", printf("%d", sum)));//printf��ӡ�˼����� ��ֵ���Ǽ�
//	return 0;
//}

//���庯��Ӧ����������ǰ��
//������Ҫ�������� ��������Ӧ�÷���ͷ�ļ���  ���õ�ʱ�� #include��ͷ�ļ�.h��






//*********����� ********




// 
//&��λ��
//| ��λ��        �����ڶ�����λ�ϲ��� 
//^��λ���  ��Ӧ������λ��ͬ��Ϊ0  ����ͬ��Ϊ1
// && �߼��� 
// ||�߼���


//int main(){
//	int a = 5%2;
//	printf("%d\n",a);
//	a<<2; //λ�Ʒ� ʹa�Ķ�����λ����λ�ƣ���0���� 
//	printf("%d\n",a);
//} 
//int main(){
//	int a=(int)3.14;//��������д���ͱ�ʾǿ����ת��
//	int b = 0;
//	
//	int d = a&&b;
//	printf("%d\n",d);
//	printf("%d\n",a||b);
//	int Max;
//	if (a<b)
////		Max = b;    //��Ŀ���ʽ   Max= ��a>b ? a:b�� 
//	else
//		Max = a;
//	return 0;
//} 

//b=a++  ���üӼ� ��ʹ���ڼӼ�   ���üӼ��ȼӼ���ʹ�� 
//

//#include <stdio.h> 
//int Max(int x, int y){
//	if(x > y)
//		return x;
//	else
//		return y;	
//} 
//
//#define MAX(X, Y) (X> Y? X: Y) //�궨�庯��   ��Ŀ���ʽ 
//int main(){
//	int x = 10;
//	int y = 20;
//	int M = Max(x,y);
//	int n = MAX(x,y);
//	printf("%d  %d\n",M,n);
//	return 0;
//}


//***********ָ��********* 
//һ���ڴ浥Ԫ��һ���ֽ� 

//int main(){
//	int a = 10; //ռ���ĸ��ֽڵ��ڴ�
//	//&a ȡ��a���ڴ��ַ 
//	
//	int *p = &a;//���ֱ����������ַ�������ָ��
//	printf("%p\n",p); 
//	*p =20;//  *pλָ��  ����Ӧ���ڴ��ַ��20  ָ����32λ������4���ֽڣ���64λ������8���ֽ� 
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
//	printf("%d\n",sizeof(Ch));//8���ֽ� 
//	return 0;
//	
//} 

//ָ������

//ָ�����;����˽����ò������ʵ��ֽ�
//ָ�����;�����ָ���һ�仯���ֽ�
//int ��4���ֽ�  char��һ���ֽ�
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	for (int i = 0; i < 10; i++)
//		*(pa + i) = i;
//	printf("%d\n", arr[8]);
//	return 0;
//}
//ָ��Խ������Ұָ��
//���������ڴ��ͷ�Ҳ���ܲ���Ұָ�루ָ��ָ���λ�ñ��ͷ��ˣ�

//int main()
//{
//	int a = 0;
//	int* p NULL= ;//δ��ʼ��   ʹ��ָ���ʱ������ʼ��  ��ʼ��������NULL��ʼ����
//	*p = 10;//�Ҳ���pָ��ĵ�ַ
//	printf("%d\n", *p);
//	//int a;//��������ʼ��ֵΪ���ֵ
//	//{*p = i;
//	// p++;
//	//	����  *p++ = i��}
//	return 0;
//}

 
//int* test()
//{
//	int a = 0;//��ʱ����
//	return &a;// ��������ʱa�ĵ�ַ����ϵͳ
//}
//
//int main()//�ó������δ���
//{
//	int* p = test();//pָ����ָ����ʱ����a�ĵ�ַ���ǵ�ַ�Ѿ������գ��ܿ��ܱ���������·��� ��pΪҰָ��
//	printf("%d\n", *p);//0
//	return 0;
//}

//������ָ��ʱ�����óɿ�ָ�룬��ֹ�ɿ�ָ��
//ָ��ʹ��ǰ�����ж��Ƿ����



//ָ�������
// *p++ = 0�Ƚ����ø�ֵ��p++
// *--p = 0�ȼ���p�ڽ�Ӧ�ò����ڸ�ֵ
// ָ��-ָ��õ�ָ��֮��Ԫ�ظ�����������ַ��С��ַ��
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
//ָ�����ַ�������
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

//ָ��ıȽϴ�С
//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ����ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽϡ�


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
//����ָ����ָ��ĵ�ַ
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;// ����ָ��
//	printf("%d\n", **ppa);//����ָ�������������**
//	return 0;
//}
//ָ������  ���ָ�������
//int main()
//{
//	int a = 10;
//	int b = 9;
//	int c = 8;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* arr[10] = {0};//���ָ������飻
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
//********�ṹ��*********
//��----�ṹ��---������    �ؼ���struct    ��python���൱���� 
#include<string.h> 
//struct Book
//{
//	char name[20];
//	short price;
//}; 
// int main() 
// {
// 	struct Book b1 = {"c���Գ������",55};//�����ʼ������
//	 printf("�۸�%d\n",b1.price);
//	 printf("���֣�%s\n",b1.name);
//	 b1.price = 45;//�������� 
//	 strcpy(b1.name, "C++");//������������ʽ�Ĳ���ֱ�Ӹ��� ������ķ���  strcpy���� {���¸���һ�������������} ������Ӧ��ͷ�ļ�#include<string.h> 
//	 printf("���ĺ��������%s\n",b1.name);
//	 printf("���۹���ļ۸���%d\n",b1.price);
//	 struct Book* pb = &b1;  //����ָ��w 
//	 printf("%d\n",(*pb).name);
//	 printf("%d\n",(*pb).price);
//	 printf("%s\n",pb->name);  // ��ָ����ŵ�ʱ��ָ�벻��*�� 
//	 printf("%d\n",pb->price);
//	 return 0;
//  } 


//********��֧�����ѭ�����*********

//c�������ɷֺŸ�������һ����� 
//int main()
//{
//	int age;
//	printf("Сƨ������\n");
//	scanf("%d",&age);
//	if (age<18)
//	{
//		printf(" ���Сѧ��\n");
//		printf("%d\n",age);
//	}
//	else printf("��ô���");  //else���Ǻ����Լ������δƥ���if��ƥ�� 
////�����ֻ���ֺ� 
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
//	switch (day)    //���ܳ���continue ����Ƕ��ʹ��
//	{
//	/*case 1:printf("����һ");
//		break;
//	case 2:printf("���ڶ�");
//		break;
//	case 3:printf("������");
//		break;
//	case 5:printf("������");*/
//	case 1:
//	case 2:
//	case 3: //case �����
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default: //������󽫺����ִ�г���
//		printf("����������\n");
//		break;
//	}
//	return 0;
//}




//int main()
//{
//	int n;
//	printf("������һ������\n");
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
//		printf("������һ������\n");
//		scanf("%d", &n);
//	
//	}
//	printf("m = %d, n = %d", n, m);
//	return 0;
//}

//whileѭ��

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
//	}*/   //��δ�������ջ��������ַ�
//	return 0; 
//}
//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)//һֱ�����ַ�
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//��������ַ��������ֲ���

//for ѭ��
//int main()
//{
//	int i;
//	//  ��ʼ  �ж�   ����
//	for (i = 1; i <= 10; i++)
//		printf("%d", i);
//	return 0;
//}


/******** ����********/

/*int main()
{
	int a, b, c;
	int tmp;
	scanf("%d %d %d", &a, &b, &c);//  scanf �����������м�ķ���������ʱ�ķ���Ӧ����ͬ ͨ��������ã�
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
//����������

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
//շת��������������


/*int main()
{
	int year;
	int count = 0;
	for (year = 1; year <= 1000; year++) {
		if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))  //�����ܱ����������Ҳ��ܱ�100���� �ܱ�400������
			count++;
	};
	printf("%d\n", count);
	return 0;
}*/
//������
#include<math.h>

/*int main()
{
	int i;
	int j;
	int count = 0;
	for (i = 101; i <= 200; i+=2)//ż��������������
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}//        ��ƽ��i   ����֮iҲ����
			if (j >sqrt(i))//�����Ż�����ѭ��
			{
				printf("%d ", i);
				count++;
			}
	}
	printf("\n\n\n\n%d\n", count);
	//�ж��Ƿ�Ϊ�������Գ�����
	//��С�ڱ�����������Գ�
	return 0;*/
	//}//��������N�־���

	//������
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
				printf("%d * %d = %2d  ",i, j, i * j);//%2d��ʾ��ӡ��λ ������λ�ÿո���
			}    %-2d  �����
			printf("\n");
		}
		return 0;
	}*/
	//�žų˷���
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
//	randint = randint%100 ; //�������ò�������������ͬ
//	//rand �Ĳ���Ҫ���ϵı�������������ϲ��������
//	//��ʱ��� ����rand����
//	//��ǰ�������ʱ���ȥ1990��0ʱ0ʱ0��ת������������ֵ
//	
//	printf("�������\n");
//	scanf("%d", &m);
//	while (1)
//	{
//		if (randint < m)
//		{
//			printf("�´���\n");
//		}
//		else if (m < randint)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��\n");
//			break;
//		}
//		scanf("%d", &m);
//	}
//}
//
////������Ϸ
//#define _CRT_SECURE_NO_WARNINGS
//
//int main()
//{
//	srand((unsigned int)time(NULL));//�����������������
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("�������������ѡ��\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}


//goto���ֱ��������Ҫ�����   �����߼�����  ��������   �������������Ƕ��ѭ��
//int main()
//{
//	char ch[20] = {};
//	system("shutdown -s -t 60");
//	while (1)
//	{
//	printf("��ĵ��Լ�����һ�����ڹػ����������롮������ȡ���ػ�\n");
//	scanf("%s", &ch);
//	/*if (strcmp(ch, "������") == 0)
//		system("shutdown -a");
//	else
//		goto again;*/
//		if (strcmp(ch, "������") == 0)
//		{
//			system("shutdown -a");
//			printf("�������"); 
//			break;
//;		}
//	}
//	return 0;
//} 
// 

//�ػ�����

//***********�ݹ�************
//��������ջ�����ջ�ռ䱻�ĸ�

//  ����������������

//void print(int num)
//{
//	printf("%d", num % 10);
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//}
////�ݹ�
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



//쳲��������У�
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

// ��ŵ������  ----����������Сʱ���������  zx����
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
//	int numot;//�ƶ�����
//	scanf("%d",&n);
//	m = han(n,1,2,3);
//	printf("%d", m);
//	return 0;
//}

//����������
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

//����һ������

//int main()
//{
//	int arr[20] = {1, 2, 4, 5, 6, 7, 8, 9};//����ȫ��ʼ��  ʣ�µ�Ԫ��ȫ����0
//	char arr2[5] = { 'a', 'b' };  //b���ĵط�������д98  98��Ӧ��ascii ���ֵ��b
//	/*int n = 10;
//	* sizeof()  ���ַ�������Ĵ�Сǧ��Ҫ����'\0' ��һ��������  ��λ��bite
//	* 
//	* arr_n[] = {'b', 'c' , 'n' }
//	* arr_m[] = "bit"
//	* 
//	* strlen(arr_m) = 3
//	* strlen(arr_n) = ���ֵ ����Ϊ�������в�֪��ʲôʱ����ҵ���\0����
//	* sizeof(arr_m) = 4    '\0'��ռһ���ֽ�
//	* sizeof��arr_n�� = 3
//	* strlen() ���ַ����ĳ���������\0������  ��һ���⺯��
//	char[n];// error   ����ĳ���Ӧ��Ϊ����*/   
//	return 0;
// }//    ȥ���������������������


//int main()
//{
//	//                          0   1   2   3   4   5   6
//	char arr[] = "abcdefg";  //[a] [b] [c] [d] [e] [f] [g]
//	int len = strlen(arr);//������ĳ��ȡ�
//	for (int i = 0; i <= len - 1; i++)
//		printf("%c\n", arr[i]);
//	return 0;
//}
//����ķ���


//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7};
//	int sa = sizeof(arr)/sizeof(arr[0]);
//	for (int i = 0; i < sa; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]);
//	}
//	return 0;
//}//�����ڿռ��ַ��������


//��ά����Ĵ����Լ���ʼ��
//int main()
//{
//	int arr[3][4] = { {1,2,3,4}, {1,2,3,4} };//3��4��
//	//int arr1[][4] = { {1,3,5,7},{5,7,8,9} };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d",arr[i][j]);//����
//		}
//		printf("\n");
//	}
//	//��ά�����ʼ��ʱ����ʡ���е��ǲ���ʡ����
//	return 0;
//}

//��ά��������ô�洢�ģ�����
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
//}���۶�ά����Ĵ洢��������

//ð��������������

//void bubble_sort(int arr[], int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - 1 - i; j++)
//		{
//			int flag = 1;//�Ż�
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];  //9 8 7 6 5 4 3 2 1 
//				arr[j + 1] = tmp;
//				flag = 0;//�Ż�
//			}
//			if (flag == 1)  //�Ż�
//				break;
//		}
//	}
//}
////���⣺ ���������;���Ѿ�����������Ĺ��������õ�
////�Ż�: �ڽ�������ʱ��һ������������;�����ֽ�������ʾ��������� ������ǰ�˳�����
//
//int main()
//{
//	int arr[] = {10,9,8,7,6,5,4,3,2,1};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", size);//10
//	printf("%d\n", sizeof(arr));//40
//	printf("%p\n", arr);//�����������׵�ַ = &arr[0]
//	bubble_sort(arr, size);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//return 0;
//}

//���������������������������
//   1����ʹ�ò�����sizeof����ʱ
//   2: ��ʹ��&������  ��ַ���� ����ĵ�ַ�������ʱ��Ȼ������ĸ��ʾ��

//************************������****************
//   ���Ʋ�����   >>  ������λ������һλ�൱��ȥ�����ұߵ�һλ����ֵ���Զ���
//   ���Ʋ�����   <<   ������λ������һλ��ĩβ��һ��0����ֵ���Զ���
//   ��λ�����ƶ�����λֻ������������
//�ڼ��������ֵ�Բ������ʽ�洢
//int main()
//{
//	int a = 9;
//	a = a >> 1;   
//	printf("%d\n", a);
//	return 0;
//}

//   & ��λ�루�����ƣ���Ϊ1��Ϊ1����Ϊ0
//   | ��λ��    ��1 ��1����Ϊ0
//   ^  ��λ���    ��ͬΪ0 ��ͬΪ1
//0^a = a  ; a^b^b = a; b^b = 0   �����������������ҳ�������������
//   & ȡ��ַ������
//   * �����ò���������ȡ��ָ��ָ���ֵ
//   sizeof ���������ռ�ڴ�Ĵ�С
//     ~    ��λȡ��
//    ��int��������ǰ���ǿ����ת��

//int main()//��λȡ��
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
//	int a = (int)3.14;//ǿ��ת��
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

//���ۣ�������32λ������64λ�� ���ͻ���ʵ����ռ�ռ��С��ͬ��ָ��Ĵ�С��ı䣬32λָ��ռ4���ֽ�  64λ��ָ��ռ8���ֽ�
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
//}��������һ�����������ڴ��ж�����1�ĸ���

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2   short �ĳ���
//	printf("%d\n", s);//0  sizeof(���еı��ʽ���������ļ���
//	return 0;
//}


//���ű��ʽ  ���μ������һ�����ʽ��������
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

///C������char short�����ڼ����л���ת��Ϊ�����ڼ���,  Ϊ�˻�þ���  ����������� ���������нض�ת��Ϊԭ����
//   �з������������������λ������λ������
//   �޷�����ֱ�Ӳ���

//int main()
//{
//	char a = 0xb6;  
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)//��������
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//д���ʽʱҪ��Ψһ˳����߾�Ϊ������ʽ



//�ṹ��
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
	stu s1 = { "����",18 };
	print2(&s1);
	print1(s1);
	return 0;
}
//print2��print1��Ƚϸ���ʡʱ��ռ�     ���������ǲ�������ʱ��������ṹ���������Ĵ�������Դ���ṹ�崫�δ�����ַΪ��


/*�ڴ�  1.ջ��  ���ֲ���������ռ䣩
*				���ú�����Ϊ�������ٿռ�
*				���β������������󴫲� ���ε�ʱ����һ��ѹջ����������ṹ�����ή������
*		2.����  ��ȫ�ֱ�����
*		3.��̬��
*/


#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("a\n");
//	printf("%d",100);
//	printf("ok");
// 
// 
//	return 0;
//}
//




//int main()
//{
//	int age = 17;
//	double weight = 60.1;
//	float gan = 60.111;
//	
//	age = age + 3;
//	weight = weight + 15;
//
//	printf("%d\n", age);
//	printf("%lf\n",weight);
//	printf("%f\n", gan);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf ("%d %d",&a,&b);
//	
//	sum = a + b;
//	
//	printf("sum=%d", sum);
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	
//	if (a > 15)
//	    printf("too big");
//	if (a < 15)
//		printf("too small");
//	if (a = 15)
//		printf("good");
//
//	return 0;
//}


//	
//int main()
//{
//    enum sex
//    {
//	    male=5,
//	    female,
//    };
//	printf("%d", female);
//	printf("%d", male);
//	
//	return 0;
//}

#include <string.h>;
int main()
{
	char arr0[] = "abc";
	char arr1[] = { 'a','b','c' };
	
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr0));
		
	return 0;
}
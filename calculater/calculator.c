#include<stdio.h>
 
int main()
{
	int num1=0;
	int num2=0;
	int value=0;
	char a=0;
 	while(1)
 	{
		printf( "수식을 입력하세요 : " );
		scanf( "%d %c %d", &num1, &a, &num2 );
 
		switch(a)
		{
		case '+': //a의 값이 +일경우 +연산을 한다.
			value = num1 + num2;
			printf( "%d %c %d = %d\n", num1, a, num2, value );
			break;
		case '-': //a의 값이 -일경우 -연산을 한다.
			value = num1 - num2;
			printf( "%d %c %d = %d\n", num1, a, num2, value );
			break;
		case '*':  //a의 값이 *일경우 *연산을 한다.
			value = num1 * num2;
			printf( "%d %c %d = %d\n", num1, a, num2, value );
			break;
		case '/':  //a의 값이 /일경우 /연산을 한다.
			if(num2==0)
			{
				printf("계산할 수 없음\n");
				break;
			}
			printf( "%d/%d = %lf\n", num1, num2, (double)num1/num2 );
			break;
		default:
			printf( "계산할 수 없음\n" );
			break;
		}
 	}
	return 0;
}

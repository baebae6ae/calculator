#include<stdio.h>
 
int main()
{
	int num1=0;
	int num2=0;
	int value=0;
	char a=0;
 	while(1)
 	{
		printf( "������ �Է��ϼ��� : " );
		scanf( "%d %c %d", &num1, &a, &num2 );
 
		switch(a)
		{
		case '+': //a�� ���� +�ϰ�� +������ �Ѵ�.
			value = num1 + num2;
			printf( "%d %c %d = %d\n", num1, a, num2, value );
			break;
		case '-': //a�� ���� -�ϰ�� -������ �Ѵ�.
			value = num1 - num2;
			printf( "%d %c %d = %d\n", num1, a, num2, value );
			break;
		case '*':  //a�� ���� *�ϰ�� *������ �Ѵ�.
			value = num1 * num2;
			printf( "%d %c %d = %d\n", num1, a, num2, value );
			break;
		case '/':  //a�� ���� /�ϰ�� /������ �Ѵ�.
			if(num2==0)
			{
				printf("����� �� ����\n");
				break;
			}
			printf( "%d/%d = %lf\n", num1, num2, (double)num1/num2 );
			break;
		default:
			printf( "����� �� ����\n" );
			break;
		}
 	}
	return 0;
}

#include<stdio.h>

/*
շת�����

��������a��b��
�� a%b������c
�� ��c=0����b��Ϊ���������Լ��
�� ��c��0����a=b��b=c���ٻ�ȥִ�Т�
������27��15�����Լ������Ϊ��
27��15 ��1215��12��312��3��0��ˣ�3��Ϊ���Լ��

*/
int main()
{
	int num1, num2, a, b, c;
	scanf("%d, %d", &num1, &num2);
	
	a = num1;
	b = num2;

	printf("%d %d", a, b);	
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	
	printf("���Լ���� %d\n", a);
	printf("��С�������� %d\n", num1 * num2 / a); 
 } 

#include<stdio.h>

/*
辗转相除法

有两整数a和b：
① a%b得余数c
② 若c=0，则b即为两数的最大公约数
③ 若c≠0，则a=b，b=c，再回去执行①
例如求27和15的最大公约数过程为：
27÷15 余1215÷12余312÷3余0因此，3即为最大公约数

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
	
	printf("最大公约数是 %d\n", a);
	printf("最小公倍数是 %d\n", num1 * num2 / a); 
 } 

#include<stdio.h>
#include<string.h>

#define MAX 101

/*
算法思想：大数使用字符串存储，每一个单元存储操作数的每一位，之后执行相加。
基本思路：字符串反转、字符变数字、位运算、反序输出。

在 ASCII表中，字符'0'表示进制48，所以参与运算的时候，需要把char字符转成十进制类型（减去'0'）
在最后输出的时候，因为使用的 %c ，所以又需要把十进制转成char（加上'0'），比如十进制的0，要使用char输出'0'，因为ASCII表中'0'对应的进制是48，所以需要加上48，对应的就是加上'0'字符。 
*/

void print(char c[]);
void bigNumAdd(char a[], char b[], char sum[]);

//int main()
//{
//	char a[MAX];
//	char b[MAX];
//	char sum[MAX];
//	
//	gets(a);
//	gets(b);
//	
//	bigNumAdd(a, b, sum);
//	
//	print(sum);
//	
//	return 0;
//}

void bigNumAdd(char *a, char b[], char sum[])
{
	int i=0;  
    int c=0; //表示进位  
  
    char m[MAX]={0};  
    char n[MAX]={0};
    
    memset(sum, 0, MAX * sizeof(char));  

	int lenA = strlen(a);
	int lenB = strlen(b);
	
	// 字符串反转且字符变数字 
	for (i = 0; i < lenA; i++)  
    {  
        m[i] = a[lenA - i - 1] - '0';  
    }  
    
    for (i = 0; i < lenB; i++)  
    {  
        n[i] = b[lenB - i - 1] - '0';  
    }
	

	for (i = 0; i < lenA || i < lenB; i++) {
		sum[i] = (m[i] + n[i] + c) % 10 + '0'; //得到末位  
        c=(m[i] + n[i] + c) / 10; //得到进位  
        sum[i + 1]= c + '0';
	}
}

void print(char c[])
{
	int len = strlen(c);
	int i = 0;
	int j = 0;
	for (i = len - 1; c[i] == '0' && i >= 0; i--); // 找到第一个不为零的位置，方便输出 
	
	for (j = i; j >= 0; j--) {
		printf("%c", c[j]);
	}
}

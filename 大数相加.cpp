#include<stdio.h>
#include<string.h>

#define MAX 101

/*
�㷨˼�룺����ʹ���ַ����洢��ÿһ����Ԫ�洢��������ÿһλ��֮��ִ����ӡ�
����˼·���ַ�����ת���ַ������֡�λ���㡢���������

�� ASCII���У��ַ�'0'��ʾ����48�����Բ��������ʱ����Ҫ��char�ַ�ת��ʮ�������ͣ���ȥ'0'��
����������ʱ����Ϊʹ�õ� %c ����������Ҫ��ʮ����ת��char������'0'��������ʮ���Ƶ�0��Ҫʹ��char���'0'����ΪASCII����'0'��Ӧ�Ľ�����48��������Ҫ����48����Ӧ�ľ��Ǽ���'0'�ַ��� 
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
    int c=0; //��ʾ��λ  
  
    char m[MAX]={0};  
    char n[MAX]={0};
    
    memset(sum, 0, MAX * sizeof(char));  

	int lenA = strlen(a);
	int lenB = strlen(b);
	
	// �ַ�����ת���ַ������� 
	for (i = 0; i < lenA; i++)  
    {  
        m[i] = a[lenA - i - 1] - '0';  
    }  
    
    for (i = 0; i < lenB; i++)  
    {  
        n[i] = b[lenB - i - 1] - '0';  
    }
	

	for (i = 0; i < lenA || i < lenB; i++) {
		sum[i] = (m[i] + n[i] + c) % 10 + '0'; //�õ�ĩλ  
        c=(m[i] + n[i] + c) / 10; //�õ���λ  
        sum[i + 1]= c + '0';
	}
}

void print(char c[])
{
	int len = strlen(c);
	int i = 0;
	int j = 0;
	for (i = len - 1; c[i] == '0' && i >= 0; i--); // �ҵ���һ����Ϊ���λ�ã�������� 
	
	for (j = i; j >= 0; j--) {
		printf("%c", c[j]);
	}
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	scanf("%d", a);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//int main()
//{
//    int i = 0;//ջ����ַ���ɸߵ��ʹ�ŵ�
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//���������±��������Ĺ����п���Խ����ʵ�i
//    for (i = 0; i <= 12; i++)//��ѭ��Ϊ��ѭ��
//    {
//        arr[i] = 0;//��vs2019���ԣ�i�ĵ�ַ��arr[12]��ַ��ͬ��
//        printf("hehe\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)//����constΪ���γ�����
//{//������
//	assert(src != NULL);//һ������
//
//	char* ret = dest;
//		while (*dest++ = *src++)//2����λ��д��ʱ���������
//		{//��copy��\0����ʹ��ѭ��ֹͣ
//			;
//		}
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//int main()
//{
//	char arr1[20] = "*******************";
//	char arr2[] = "hello!";
//	//ʹ��strcpyʱarr2�е�\0Ҳ�ᱻ����
//	my_strcpy(arr1, arr2);//1����arr2ΪNULLʱ���޷����н����ò���
//	 //��ʽ����
//	printf("%s\n", arr1);
//	return 0;
//}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	JO_paixv(arr, n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
#include <stdio.h>
#include <string.h>
#include <assert.h>//assert
                    
//void my_strcpy(char* dest, const char* src)//const��ֹ���ݱ�����
//{
//	assert(src != NULL);//����
//	assert(dest != NULL);//����
//	while (*dest++ = *src++)//��const��ֹд������
//	{
//		;
//	}
//}


//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);//(1)Ŀ��ռ����ʼ��ַ����2��Դ�ռ����ʼ��ַ
//	printf("%s\n", arr1);
//	return 0;
//}


int main()
{
    //1
   /* int num = 10;
    int* p = &num;
    *p = 20;

    printf("%d\n", num);
    return 0;*/



    //const����ָ��

    //2
    ////const ���α���,��������ͱ���Ϊ������,���ܱ��޸�
    //const int num = 10;
    ////num = 20;//����
    //
    ////num������,��,��ô���ͨ��ָ�뱻�޸���
    //const int* p = &num;//����*p
    ////const����ָ�������ʱ��
    ////const�������*�����,���ε���*p,��ʾָ��ָ�������,�ǲ���ͨ��Ŀǰpָ�����ı��
    ////ָ��pָ��ĵ�ַ�����޸�,���ǲ����޸Ľ�����&num������
    //int n = 100;
    //p = &n;

    const int num = 10;
    //������ָ���޸�
    int const* const p = &num; //�Ȳ��ܸı�*p��ֵҲ���ܻ�ָ��

    //int* const p = &num;
    //const����ָ�������ʱ��
    //const �������*���ұߣ����ε���ָ�����p,��ʾָ��������ܱ��ı�
    //����ָ�������,���Ա��ı�
    //*p = 20;
    int n = 100;

    int** p2 = &p;
    *p2 = &n;
    **p2 = 20;
    
    //int const* const p = &num; //�Ȳ��ܸı�*p��ֵҲ���ܻ�ָ��
    printf("%d\n", num);
    printf("%d\n", n);
    return 0;
}
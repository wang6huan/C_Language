
#include <stdio.h>

int main()
{
	int a[] = { 1, 2, 8, 9, 3 };
	
	for (size_t i = 0; i < sizeof(a)/sizeof(int); i++)
	{
		printf("%d\n", a[i]);
	}
	
	return 0;
}

//��ϰһ��,C����û��C#�� �����������е�����Ԫ�ص��ֽڴ�С����ǰ���͵��ֽڴ�С.Length
//����printf print println ,print + \n == println ��printf��д"%d""%s"��Щ print ��ֱ��дһ�����ͻ�������ĺ���,��Ҫ�ַ����ڼ�""�м���+���� ��printf����""�������,��Ӧ ��""��Ķ�����ֱ�Ӱ��ַ������
//�Ժ�ɲ�Ҫ͵����,ÿ�춼Ҫд��,Ϊ�˿����Ҹ�����
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void kai()
{
	printf("�����ұȽϲˣ����Ա������������������ķ�ʽ������\n");
	printf("����Ϸ�Ѷ�Ϊ��������Ϊ�ұȽϲ˲������㷨������\n");
	printf("ϣ��˧���������߰�������bug������\n");
	printf("зз��������\n");
}
void dan()
{
	int a, b;
	int w, j;
	char A[H][L];

	while (1)
	{
		b = 0;
		scanf("%d", &a);
		if (a == 1) {
			printf("OK,��ʼ������Ϸ������\n");
			chushi(A, H, L);//��ʼ������
			da(A, H, L);//��ӡ���������������

			while (1)
			{
				ren(A, H, L);
				da(A, H, L);
				w = pan(A, H, L);
				printf("OK,�����Եı��ݣ�����\n");
				if (w) {
					printf("��ϲ��Ӯ�ˣ���Ӯ��Ҳ̫ѷ������������\n");
					printf("1.����һ�ѣ�����\n");
					printf("0.�˳���Ϸ���´μ�Ŷ������\n");
					break;
				}
				/*ping(A, H, L);*/
				/*if (w == 2)
				{
					printf("�ⶼ����ƽ������̫ѷ����\n");
					break;
				}*/
				b++;
				if (b == int(floor((L * H) / 2))+1 )
				{
					printf("�ⶼ����ƽ������̫ѷ��������\n");
					printf("1.����һ�ѣ�����\n");
					printf("0.�˳���Ϸ���´μ�Ŷ������\n");
					break;}
				
				
				ji(A, H, L);
				da(A, H, L);
				j = pan(A, H, L);
				if (j) {
					printf("����ɣ����Ȼ��ôѷ��������\n");
					printf("1.����һ�ѣ�����\n");
					printf("0.�˳���Ϸ���´μ�Ŷ������\n");
					break;
				}
				
				/*if (j == 2)
				{
					printf("�ⶼ����ƽ������̫ѷ����\n");
					break;
				}*/
				/*ping(A, H, L);*/




			}
		}
		else if (a == 0) {
			printf("��ô���Ҫ�����𣿿�ϧ�ˣ��Ǹ�ǣ�����\n");
			break;
		}
		else {
			printf("�������ʲô�������Լ�����\n");
			printf("%d\n", a);
		}
	}
}
void cai()
{
	
	printf("---��ѡ��--------------\n");
	printf("\n");
	printf("---1.��ʼ������,����---\n");
	printf("\n");
	printf("---0.������Ϸ�����----\n");
}
int main ()
{
	kai();
	cai();
	dan();

	return 0;
}
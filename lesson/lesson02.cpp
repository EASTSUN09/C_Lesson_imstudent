#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int main() {
	
	printf("a\n");  //\n �ٹٲ�
	printf("bc\nde\t"); //\t  ��
	printf("tab\n");  
	printf("HelLo C");
	printf("\rWElomE C");// \r ���缳��
	printf("\b\bC++\n");  //\b �齺���̽�
	printf("��⵵ \"������\"\n"); //\" \' �ο��ȣ���
	printf("c:\\test.txt\n"); // \\ = \ ��ȣ ���
	//
	int age = 10;
	char ch = 'K';
	short kor = 12;
	float Pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679F;
	double math = 42.195;
	short gh = 2;
	// ���Ĺ���
	printf("Age %d\n", age);
	printf("%corea\n", ch);
	printf("�� �ڵ� ȿ�� ���� : %hd\n", kor);
	printf("PI : %f\n",Pi);
	printf("PI : %4.2f\n", Pi);
	printf("marathon : %6.1f\n", math);
	printf("marathon : %.3f\n", math);
	printf("%5d\n", age); // 5�ڸ� Ȯ���ϰ� ��������
	printf("%-5d\n", age); // ������

	// 16���� ���
	printf("10 = %X\n", age);

	printf("���� %hd%%\n", kor); // ū�ڸ� ����ҋ��� %d �����Ŵ� %hd
	//%s ���ڿ����
	printf("�� �̸��� ��ȣ %d�� %s �Դϴ�\n",gh, "ȫ��ǥ");

	//%p Ư�� ��ü �޸� �� �� �ҷ���

	printf("ch �ּ� : %p\n", &ch); //%p �ּҿ����ڴ� ���� �տ� �ܵ����� ���Ȱ��
	printf("\n=========================\n");
	// ǥ�� �Է� �Լ� scanf
	printf("�����Է� : ");
	scanf("%d", &age); // ������ ������ �Ѱ� �Է¹ޱ�
	printf("�� ���� : %d\n", age);
	float kee;
	printf("���� Ű �Է� : ");
	scanf("%f", &kee);
	printf("��Ű�� %.2fcm\n", kee);
	
	scanf("%c", &ch);

	printf("���ĺ� �Է� �� : ");
	scanf("%c", &ch); // ���ĺ� �ѱ��� �Է¹ޱ�
	printf("�ϰ� �Է��Ѱ� %c\n", ch);


	printf("�� �ڵ� ȿ�� ���� ���̰� ");
	scanf("%hd", &kor);  // kor�� short ���̶� %hd �����
	printf("�ʴ� �̷��� ������ : %d\n", kor);
	short eng;
	short history;

	printf("��,��,�� ���� �Է��ϼ��� : ");
	scanf("%hd %hd %hd", &kor , &eng, &history);
	printf("�� : %d �� : %d �� : %d\n", kor, eng, history);


	return 0;
}
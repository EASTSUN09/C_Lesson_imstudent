#include <stdio.h>

int main() {
	int num = 1;
	int sum = 0;

	// �� ������ : >,>=,<,<=,==,!=
	// �� ���� ������ ��� ����(0 or 1)

	int result;
	result = 1 > 5;
	printf("result = %d\n", result);

	result = 1 <= 5;
	printf("result = %d\n", result);

	result = 1 == 5; // false 0���� ����
	printf("result = %d\n", result);


	result = 1 != 5; // true 1�γ���
	printf("result = %d\n", result);


	printf("==============================\n");
	//�� ������ : &&(AND), ||(or), !(NOT)
	num = -5;
	sum = 0;
	result = num && sum; // T && F ===F
	printf("result = %d\n", result);

	result = num || sum; // T || F === T
	printf("result = %d\n", result);
	result = !num; // -5 �� true ====> false�� ����
	printf("result = %d\n", result);

	//���� ������ : ++,--
	num = 0;

	num++; // num = num + 1;
	printf("num = %d\n", num); // 1

	++num; // num = num + 1;
	printf("num = %d\n", num); // 2

	printf("num = %d\n", num++); // 2 ===> 3
	printf("num = %d\n", ++num); // 3+1=4 ===> 4

	sum = -num; //  - �� ��ȣ�����ڷ� ����
	//������ �켱����
	/*
	1 : ++, --
	2 : +, - (��ȣ������)
	3 : *, /, %
	4 : +, -
	5 : >, >=, <, <=
	6 : ==, !=
	7 : ��������
	8 : ���Կ�����
	
	
	
	
	*/
	
		


	
	return 0;

}
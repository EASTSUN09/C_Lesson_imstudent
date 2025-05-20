#include <stdio.h>

int main() {
	int num = 1;
	int sum = 0;

	// 비교 연산자 : >,>=,<,<=,==,!=
	// 비교 연산 수행한 결과 논리값(0 or 1)

	int result;
	result = 1 > 5;
	printf("result = %d\n", result);

	result = 1 <= 5;
	printf("result = %d\n", result);

	result = 1 == 5; // false 0으로 나옴
	printf("result = %d\n", result);


	result = 1 != 5; // true 1로나옴
	printf("result = %d\n", result);


	printf("==============================\n");
	//논리 연산자 : &&(AND), ||(or), !(NOT)
	num = -5;
	sum = 0;
	result = num && sum; // T && F ===F
	printf("result = %d\n", result);

	result = num || sum; // T || F === T
	printf("result = %d\n", result);
	result = !num; // -5 는 true ====> false로 반전
	printf("result = %d\n", result);

	//증갑 연산자 : ++,--
	num = 0;

	num++; // num = num + 1;
	printf("num = %d\n", num); // 1

	++num; // num = num + 1;
	printf("num = %d\n", num); // 2

	printf("num = %d\n", num++); // 2 ===> 3
	printf("num = %d\n", ++num); // 3+1=4 ===> 4

	sum = -num; //  - 가 부호연산자로 사용됨
	//연산자 우선순위
	/*
	1 : ++, --
	2 : +, - (부호연산자)
	3 : *, /, %
	4 : +, -
	5 : >, >=, <, <=
	6 : ==, !=
	7 : 논리연산자
	8 : 대입연산자
	
	
	
	
	*/
	
		


	
	return 0;

}
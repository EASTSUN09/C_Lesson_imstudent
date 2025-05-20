#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int main() {
	
	printf("a\n");  //\n 줄바꿈
	printf("bc\nde\t"); //\t  탭
	printf("tab\n");  
	printf("HelLo C");
	printf("\rWElomE C");// \r 줄재설정
	printf("\b\bC++\n");  //\b 백스페이스
	printf("경기도 \"수원시\"\n"); //\" \' 인용부호출력
	printf("c:\\test.txt\n"); // \\ = \ 기호 출력
	//
	int age = 10;
	char ch = 'K';
	short kor = 12;
	float Pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679F;
	double math = 42.195;
	short gh = 2;
	// 형식문자
	printf("Age %d\n", age);
	printf("%corea\n", ch);
	printf("니 코드 효율 점수 : %hd\n", kor);
	printf("PI : %f\n",Pi);
	printf("PI : %4.2f\n", Pi);
	printf("marathon : %6.1f\n", math);
	printf("marathon : %.3f\n", math);
	printf("%5d\n", age); // 5자리 확보하고 우측정렬
	printf("%-5d\n", age); // 좌측임

	// 16진수 출력
	printf("10 = %X\n", age);

	printf("상위 %hd%%\n", kor); // 큰자리 출력할떄는 %d 작은거는 %hd
	//%s 문자열출력
	printf("내 이름은 기호 %d번 %s 입니다\n",gh, "홍준표");

	//%p 특정 매체 메모리 주 소 불러옴

	printf("ch 주소 : %p\n", &ch); //%p 주소연산자는 변수 앞에 단독으로 사용된경우
	printf("\n=========================\n");
	// 표준 입력 함수 scanf
	printf("나이입력 : ");
	scanf("%d", &age); // 정수형 데이터 한개 입력받기
	printf("니 나이 : %d\n", age);
	float kee;
	printf("너의 키 입력 : ");
	scanf("%f", &kee);
	printf("니키는 %.2fcm\n", kee);
	
	scanf("%c", &ch);

	printf("알파벳 입력 ㄱ : ");
	scanf("%c", &ch); // 알파벳 한글자 입력받기
	printf("니가 입력한거 %c\n", ch);


	printf("니 코드 효율 점수 몇이게 ");
	scanf("%hd", &kor);  // kor은 short 형이라 %hd 써야함
	printf("너는 이렇게 생각해 : %d\n", kor);
	short eng;
	short history;

	printf("국,영,역 점수 입력하세요 : ");
	scanf("%hd %hd %hd", &kor , &eng, &history);
	printf("국 : %d 영 : %d 역 : %d\n", kor, eng, history);


	return 0;
}
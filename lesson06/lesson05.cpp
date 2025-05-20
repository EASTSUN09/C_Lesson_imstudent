
#include <stdio.h>

int main()
{



	/*
	|  |64|32|16| 8| 4| 2| 1|
	|  |0 |0 |0 |0 |0 |0 |0 |
	
	*/
	// 비트연산자 : <<, >>, &, |, ~, ^(eXclusive OR)
	// XOR 비트가 같은 1일때는 0  0과 1을 어느 위치에서든 더하면 1
	short n3 = 0;
	short n1 = 3; // 0011
	short n2 = 5; // 0101
	n3 = n1 & n2; // 0001  // bit and
	printf("n3 = %d\n", n3);

	n3 = n1 | n2; // 0111 // bit or
	printf("n3 = %d\n", n3);

	n3 = ~n1; // sign 모든 비트 반대로
	printf("n3 = %d\n", n3);

	// XOR
	n3 = n1 ^ n2;
	printf("n3 = %d\n", n3);


	n3 = n1 << 2;  // n1을 왼쪽으로 2비트 이동시킴
	printf("n3 = %d\n", n3);

	n3 = n2 >> 2;  // n2을 오른쪽으로 2비트 이동시킴 // 오른쪽으로 움직일때는 부호가 바뀌지 않음
	printf("n3 = %d\n", n3);




	return 0;

}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	printf("숫자 맞추기 게임 테스트\n");
	srand((unsigned)time(NULL)); //srand - 난수 ,unsigned - 정수로 변환, time(NULL) - 초단위 정수로 로 변경
	int r = 0; // rand함수를 r이라는 정수에 넣기
	int num = rand() % 1000 + 1; //1 ~ 1000까지 숫자를 랜덤

	
	while (1) // 1은 참, 0은 거짓 - 다음 if가 참일 때 계속하여 반복
	{
		printf("숫자를 입력하시오: ");
		scanf("%d", &r);

		if (r > num) {
			printf("다운\n");
		}
		else if (r < num) {
			printf("업\n");
		}
		else {
			printf("정답\n");
			break;
		}

	}
	
	return 0;
}
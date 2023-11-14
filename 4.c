#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int computer, user;

	srand(time(NULL));
	computer = rand() % 3 + 1;

	printf("선택하시오(1: 가위 2: 바위 3: 보): ");
	scanf_s("%d", &user);

	printf("컴퓨터: %d, 사용자 %d\n",computer, user);

	if (computer == user)
		printf("비겼음");
	else if (computer +1== user || user-1 == computer)
		printf("사용자가 이겼음");
	else
		printf("컴퓨터가 이겼음");

	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int computer, user;

	srand(time(NULL));
	computer = rand() % 3 + 1;

	printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��): ");
	scanf_s("%d", &user);

	printf("��ǻ��: %d, ����� %d\n",computer, user);

	if (computer == user)
		printf("�����");
	else if (computer +1== user || user-1 == computer)
		printf("����ڰ� �̰���");
	else
		printf("��ǻ�Ͱ� �̰���");

	return 0;
}
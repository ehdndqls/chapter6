#include<stdio.h>
int main() {
	double weight, height, standard_weight;

	printf("키와 체중을 입력하세요: ");
	scanf_s("%lf %lf", &height, &weight);

	standard_weight = (height - 100) * 9 / 10;

	if (standard_weight == weight)
		printf("표준입니다");
	else if (standard_weight > weight)
		printf("저체중입니다");
	else
		printf("과체중입니다");

	return 0;
}
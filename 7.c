#include<stdio.h>
int main() {
	double weight, height, standard_weight;

	printf("Ű�� ü���� �Է��ϼ���: ");
	scanf_s("%lf %lf", &height, &weight);

	standard_weight = (height - 100) * 9 / 10;

	if (standard_weight == weight)
		printf("ǥ���Դϴ�");
	else if (standard_weight > weight)
		printf("��ü���Դϴ�");
	else
		printf("��ü���Դϴ�");

	return 0;
}
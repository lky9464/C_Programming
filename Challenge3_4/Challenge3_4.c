#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

	int seed;
	printf("���� �� �Է� : ");
	scanf_s("%d", &seed);

	srand(seed);

	for (int i = 0; i < 5; i++) {
		printf("���� ��� : %d \n", rand());
	}
	

	return 0;
}
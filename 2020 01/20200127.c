/* 이번에 또 도둑이 들었다. 도둑으로 판단되는 용의자를 10명을 검거하였다.

CCTV를 정밀 분석한 결과 도둑은 검거한 10명 중 키가 3번째로 크다는 사실을 알았다.

10명의 키를 조사하여 도둑을 검거하는 프로그램을 작성하시오. (단, 입력되는 모든 키는 서로 다르다.) */

#include <stdio.h>
int main() {
	int h[10];
	int temp;
	for (int i = 0; i < 10; i++)
		scanf("%d", &h[i]);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (h[i] > h[j]) {
				temp = h[i];
				h[i] = h[j];
				h[j] = temp;
			}
		}
	}
	printf("%d\n", h[2]);
}

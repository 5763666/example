#include <stdio.h>
#include <stdlib.h>

int main() {
	int result = 0, k = 0;
	for (int i = 2; i <= 100; i++) {
		for (k = 2; k < i; k++) {
			if (i % k == 0)	break;
		}
		if (k == i)	result += k;
	}
	printf("result : %d", result);
	return 0;
}

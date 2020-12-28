#include<stdio.h>
#include<stdlib.h>
int main() {
	int try, ans = rand() % 9000 + 1;
	int s[4] = { 0 }, g[4] = { 0 };
	

	s[0] = ans / 1000; s[1] = (ans % 1000) / 100; s[2] = (ans % 100) / 10; s[3] = ans % 10;
	while (1) {
		int a = 0, b = 0, c = 0;
		scanf("%d", &try);
		g[0] = try / 1000; g[1] = (try % 1000) / 100; g[2] = (try % 100) / 10; g[3] = try % 10;

		for (int i = 0; i <= 3; i++) {
			for (int j = 0; j <= 3; j++) {
				if (s[i] == g[j]) {
					if (i == j) a++;
					else b++;
				}
			}
		}
		c = 4 - a - b;
		printf("%d digit is in place\n", a);
		printf("%d digit is out of place\n", b);
		printf("%d digit is not in secret number\n", c);
		if (a == 4) break;
	}
	return 0;
}
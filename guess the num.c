/******************************************************
*Computer selects a random number s between [1000-9999]
• User tries to guess it by entering g
• Computer tells how many digits are in place, out of place,
not in secret number
• For example, if s is 6234
– User enters g as 7436, then computer says
• 1 digit is in place
• 2 digits are out of place
• 1 digit is not in secret number
• User keeps trying until he finds the secret number
**********************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void fuc(int,int g[]);//g의 자릿수를 g[4]에 하나씩 따로 저장하는 함수
int main() {
	srand(time(NULL));
	int g, ans = rand() % 9000 + 1000;
	int g[4] = { 0 };
	printf("1000-9999사이 정수인 숫자를 입력하세요");
	for (;;) {
		scanf("%d", &g);
		fuc(g, g[]);
	}
}

void fuc(int g,int g[])
{
	g[0] = g / 1000;
	g[1] = (g % 1000) / 100;
	g[2] = (g % 100) / 10;
	g[3] = (g % 10);

}

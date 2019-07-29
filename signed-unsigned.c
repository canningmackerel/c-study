#include <stdio.h>

/* c言語の練習用 */


int main(void)
{
	/*
	 * char c = 100;
	 * char d = c + 100;
	 * => 200と表示されてしまう。
	 * signed charならちゃんと（？）-56と表示される。
	 * コンパイラが自動でunsignedと判断しているのでは。
	 * ちなsignedとunsignedでは-56
	 * */
	signed char c = 100;
	signed char d = c + 100;
	printf("%d\n", d);
	
	return 0;
}

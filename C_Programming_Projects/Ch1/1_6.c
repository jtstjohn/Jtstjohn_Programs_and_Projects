#include <stdio.h>


int main() {

	long blanks, tabs, nl;
	blanks = tabs = nl = 0;
	int c = 0;

	while((c = getchar()) != EOF) {

		if(c == ' ') {
		blanks++;
		}
		else if(c == '\t') {
		tabs++;
		}
		else if(c == '\n') {
		nl++;

		printf("\nblanks = %ld, tabs = %ld, nl = %ld\n", blanks, tabs, nl);
		}
		putchar(c);
	}

	
	return 0;


}

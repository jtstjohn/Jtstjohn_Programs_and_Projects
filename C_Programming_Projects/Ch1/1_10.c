#include <stdio.h>


int main() {

	
	int inword = 0;
	int c;

	while((c = getchar()) != EOF) {
	
		if((c == ' ' || c == '\t' || c == '\b' || c == '\n') && (inword == 1)) {
			inword = 0;
			putchar('\n');
		}
		else {
			inword = 1;
			putchar(c);
		}

	}


	return 0;

}

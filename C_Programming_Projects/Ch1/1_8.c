#include <stdio.h>


int main() {

	int c = 0;


	while((c = getchar()) != EOF) {
		if(c == '\t') {
			printf(">");
			continue;
		}
		else if(c == '\b') {
			printf("<");
			continue;
		}

		else {
			putchar(c);

		}


	}


	return 0;

}

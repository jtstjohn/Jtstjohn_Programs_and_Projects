#include <stdio.h>

int main(){

	long blanks = 0;
	int c = 0;

	while((c =getchar()) != EOF) {
	
		if(c == ' ') {
			blanks++;
			if(blanks > 1) {
			
			continue;
			}
			putchar(c);
		}
	
		else {
		putchar(c);
		blanks = 0;
		}

	}


	return 0;



}

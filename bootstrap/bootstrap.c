/* scheme bootstrap for parenthese
 *
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>	//for dlog
#include <unistd.h>	//for getopt

int DEBUG = 1;

void dlog(const char* text, ...) {
	if(DEBUG == 1 && text) { 
		va_list argp;
		va_start(argp, text);
		fprintf(stderr,text, argp); 
		va_end(argp);
	}
}

int main(int argc, char *argv[]) {
	printf("-----------------------------\n");
	printf("Parenthese's Scheme bootstrap\n");
	printf("-----------------------------\n\n");

	dlog("/!\\ Running in debug mode !\n\n");

	return 0;
}

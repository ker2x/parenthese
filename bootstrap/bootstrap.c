/* scheme bootstrap for parenthese
 *
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include <unistd.h>

int DEBUG = 0;

void dlog(const char* text, ...) {
	if(DEBUG == 1 && text) { 
		va_list argp;
		va_start(argp, text);
		fprintf(stderr,text, argp); 
		va_end(argp);
	}
}

void usage(void) {
	printf("Parenthese's bootstrap usage\n");
	printf("----------------------------\n");
	printf("TODO\n\n");
}


int main(int argc, char **argv) {

	int c;

	printf("-----------------------------\n");
	printf("Parenthese's Scheme bootstrap\n");
	printf("-----------------------------\n\n");

	while ((c = getopt(argc, argv, "dh")) != -1) {
		switch(c) {
			case 'd':
				DEBUG = 1;
				dlog("/!\\ Running in debug mode !\n\n");
				break;
			case 'h':
				usage();
				break;
			default:
				fprintf (stderr, "Unknown option character -%c.\n", optopt);
				return 1;
				break;
		}
	}

	return 0;
}

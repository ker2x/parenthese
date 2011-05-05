/* scheme bootstrap for parenthese
 *
*/

#include "bootstrap.h"

void dlog(const char* text, ...) {
	if(debug_mode == 1 && text) { 
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

void init(void) {
	dlog("/!\\ Entering init function\n");
	//TODO
	dlog("/!\\ Leaving init function\n");
}

object* read_input(FILE *in) {
	int c;
	
/*
	c = getc(in);
	if (c == '#') {
		c = getc(in);
		switch (c) {
			case 't':
				return true;
			case 'f':
				return false;
            default:
                fprintf(stderr, "unknown boolean or character literal\n");
                exit(1);
        }
    }
*/
}

int main(int argc, char **argv) {

	int c;
	object* exp;

	printf("-----------------------------\n");
	printf("Parenthese's Scheme bootstrap\n");
	printf("-----------------------------\n\n");

	while ((c = getopt(argc, argv, "dh")) != -1) {
		switch(c) {
			case 'd':
				// Enable debug
				debug_mode = 1;
				dlog("/!\\ Running in debug mode !\n\n");
				break;
			case 'h':
				// print usage and exit
				usage();
				break;
			default:
				// wrong option
				fprintf (stderr, "Unknown option character -%c.\n", optopt);
				return 1;
				break;
		}
	}

	//init
	init();

	//REPL
	dlog("/!\\ Entering REPL loop\n\n");
	while(0) {
		printf("> ");
		exp = read_input(stdin);
		if (exp == NULL) {
			dlog("exp = NULL -> break the REPL loop\n");
			break;
		}
	}
	dlog("/!\\ Leaving REPL loop\n\n");

	return 0;
}

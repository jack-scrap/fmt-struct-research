#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char ws = ' ';

const char prefix = '-';

void err(char* msg) {
	fprintf(stderr, "Error: %s\n", msg);
}

int main(int argc, char* argv[]) {
	if (argc > 1 + 1) {
		err("Wrong number of arguments");

		return 1;
	}

	char* topic = "it";

	char* noun = topic;

	if (argc == 1 + 1) {
		char* buff = malloc(strlen(argv[1]) + 2);
		sprintf(buff, "\"%s\"", argv[1]);

		noun = buff;
	}

	printf("Look into %s", noun);

	return 0;
}

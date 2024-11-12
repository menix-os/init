#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Hello, world!\n");
	FILE* f = fopen("/etc/motd", "r");
	char* buf = malloc(128);
	fread(buf, sizeof(char), 128, f);
	printf("MOTD: %s\n", buf);
	fclose(f);

	return 0;
}

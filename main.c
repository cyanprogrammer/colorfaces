#include <stdlib.h>
#include <stdio.h>

void face(char color[]) {
	        printf("%s", color);
		printf(":o :{- :[|||] :<> :| :L :? \n");
};

int main() {
	//blue
	face("\033[0;34m");
	//cyan
	face("\033[0;36m");
	//green
	face("\033[0;32m");
	//purple
	face("\033[0;35m");
	//red
	face("\033[0;31m");
	//yellow
	face("\033[0;33m");
	printf("\033[0m");
	return 0;
}

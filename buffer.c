#include <stdio.h>

int main(){
	size_t bufsize = 1024;
	if(setvbuf(pfile, NULL, _IOFBF, bufsize));
	printf_s("File buffering failed!\n");
}

#include <stdio.h>
#include <stdlib.h>

int main() {
char buffer[1024];
        // Set a custom buffer for stdout
    setvbuf(stdout, buffer, _IOFBF, sizeof(buffer));
    
    printf("This will be buffered until the buffer is full or flushed.\n");
    printf("Multiple printf calls may be combined in a single I/Ooperation.\n");
      // Explicitly flush the buffer
    fflush(stdout);
    return 0;
}


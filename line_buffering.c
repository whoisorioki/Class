#include <stdio.h>
#include <unistd.h> // for sleep()
int main() {
    // Set line buffering
    setvbuf(stdout, NULL, _IOLBF, 0);    
    printf("This will be printed immediately when newline is encountered");
    sleep(2); // Notice the delay before this appears
    printf("Hi\n");
    printf("Hi");
    printf("This appears immediately\n");    
return 0;
}

#include <stdio.h>

int main() {
    char *old_name = "fhandling.txt";
    char *new_name = "system_programming.txt";
    int value;

    value = rename(old_name, new_name);

    //if (!value) {
      //  printf("File name changed successfully");
    //} else {
      //  perror("Error");
    //}

    return 0;
}


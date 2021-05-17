#include <stdio.h>

void capitalize(char* string){
    string[0] = "A";
    return string;
}

int main(int argc, char *argv[]) {
    printf("%s", "Hey, welcome to my C library\n");
    return 0;
}
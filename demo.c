#include <stdio.h>

const char* capitalize(char* string){
    string[0] = "A";
    return string;
}

int main(int argc, char *argv[]) {
    printf("%s", "Hey, welcome to my C library\n Let's test out capitalize. I am a calling it with 'apple'.");
    printf("%s%s", "The result is ", capitalize("apple"));

    return 0;
}
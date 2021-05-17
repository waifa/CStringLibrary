#include <stdio.h> 

void capitalize(char* string){
    string[0] = 'A';
    printf("%s", string);
}

int main(int argc, char *argv[]) {
    printf("%s", "Hey, welcome to my C library\n");
	char test[] = "apple";
	capitalize(test);
	printf("\n");
    return 0;
}

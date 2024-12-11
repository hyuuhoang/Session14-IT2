#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "HelloWorld";

    printf("Chuoi voi cac ky tu cach nhau 1 dau cach:\n");
    for (int i = 0; i < strlen(str); i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, letterCount = 0;

    printf("nhap mot chuoi : ");
    fgets(str, sizeof(str), stdin);


    while (str[i] != '\0') {

        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            letterCount++;
        }
        i++;
    }

    printf("so ky tu la chu cai trong chuoi: %d\n", letterCount);
    return 0;
}


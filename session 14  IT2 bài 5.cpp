#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, wordCount = 0;
    int inWord = 0;

    printf("nhap môt chuoi : ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
    	
        if (str[i] == ' ') {
            inWord = 0;
        } else if (inWord == 0) {
            wordCount++;
            inWord = 1;
        }
        i++;
    }

    printf("so tu trong chuoi : %d\n", wordCount);
    return 0;
}


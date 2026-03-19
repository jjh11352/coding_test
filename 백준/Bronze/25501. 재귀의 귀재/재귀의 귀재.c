#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void again(const char* s, int i) {
    if (1 == strlen(s)) {
        printf("1 1\n");
        return;
    }

    
    if (s[i] != s[strlen(s) - 1 - i]) {
        printf("0 %d\n", i + 1);
        return;
    }
    else if (i + 1 == strlen(s) / 2) {
        printf("1 %d\n", i + 2);
        return;
    }
    else {
        return again(s, i + 1);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    while (num > 0) {
        char str[1001];
        scanf("%s", str);
        int i = 0;
        again(str, i);
        num--;
    }
    return 0;

}
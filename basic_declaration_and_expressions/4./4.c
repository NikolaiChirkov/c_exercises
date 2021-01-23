#include <stdio.h>

int main(void) {
    char str[6] = "XML";
    char rvrsStr[6] = "  ";
    int rvrsI = 2;

    for (int i = 0; i < 3; i++) {
        rvrsStr[rvrsI - i] = str[i];
    }

    printf("The reverse of %s is %s\n", str, rvrsStr);

    return(0);
}
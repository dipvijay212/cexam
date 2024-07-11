#include<stdio.h>
#include<conio.h>
void reverse_string(char* str) {
    char rev;
    int i, j;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        rev = str[i];
        str[i] = str[j];
        str[j] = rev;
    }
}

void  main() {
    char str[] = "Dipvijay";
    printf("Original string: %s\n", str);
    reverse_string(str);
    printf("Reversed string: %s\n", str);
    getch();
}

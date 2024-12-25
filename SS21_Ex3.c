#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;
    char str[1000];

    fptr = fopen("bt01.txt", "a");

    if (fptr == NULL) {
        printf("Loi mo file!\n");
        return 1;
    }

    printf("Nhap chuoi muon them vao file: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    fprintf(fptr, "%s", str);

    fclose(fptr);

    printf("Da them chuoi vao file bt01.txt thanh cong!\n");

    return 0;
}


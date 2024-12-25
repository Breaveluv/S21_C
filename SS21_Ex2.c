#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char firstChar;

    
    fptr = fopen("bt01.txt", "r");

  
    if (fptr == NULL) {
        printf("Loi mo file!\n");
        return 1;
    }

    if (fscanf(fptr, "%c", &firstChar) == 1) {
        printf("Ky tu dau tien trong file la: %c\n", firstChar);
    } else {
        printf("File rong hoac khong the doc duoc.\n");
    }

    fclose(fptr);

    return 0;
}

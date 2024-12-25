#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char line[1000];

    fptr = fopen("bt01.txt", "r");

   
    if (fptr == NULL) {
        printf("Loi mo file!\n");
        return 1;
    }

   
    if (fgets(line, sizeof(line), fptr) != NULL) {
        printf("Dong dau tien trong file la: %s", line);
    } else {
        printf("File rong hoac khong the doc duoc dong nao.\n");
    }

   
    fclose(fptr);

    return 0;
}

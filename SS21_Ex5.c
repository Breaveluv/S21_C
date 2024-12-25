#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;
    int numLines, i;
    char line[1000];

   
    fptr = fopen("bt05.txt", "w");
    if (fptr == NULL) {
        printf("Loi mo file!\n");
        return 1;
    }

    
    printf("Nhap so dong muon ghi vao file: ");
    scanf("%d", &numLines);
    getchar(); 
    
    for (i = 0; i < numLines; i++) {
        printf("Nhap dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);

       
        line[strcspn(line, "\n")] = 0;

        fprintf(fptr, "%s\n", line); 
    }

    fclose(fptr); 

    fptr = fopen("bt05.txt", "r");
    if (fptr == NULL) {
        printf("Loi mo file!\n");
        return 1;
    }

    
    printf("\nNoi dung file bt05.txt:\n");
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }

    fclose(fptr); 

    return 0;
}


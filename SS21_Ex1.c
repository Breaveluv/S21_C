#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *fptr;
  char str[1000];

  fptr = fopen("bt01.txt", "w");

  if (fptr == NULL) {
    printf("Loi mo file!\n");
    return 1; 
  }

  printf("Nhap chuoi bat ky: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = 0;

  fprintf(fptr, "%s", str);

  fclose(fptr);

  printf("Da ghi chuoi vao file !\n");

  return 0;
}

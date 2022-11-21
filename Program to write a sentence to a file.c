#include <stdio.h>
int main() {
printf("RA2211042010050");
char sentence[1000];
if (fptr == NULL) {
printf("Error!");
exit(1);
}
printf("Enter a sentence:\n");
fgets(sentence, sizeof(sentence), stdin);
fprintf(fptr, "%s", sentence);
fclose(fptr);
return 0;
}

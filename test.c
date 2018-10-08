#include <stdio.h>
#include <stdlib.h>
 size_t getline(char **lineptr, size_t *n, FILE *stream);
 int main() { size_t maxLineLen = 1024; int a; char *line = (char*)malloc(maxLineLen); while(getline(&line, &maxLineLen, stdin) != -1) { line p

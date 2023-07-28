#include "main.h"
/**
  *rot13 -  encodes a string using rot13
  * Return: string
  */
char *rot13(char *str) {
    char *input = str;
    char *output = str;

    while (*input) {
        char c = *input;
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if (c >= 'A' && c <= 'Z') {
                c = ((c - 'A' + 13) % 26) + 'A';
            } else if (c >= 'a' && c <= 'z') {
                c = ((c - 'a' + 13) % 26) + 'a';
            }
        }
        *output = c;
        input++;
        output++;
    }
    *output = '\0';
return (str);
}

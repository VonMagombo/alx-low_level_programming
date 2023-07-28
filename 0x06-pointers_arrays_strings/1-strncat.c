#include "main.h"
/**
 * _strncat - concatenates two strings buts uses the n bytes from the src
 * @dest: copy to
 * @src: copy from 
 * Return: string.
 */
char *_strncat(char *dest, char *src, int n) {
    char *p = dest;
    int i = 0;
    while (*dest != '\0') {
        dest++;
    }
    while (*src && i < n) {
        *dest++ = *src++;
        i++;
    }
    *dest = '\0';
    return p;
}

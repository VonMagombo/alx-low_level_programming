#include "main.h"
/**
  * _strncpy - copies a string
  * @dest - copy to 
  * @src - copy from
  * Return: string
  */
char *_strncpy(char *dest, char *src, int n){
    char *p = dest;
    int i = 0;
    while (*src && i < n) {
        *dest++ = *src++;
        i++;
    }
    while (i < n) {
        *dest++ = '\0';
        i++;
    }
    return p;
}

#include <stdio.h>
 /**
  * main - prints the alphabet in lowercase and then in uppercase, followed by a new line
  * Return: Always 0 (Success)
  */
 int main(void)
 {
         int lower = 122;
  
         while (lower >= 97)
          {
                  putchar(lower);
                  lower--;
          }
         putchar("\n");
         return (0);
 }


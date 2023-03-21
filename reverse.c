#include <stdio.h>
#include <string.h>

int main()
{
  //char* str = "Bruh!";
  char str [100];
  printf("Gimme something to reverse!");
  scanf("%s", str);

  for (int i = 0, j = strlen(str)-1; i < j; i++, j--)
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
  
  printf("%s", str);
}

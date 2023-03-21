#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
  char word[100];
  printf("Enter a palindrome word: ");
  if (fgets(word, 100, stdin))
  {
    word[strcspn(word, "\n")] = 0;
    printf("%s\n", word);
    int len = strlen(word);
    for (int i = 0, j=len-1; i<j; i++, j--)
    {
      if (word[i] != word[j])
      {
        printf("Not a palindrome!");
        return 0;
      }
    }
  printf("Yay it was a palindrome!");
  }
}

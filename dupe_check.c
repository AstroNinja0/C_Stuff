#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int* dupe_check(char* s)
{
  // Bool int
  int check_dupe = 0;
  int len = strlen(s);
  int dupe_count = 0;
  int* array = malloc(sizeof(int) * 2);
  
  for (int i = 0; i < len; i++) {
    for (int j = i+1; j < len; j++)
      if (s[i] == s[j])
      {
        check_dupe = 1;
        dupe_count++;
      }
  }
  array[0] = check_dupe;
  array[1] = dupe_count;
  return array;
}

int main()
{
  char* s = "niger";

  int* a = dupe_check(s);
  a[0] ? printf("Is dupes!!\n") : printf("No dupes!!\n");
  printf("Number of dupes: %d\n", a[1]);
  free(a);
}

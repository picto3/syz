#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char * cmd = "mkdir aaa;cd aaa;touch tt.txt;ls";
  int hoge;
  int i;

  for(i = 0; i < 3; i++) {
    hoge = system(cmd);
  }

  return 0;
}

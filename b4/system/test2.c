#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char cmd[30] = "gcc foo.c";
  char cmd2[30] = "./a.out";
  int hoge;

  hoge = system(cmd);
  printf("system:%d\n",hoge);
  hoge = system(cmd2);
  printf("system:%d\n",hoge);

  
  return 0;
}

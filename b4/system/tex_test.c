#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char cmd1[30] = "platex bar.tex";
  char cmd2[30] = "dvipdf bar.dvi";
  char cmd3[30] = "evince bar.pdf &";
  int hoge;
  
  hoge = system(cmd1);
  printf("\ncmd1:%d\n",hoge);
  hoge = system(cmd2);
  printf("cmd2:%d\n",hoge);
  hoge = system(cmd3);
  printf("cmd3:%d\n",hoge);
  
  return 0;
}

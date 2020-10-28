#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  char cmd1[30] = "platex ";
  char cmd2[30] = "dvipdf ";
  char cmd3[30] = "evince ";
  int hoge;
  int i,j;

  for(i = 0; cmd1[i] != '\0'; i++)
    ;
  for(j = 0; argv[1][j] != '\0'; j++) {
    cmd1[i+j] = argv[1][j];
    cmd2[i+j] = argv[1][j];
    cmd3[i+j] = argv[1][j];
  }
  cmd1[i+j] = '.';
  cmd1[i+j+1] = 't';
  cmd1[i+j+2] = 'e';
  cmd1[i+j+3] = 'x';

  cmd2[i+j] = '.';
  cmd2[i+j+1] = 'd';
  cmd2[i+j+2] = 'v';
  cmd2[i+j+3] = 'i';

  cmd3[i+j] = '.';
  cmd3[i+j+1] = 'p';
  cmd3[i+j+2] = 'd';
  cmd3[i+j+3] = 'f';
  cmd3[i+j+4] = ' ';
  cmd3[i+j+5] = '&';  
  
  hoge = system(cmd1);
  printf("\ncmd1:%d\n",hoge);
  hoge = system(cmd2);
  printf("cmd2:%d\n",hoge);
  hoge = system(cmd3);
  printf("cmd3:%d\n",hoge);

  return 0;
}

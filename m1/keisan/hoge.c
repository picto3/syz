#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  char fname[] = "test.txt";
  char ch;
  int i;
  
  srand((unsigned)time(NULL));
  
  fp = fopen(fname, "w");
  if(fp == NULL) {
    printf("%s file not open\n",fname);
  }

  for(i = 0; i < 1000000; i++) {
    ch = rand()%52 + 65;
    fprintf(fp, "%d",ch);
  }
  fprintf(fp, "%d",EOF);

  fclose(fp);

  return 0;
}

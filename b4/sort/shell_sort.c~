#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 40

void insert_sort(int array[], int st, int h)
{
  int i, j;
  // int k;
  int flag = 0;
  int temp;

  for(i = st+h; i < N; i+=h) {
    temp = array[i];
    if(array[i-h] > temp) {
      for(j = i; (array[j-h] > temp) && (j > st); j-=h) {
        array[j] = array[j-h];
      }
      array[j] = temp;
    }
  }
  /*
  puts("after insert");
  for(k = 0; k < N; k++)
      printf("%3d", array[k]);
    puts("");
  */
}

void shell_sort(int array[], int h)
{
  int i, j;
  // int k;
  // int h2 = h;
  
  do {
    for(j = 0; j < h; j++) {
      insert_sort(array, j, h);
    }
    /*
    for(k = 0; k < N; k++)
      printf("%3d", array[k]);
    puts("");
    */
    h /= 2;
  } while(h >= 1);
}

int main(void)
{
  int num[N];
  int i;

  //srand((unsigned)time(NULL));
  srand(1);
  for(i = 0; i < N; i++)
    num[i] = rand()%100;

  for(i = 0; i < N; i++)
    printf("%3d", num[i]);
  puts("");

  shell_sort(num, 4);
  for(i = 0; i < N; i++)
    printf("%3d", num[i]);
  puts("");


  return 0;
}

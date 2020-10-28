#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 60000

void shaker_sort(int array[])
{
  int i, j, k;
  int n = N-1;
  int temp;
  int flag;

  for(i = 0; i < N; i++) {
    flag = 0;
    
    //for(j = i+1; j <= n-i; j++) {
    for(j = i+1; j <= n; j++) {
      if(array[i] > array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        flag++;
      }
    }

    j = i;
    for(k = n-i; k >= j; k--) {
    //for(k = n-i; k >= 0; k--) {
      if(array[k] > array[n]) {
        temp = array[n];
        array[n] = array[k];
        array[k] = temp;
        flag++;
      }
    }
    if(flag == 0)
      break;
  }

}

int main(void)
{
  int num[N];
  int i;
  clock_t st, end;

  //srand((unsigned)time(NULL));
  srand(1);
  for(i = 0; i < N; i++)
    num[i] = rand()%100;

  for(i = 0; i < N; i++)
    printf("%3d", num[i]);
  puts("");

  st = clock();
  shaker_sort(num);
  end = clock();

  for(i = 0; i < N; i++)
    printf("%3d", num[i]);
  puts("");

  printf("shaker : %.2fsec\n",(double)(end-st)/CLOCKS_PER_SEC);

  return 0;
}

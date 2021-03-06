#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000

void insert_sort(int array[], int n)
{
  int i, j, k;
  int flag = 0;
  int temp;

  for(i = 1; i < n; i++) {
    temp = array[i];
    if(array[i-1] > temp) {
      for(j = i; (array[j-1] > temp) && (j > 0); j--) {
        array[j] = array[j-1];
      }
      array[j] = temp;
    }
  }
}

int main(void)
{
  int num[N];
  int i;
  clock_t st, end;

  FILE *fp;
  int n;

  fp = fopen("insert.dat", "w");
  
  //srand((unsigned)time(NULL));
  srand(1);

  for(n = 2; n < N; n += 5000) {
    for(i = 0; i < N; i++)
      num[i] = rand()%100;

    /*
    for(i = 0; i < N; i++)
      printf("%3d", num[i]);
    puts("");
    */
    
    st = clock();
    insert_sort(num, n);
    end = clock();

    fprintf(fp, "%d %f\n",n ,(double)(end-st)/CLOCKS_PER_SEC);
  }
  for(i = 0; i < N; i++)
    printf("%3d", num[i]);
  puts("");

  fclose(fp);
  
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000

void bubble_sort(int array[], int n)
{
  int i, j;
  int temp;

  for(i = 0; i < n; i++) {
    for(j = i+1; j < n; j++) {
      if(array[i] > array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
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

  fp = fopen("bubble.dat","w");
  //srand((unsigned)time(NULL));
  srand(1);
  for(n = 1; n < N; n += 5000) {
    for(i = 0; i < n; i++)
      num[i] = rand()%100;
    
    /*
      for(i = 0; i < N; i++)
      printf("%3d", num[i]);
      puts("");
    */
  
    st = clock();
    bubble_sort(num,n);
    end = clock();

    fprintf(fp, "%d %f\n",n ,(double)(end-st)/CLOCKS_PER_SEC);
  }
  /*
  for(i = 0; i < N; i++)
    printf("%3d", num[i]);
  puts("");
  */
  //printf("bubble : %.2fsec\n",(double)(end-st)/CLOCKS_PER_SEC);

  fclose(fp);
  
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000

void quick_sort(int array[], int left, int right)
{
  int i, j;
  int border;
  int temp;
  int k;

  // ソート区間の設定
  i = left;
  j = right;

  // 区間内で境界を決める
  border = array[(left+right)/2];

  // 境界を境に分ける
  while(1) {
    // 境界より大きいものを見つける
    while(array[i] < border)
      i++;
    // 境界より小さいものを見つける
    while(array[j] > border)
      j--;
    // すべて比較したら終了 
    if(i >= j)
      break;
  
    // ↑の2つを入れ替える
    temp = array[i];
    array[i] = array[j];
    array[j] = temp;

    // 次の数字へ
    i++;
    j--;
  }
  
  // 左側の区間が2要素以上ならソート
  if(i-1 > left)
    quick_sort(array, left, i-1);
  
  // 右側の区間が2要素以上ならソート
  if(j+1 < right)
    quick_sort(array, j+1, right);
  
}

int main(void)
{
  int num[N];
  int i;
  clock_t st, end;

 
  int n;
  FILE *fp;

  fp = fopen("quick.dat","w");
  
  //srand((unsigned)time(NULL));
  srand(1);
  for(n = 100; n < N; n += 300) {
    for(i = 0; i < N; i++)
      num[i] = rand()%100;

    /*
    for(i = 0; i < N; i++)
      printf("%3d", num[i]);
    puts("");
    */
    
    st = clock();
    quick_sort(num, 0, n-1);
    end = clock();
    
    fprintf(fp, "%d %f\n",n ,(double)(end-st)/CLOCKS_PER_SEC);
  }
  
  for(i = 0; i < N; i++)
    printf("%3d", num[i]);
  puts("");
 
 
  fclose(fp);
 
  return 0;
}

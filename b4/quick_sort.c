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

  /*
  printf("left: %d, right: %d\n",left, right);
  for(k = 0; k < N; k++)
    printf("%3d",array[k]);
  puts("");
  */
  
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
  if(i >= j+1)
    i = j;
  if(i > left)
    quick_sort(array, left, i);
  
  // 右側の区間が2要素以上ならソート
  if(j+1 < right)
    quick_sort(array, j+1, right);
  
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

  quick_sort(num, 0, N-1);
  for(i = 0; i < N; i++)
    printf("%3d", num[i]);
  puts("");

  return 0;
}

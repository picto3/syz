/* 配列を使わずに文字列を作る */
#include <stdio.h>
#include <stdlib.h>

struct Cell{
  struct Cell * next;
  struct Cell * prev;
  char c;
};

void insert(struct Cell * p, char t, int i);
void delete(struct Cell * p, int i);
void display(struct Cell * p);

int main(void)
{
  struct Cell * header;
  struct Cell * str;
  struct Cell * p;
  char t, hoge;
  int i;

  /* 初期化 */
  header = (struct Cell *)malloc(1 * sizeof(struct Cell));
  header->next = (struct Cell *)malloc(1 * sizeof(struct Cell));
  header->prev = NULL;
  str = header->next;
  str->prev = header;
  p = str;

  /* 文字列の作成 */
  /* 0が入力されたら終了 */
  printf("input char : ");
  scanf("%c%c", &t, &hoge);
  i = 0;
  while(t != '0') {
    /* 文字の代入とセルの移動 */
    str -> c = t;
    str -> next = (struct Cell *)malloc(1 * sizeof(struct Cell));
    str = str->next;

    /* 前のセルを設定 */
    if(i > 0) {
      str -> prev = p;
      p = p->next;
    }
    
    printf("input char : ");
    //scanf("%c",&t);
    scanf("%c%c", &t, &hoge);
    
    i++;
  }
  
  /* 終端文字の挿入(削除のときのSegment-error回避) */
  str -> c = '\0';
  str -> next = (struct Cell *)malloc(1 * sizeof(struct Cell));
  str = str->next;

  /* 終わりをNULLにする */
  str->next = NULL;

  /* 作成した文字列の出力 */
  display(header);

  /* 挿入の動作確認 */
  insert(header, 'b', 0);
  insert(header, 'a', 1);
  insert(header, 'r', 2);
  display(header);
  

  /* 削除の動作確認 */
  delete(header,4);
  display(header);

  /* 後処理 */
  free(header);
  free(str);
  free(p);

  return 0;
}

void insert(struct Cell * p, char t, int i)
{
  int max;
  struct Cell * q;
  struct Cell * temp1;
  //struct Cell * temp2;

  max = 0;
  for(q = p; q != NULL; q = q->next)
    max++;

  if(max < i || i < 0)
    printf("そこには挿入できません\n");
  else {

    for(q = p; i > 0; i--)
      q = q->next;
    
    temp1 = (struct Cell *)malloc(1 * sizeof(struct Cell));
    temp1->c = t;
   
    q->next->prev = temp1;
    temp1->next = q->next;
    temp1->prev = q;
    q->next = temp1;
  }

}

void delete(struct Cell * p, int i)
{
  int max;
  struct Cell * q;

  max = 0;
  for(q = p; q != NULL; q = q->next)
    max++;

  if(max < i || i < 0)
    printf("そこは削除できません\n");
  else {
    for(q = p; i >= 0; i--)
      q = q->next;
    
    q->prev->next = q->next;
    q->next->prev = q->prev;
  }
}

void display(struct Cell * p)
{
  struct Cell *q;
  
  for(q = p->next; q != NULL; q = q->next) {
    printf("%c", q->c);
  }
  printf("\n");
}

/* 循環リスト */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Cell {
  struct Cell *next;
  int value;
} Cell;

int SelectMenu(void);
void Insert(Cell *head);
void Delete(Cell *head);
void Print(Cell *head);

int main(void)
{
  int menu;
  Cell head;

  head.next = &head;

  do {
    switch (menu = SelectMenu()) {
      case 1:
        Insert(&head);
        break;
      case 2:
        Delete(&head);
        break;
      case 3:
        Print(&head);
        break;
    }
  } while (menu != 0);

  return 0;
}

int SelectMenu(void)
{
  int i,ch;
  char * menu[] =
  {"Insert",
    "Delete",
    "Print"};

  do {
    for (i = 0; i < 3; i++) {
      printf("(%d) %-10s  ",i+1,menu[i]);
      if ((i%3) == 2)
        putchar('\n');
    }
    printf("(0) quit\n");
    printf("input number : ");
    scanf("%d",&ch);
  } while (ch < 0 || ch > 3);

  return (ch);
}

void Insert(Cell *head)
{
  struct Cell *p;
  struct Cell *p2;
  int data;
  int place;

  printf("input insert place : ");
  scanf("%d",&place);

  p = head;

  for(; 0 < place; place --) {
    p = p->next;
  }

  printf("input data:");
  scanf("%d",&data);

  p2 = (struct Cell *)malloc(1 * sizeof(struct Cell));

  p2->value = data;
  p2->next = p->next;
  p->next = p2;

  /*
     p2->value = data;
     if(p->next == head) {
     p2->next = head->next;
     p->next = p2;
     }
     else {
     p2->next = p->next;
     p->next = p2;
     }
   */

  putchar('\n');
}

void Delete(Cell *head)
{
  struct Cell *p;
  int place;

  p = head;

  printf("input delete place : ");
  scanf("%d",&place);

  for(; 0 < place; place --)
    p = p->next;

  /* headerは削除しない */
  if(p->next == head)
    printf("can't delete (there is header.)\n");
  else
    p->next = p->next->next;
}

void Print(Cell *head)
{
  struct Cell *p;

  p = head;

  for(p = p->next; p != head; p = p->next) {
    printf("%d %p\n",p->value,p);
  }
}

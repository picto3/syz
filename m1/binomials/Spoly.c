#include <stdio.h>
#include <stdlib.h>

struct monom {
  int c[2]; // 係数([分母,分子])
  int n;   // 変数の数
  int *e;  // 指数
};

struct monom *new_monom(int n) {
  struct monom *m;
  int i;
  m = (struct monom *)malloc(sizeof(struct monom));
  m -> c[0] = 1;
  m -> c[1] = 1;
  m -> n = n;
  m -> e = (int *)malloc(sizeof(int)*n);
  for (i=0; i<n; i++) (m->e)[i] = 0;
  return(m);
}

void set_monom(struct monom *f, int *coef, int num, int *exp) {
  int i;
  
  f->c[0] = coef[0];
  f->c[1] = coef[1];
  f->n = num;
  for(i = 0; i < f->n; i++) {
    f->e[i] = exp[i];
  }
}

void set_binom(struct monom **f, int *c1, int n1, int *e1, int *c2, int n2, int *e2) {
  int s1 = 0, s2 = 0;
  int i;
  int flag = 1;

  if(n1 != n2) {
    printf("変数の数が合っていません\n");
    flag = 0;
  }
  
  for(i = 0; i < n1; i++) {
    s1 += e1[i];
    s2 += e2[i];
  }
  if(s1 != s2) {
    printf("2つの単項式の全次数が合っていません\n");
    flag = 0;
  }
  
  if(flag) {
    set_monom(f[0],c1,n1,e1);
    set_monom(f[1],c2,n2,e2);  
  }
  
}
	
void print_monom(struct monom *f) {
  int i,n;
  n = f->n;
  printf("(%d/%d)[",f->c[1],f->c[0]);
  for (i=0; i<n; i++) {
     if (i != n-1) printf("%d,",(f->e)[i]);
     else printf("%d]",(f->e)[i]);
  }
}

void print_binom(struct monom **f) {
  int i,n;
 
  for(i = 0; i < 2; i++) {
    n = f[i]->n;
    //if(f[i]->c[0]*f[i]->c[1] >= 0) printf("+");
    printf("+");
    print_monom(f[i]);
  }
}

void mul_monom(struct monom *f, struct monom *g, struct monom *h) {
  
}

void add_poly() {

}

void Spoly(struct monom *f, struct monom *g) {
  
}

int main(void)
{
  struct monom *f[2];
  struct monom *g[2];
  int t[3] = {4,0,0};
  int tt[3] = {1,1,2};
  int c1[2] = {1,1};
  int c2[2] = {3,-1};
  
  f[0] = new_monom(3);
  g[0] = new_monom(3);
  f[1] = new_monom(3);
  g[1] = new_monom(3);


  set_binom(f, c1, 3, t, c2, 3, tt);
  
  print_binom(f);
  printf("\n");
  
  
  return 0;
}

int main(void)
{
  volatile int a;

  a = 0;
  switch(a) {
  case 0: a++; break;
  case 1: a--; break;
  default : a++; a++; break;
  }
  
  return 0;
}

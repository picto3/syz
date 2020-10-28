int main(void)
{
  volatile int a;

  a = 1;
  if(a <= 1) {
    a++;
  }
  else if(a == 0) {
    a++;
    a++;
  }
  else {
    a--;
  }

  return 0;
}

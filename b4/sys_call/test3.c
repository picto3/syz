#include <sys/syscall.h>

int main(void)
{
  long ret;
  const char *str = "Hello!\n";

  ret = syscall(SYS_write, 1, str, sizeof(str)-1);

  return 0;
}

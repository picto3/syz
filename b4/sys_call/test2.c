#include <unistd.h>

int main()
{
  const void *string = "Hello, World!\n";
  write(1, string, 15);

  return 0;
}

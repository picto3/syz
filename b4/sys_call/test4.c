int main(void)
{
  int err;
  const char *str = "Hello\n";

  // write system call
  asm volatile("mov %0, %%rax" : : "i"(1));
  // 1st arg file_discripter=1
  asm volatile("mov %0, %%rdi" : : "i"(1));
  // 2nd arg string
  asm volatile("mov %0, %%rsi" : : "m"(str));
  // 3rd arg length
  asm volatile("mov %0, %%rdx" : : "i"(sizeof(str)-1));
  asm volatile("syscall" : "=a"(err));

  return 0;
}
  

int main(void)
{
  int err;
  const char *str = "Hello World!\n";

  asm volatile("mov %0, %%rax" : : "i"(1));
  asm volatile("mov %0, %%rdi" : : "i"(1));
  asm volatile("mov %0, %%rsi" : : "m"(str));
  asm volatile("mov %0, %%rdx" : : "i"(13));
  asm volatile("syscall" : "=a"(err));

  return 0;
}

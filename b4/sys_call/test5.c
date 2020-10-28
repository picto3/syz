int main(void)
{
  int err;
  const void* str = "Hello, World!\n";

  asm volatile("mov $1, %%rax");
  asm volatile("mov $1, %%rdi");
  asm volatile("mov %0, %%rsi" : : "m"(str));
  asm volatile("mov $14, %%rdx");
  asm volatile("syscall" : "=a"(err));

  return 0;
}

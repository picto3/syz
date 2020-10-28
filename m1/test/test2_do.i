# 1 "test2_do.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "test2_do.c"
int main(void)
{
    volatile int i;

    i = 5;
    do {
        i--;
    }while(i > 0);

    return 0;
}

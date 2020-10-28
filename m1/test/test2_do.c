int main(void)
{
    volatile int i;

    i = 5;
    do {
        i--;
    }while(i > 0);

    return 0;
}
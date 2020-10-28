int main(void)
{
    volatile int i;

    i = 0;
    do {
        i++;
    }while(i < 5);

    return 0;
}

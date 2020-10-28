#include <stdio.h>
#include <stdlib.h>

#define N 20


void disp(int array[])
{
    int i;

    for(i = 0; i < N; i++)
        printf("%3d ",array[i]);
    puts("");
}

void count_compair(int array[])
{
    int i, j;
    int count[N];
    int temp[N];

    for(i = 0; i < N; i++)
        count[i] = 0;

    for(i = 0; i < N-1; i++) {
        for(j = i+1; j < N; j++) {
            if(array[i] < array[j])
                count[j] ++;
            else
                count[i] ++;
        }
    }

    for(i = 0; i < N; i++)
        temp[count[i]] = array[i];
    for(i = 0; i < N; i++)
        array[i] = temp[i];

}

int main(void)
{
    int array[N];
    int i;

    srand(1);

    for(i = 0; i < N; i++)
        array[i] = rand()%100;

    disp(array);

    count_compair(array);

    disp(array);

    return 0;
}
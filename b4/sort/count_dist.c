#include <stdio.h>
#include <stdlib.h>

#define N 20
#define RANGE 100


void disp(int array[])
{
    int i;

    for(i = 0; i < N; i++)
        printf("%3d ",array[i]);
    puts("");
}

void count_dist(int array[])
{
    int i, j;
    int count[RANGE];
    int temp[N];

    for(i = 0; i < RANGE; i++)
        count[i] = 0;

    for(i = 0; i < N; i++) {
        count[array[i]] ++; 
        temp[i] = 0;
    }
    for(i = 1; i < RANGE; i++)
        count[i] += count[i-1];

    disp(array);
    for(i = 0; i < N; i++) {
        j = count[array[i]] - 1;
        temp[j] = array[i];
        //disp(temp);
        count[array[i]]--;
    }

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

    count_dist(array);

    disp(array);

    return 0;
}
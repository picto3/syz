#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20


void disp(int array[])
{
    int i;

    for(i = 0; i < N; i++) {
        printf("%3d ",array[i]);
    }
    puts("");
}

void bubble_sort(int array[])
{
  int i, j;
  int temp;

  for(i = 0; i < N; i++) {
    for(j = i+1; j < N; j++) {
      if(array[i] > array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

}

int unibin_search(int array[], int key)
{
    int i, m;

    bubble_sort(array);
    disp(array);

    i = N/2;
    m = N/2;

    while(1) {
        if(key < array[i]) {
            if(m == 0) {
                return -1;
            }
            else {
                i = i - m/2;
                if(m%2 == 0 || m == 1)
                    m = m/2;
                else
                    m = m/2+1;
            }
        }
        else if(array[i] < key) {
            if(m == 0) {
                return -1;
            }
            else {
                i = i + m/2;
                if(m%2 == 0 || m == 1)
                    m = m/2;
                else
                    m = m/2+1;
            }
        }
        else{
            return i;
        }
    }

    return -1;
}

int main(void)
{
    int array[N];
    int i;
    int key;
    int result;

    srand(1);

    key = rand()%100;
    key = 40;
    for(i = 0; i < N; i++) {
        array[i] = rand()%100;
    }

    printf("key : %d\n",key);
    disp(array);

    result = unibin_search(array, key);

    printf("search result: %d\n",result);

    return 0;
}

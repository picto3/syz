#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

void select_sort(int array[], int n)
{
    int i, j;
    int min;
    int temp;

    for(i = 0; i < n; i++) {
        min = i;
        for(j = i+1; j < n; j++) {
            if(array[j] < array[min])
                min = j;
        }
        temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }    
}

int main(void)
{
    int num[1000000];
    int i;
    int n = 1;
    clock_t st, end;
	FILE *fp;

	fp = fopen("select.dat", "w");

    //srand((unsigned)time(NULL));
    srand(1);
    for(; n <= 100000; n += 5000) {
    	for(i = 0; i < n; i++)
        	num[i] = rand()%100;
    /*  
    for(i = 0; i < n; i++)
        printf("%3d", num[i]);
    puts("");
    */
   
    	st = clock();
    	select_sort(num, n);
    	end = clock();
    
    	fprintf(fp, "%8d %f\n", n, (double)(end-st)/CLOCKS_PER_SEC);
    }

    for(i = 0; i < N; i++)
        printf("%3d", num[i]);
    puts("");
  
    printf("select : %.2fsec\n",(double)(end-st)/CLOCKS_PER_SEC);

	fclose(fp);

    return 0;
}

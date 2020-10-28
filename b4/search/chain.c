#include <stdio.h>
#include <stdlib.h>

#define N 20
#define TABLE_SIZE 5

typedef struct Cell {
    int index;
    int value;
    struct Cell *next;
} Cell;

typedef struct Result {
    int index;
    struct Result *next;
} Result;


void disp(int array[])
{
    int i;

    for(i = 0; i < N; i++) {
        printf("%3d ",array[i]);
    }
    puts("");
}

int hash(int value)
{
    return value % TABLE_SIZE;
}

void make_hashtable(Cell * table[], int array[])
{
    int i;
    Cell * p[TABLE_SIZE];
    int j;

    for(i = 0; i < TABLE_SIZE; i++) {
        p[i] = table[i];
    }

    for(i = 0; i < N; i++) {
        p[hash(array[i])]->next = (Cell *)malloc(sizeof(Cell) * 1);
        p[hash(array[i])] = p[hash(array[i])]->next;
        p[hash(array[i])]->index = i;
        p[hash(array[i])]->value = array[i];
    }
    for(i = 0; i < TABLE_SIZE; i++) {
        p[i]->next = NULL;
    }
}

void print_tabel(Cell * table[])
{
    int i, j;
    Cell * p[TABLE_SIZE];

    for(i = 0; i < TABLE_SIZE; i++) {
        j = 0;
        for(p[i] = table[i]->next; p[i] != NULL; p[i] = p[i]->next) {
            if(j == 0)
                printf("%d | ",i);
            printf("%d(index:%d) -> ",p[i]->value, p[i]->index);
            j++;
        }
        puts("NULL");
    }
}

int hash_search(int array[], int key, Result * result)
{
    int i;
    Cell * table[TABLE_SIZE];
    Cell * p;
    Result * q;
    char flag = -1;

    for(i = 0; i < TABLE_SIZE; i++) {
        table[i] = (Cell *)malloc(sizeof(Cell) * 1);
        table[i]->next = NULL;
    }

    make_hashtable(table, array);
    print_tabel(table);

    q = result;
    for(p = table[hash(key)]->next; p != NULL; p = p->next) {
        if(p->value == key) {
            if(flag > 0)
                flag++;
            else
                flag = 1;
                
            q->next = (Result *)malloc(sizeof(Result) * 1);
            q = q->next;
            q->index = p->index;
            q->next = NULL;
        }
    }
    
    return flag;
}

int main(int argc, char *argv[])
{
    int array[N];
    int i;
    int key;
    Result * res;
    Result * p;
    int found;

    srand(1);
    for(i = 0; i < N; i++) {
        array[i] = rand()%100;
    }
    disp(array);

    res = (Result *)malloc(sizeof(Result) * 1);

    for(i = 1; i < argc; i++) {
        sscanf(argv[i], "%d", &key);
    }
    found = hash_search(array, key, res);

    printf("search result: %d\n",found);
    if(found) {
        printf("index : ");
        for(p = res->next; p != NULL; p = p->next) {
            printf("%d, ", p->index);
        }
        puts("");
    }

    return 0;
}
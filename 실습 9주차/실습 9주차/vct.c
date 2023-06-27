/*
#include <stdio.h>
#include <stdlib.h>

#define INIT_CAPACITY 1

typedef struct
{
    int* datas;   // 실제 데이터 값들
    int size;     // 데이터의 개수
    int capacity; // vector의 실제 메모리 공간
} Vector;

Vector* create_vector()
{
    Vector* vector = (Vector*)malloc(sizeof(Vector));
    vector->datas = (int*)malloc(sizeof(INIT_CAPACITY * sizeof(int)));
    vector->size = 0;
    vector->capacity = INIT_CAPACITY;
    return vector;
}

void push_back(Vector* vector, int element)
{
    if (vector->size == vector->capacity)
    {
        int* new_data = (int*)realloc(vector->datas, (vector->capacity + 1) * sizeof(int));
        vector->datas = new_data;
        vector->capacity++;
    }
    vector->datas[vector->size++] = element;
}

void erase(Vector* vector, int index)
{
    if (index < 0 || index >= vector->size)
    {
        printf("index out of range\n");
        return;
    }
    for (int i = index + 1; i < vector->size; i++)
    {
        vector->datas[i - 1] = vector->datas[i];
    }
    vector->size--;
    vector->capacity--;
    int* new_data = (int*)realloc(vector->datas, (vector->capacity));
    vector->datas = new_data;
}

int get(Vector* vector, int index)
{
    if (index < 0 || index >= vector->size)
    {
        printf("index out of range\n");
        return -1;
    }
    return vector->datas[index];
}

void set(Vector* vector, int index, int element)
{
    if (index < 0 || index >= vector->size)
    {
        printf("index out of range\n");
        return;
    }
    vector->datas[index] = element;
}

void print_vector(Vector* vector)
{
    printf("[");
    for (int i = 0; i < vector->size; i++)
    {
        printf("%d", vector->datas[i]);
        if (i < vector->size - 1)
            printf(", ");
    }
    printf("]\n");
}

void free_vector(Vector* vector)
{
    free(vector->datas);
    free(vector);
}
*/
#include <stdio.h>

#define MAX_SIZE 100001

int heap[MAX_SIZE];
int heap_size = 0;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void push(int x) {
    heap[++heap_size] = x;
    int child = heap_size;
    int parent = child / 2;
    while (child > 1 && heap[parent] > heap[child]) {
        swap(&heap[parent], &heap[child]);
        child = parent;
        parent = child / 2;
    }
}

int pop() {
    if (heap_size == 0) return 0;
    
    int result = heap[1];
    heap[1] = heap[heap_size--];
    int parent = 1;
    int child = 2;
    
    while (child <= heap_size) {
        if (child < heap_size && heap[child] > heap[child + 1]) {
            child++;
        }
        if (heap[parent] <= heap[child]) break;
        swap(&heap[parent], &heap[child]);
        parent = child;
        child = parent * 2;
    }
    
    return result;
}

int main() {
    int N, x;
    scanf("%d", &N);
    
    while (N--) {
        scanf("%d", &x);
        if (x == 0) {
            printf("%d\n", pop());
        } else {
            push(x);
        }
    }
    
    return 0;
}
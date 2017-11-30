#include <stdio.h>

void mem_clear(void * ptr, size_t num);

#define N 10

int main() {
	int arr[N];
	int i;
	for (i = 0; i < N; i++) {
		arr[i] = i;
	}
	mem_clear(arr, N * sizeof(int));
	for (i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}
}

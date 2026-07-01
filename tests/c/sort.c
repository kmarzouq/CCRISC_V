// Bubble sort over a stack array -- exercises loops, array indexing, and
// word loads/stores with computed addresses.

int main(void) {
    int arr[8] = {5, 3, 8, 1, 9, 2, 7, 4};
    int n = 8;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) return i + 1;
    }
    return 0;
}

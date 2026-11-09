#include <stdio.h>

void solve(int index, int selected, int arr[]) {

    if (index == 4) {
        if (selected == 3) {
            for (int i = 0; i < 4; i++)
                printf("%d ", arr[i]);

            printf("\n");
        }
        return;
    }

    // Select current column
    arr[index] = 1;
    solve(index + 1, selected + 1, arr);

    // Skip current column
    arr[index] = 0;
    solve(index + 1, selected, arr);
}

int main() {
    int arr[4] = {0};

    solve(0, 0, arr);

    return 0;
}
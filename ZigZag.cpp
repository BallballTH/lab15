#include <iostream>
#include <vector>

using namespace std;

void zigzagScan(int N, int M) {
    vector<vector<int>> arr(N, vector<int>(M));

    int val = 1;
    for (int i = 0; i < N + M - 1; i++) {
        if (i % 2 == 0) {
            // Diagonal going up
            int row = (i < N) ? i : N - 1;
            int col = (i < N) ? 0 : i - N + 1;
            while (row >= 0 && col < M) {
                arr[row][col] = val++;
                row--;
                col++;
            }
        } else {
            // Diagonal going down
            int row = (i < M) ? 0 : i - M + 1;
            int col = (i < M) ? i : M - 1;
            while (row < N && col >= 0) {
                arr[row][col] = val++;
                row++;
                col--;
            }
        }
    }

    // Print the zig-zag array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N, M;
    cout << "Enter number of rows (N): ";
    cin >> N;
    cout << "Enter number of columns (M): ";
    cin >> M;

    zigzagScan(N, M);
}
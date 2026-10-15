#include <iostream>
#include <windows.h>
#include <malloc.h>
using namespace std;\
int N, n;
int **grid;
void liveOrDie() {
    int countLiveNeighbors(int, int);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int neighbors = countLiveNeighbors(i, j);
            if (grid[i][j] == 1) {
                if (neighbors < 2 || neighbors > 3) {
                    grid[i][j] = 0;
                } else {
                    grid[i][j] = 1;
                }
            } else {
                if (neighbors == 3) {
                    grid[i][j] = 1;
                } else {
                    grid[i][j] = 0;
                }
            }
        }
    }
    Sleep(2000);
}
int countLiveNeighbors(int x, int y) {
    int count = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 && j == 0) continue;
            int nx = x + i;
            int ny = y + j;
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] == 1) count++;
        }
    }
    return count;
}

int main() {
    cout << "Enter the number of rows and columns: ";
    cin>>N;
    n=N;
    grid =(int**)malloc(N * N * sizeof(int*));
    for (int i = 0; i < N; i++) 
    {
        grid[i] = (int *)malloc(N * sizeof(int));
    }

    int con=0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }
    while (true) {
        cout << "Generation: " << con << endl;
        cout << "Matrix:" << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        liveOrDie();
        con++;
    }
    return 0;
}
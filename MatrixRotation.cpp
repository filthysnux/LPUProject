#include <iostream>
using namespace std;

// Define the size of the square matrix
const int SIZE = 4;

// Function to display the matrix
void printMatrix(int matrix[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            cout << matrix[row][col] << "\t";
        }
        cout << endl;
    }
}

// Function to rotate the matrix 90 degrees clockwise
void rotateMatrix90Clockwise(int matrix[SIZE][SIZE]) {
    // Step 1: Transpose the matrix
    // Transposing means swapping matrix[i][j] with matrix[j][i]
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < SIZE; i++) {
        int start = 0;
        int end = SIZE - 1;
        while (start < end) {
            // Swap elements at start and end of the row
            int temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;
            start++;
            end--;
        }
    }
}

int main() {
    // Original matrix
    int matrix[SIZE][SIZE] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15,16}
    };

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    // Rotate the matrix
    rotateMatrix90Clockwise(matrix);

    cout << "\nMatrix After 90 Degree Clockwise Rotation:\n";
    printMatrix(matrix);

    return 0;
}

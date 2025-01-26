#include <iostream>
using namespace std;

// Function to fill the matrix with sequential values
void fillMatrix(int *matrix, int rows, int cols) {
    int value = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            *(matrix + i * cols + j) = value++;
        }
    }
}

// Function to print the matrix
void printMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << *(matrix + i * cols + j) << " ";
        }
        cout << endl; // New line after each row
    }
}

int main() {
    int rows = 3, cols = 3; // Matrix dimensions
    int *matrix = new int[rows * cols]; // Dynamically allocate memory for the matrix

    fillMatrix(matrix, rows, cols); // Fill the matrix
    cout << "Matrix:" << endl;
    printMatrix(matrix, rows, cols); // Print the matrix

    delete[] matrix; // Free the dynamically allocated memory
    return 0;
}

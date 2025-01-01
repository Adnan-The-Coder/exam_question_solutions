#include<stdio.h>
#include<stdlib.h>

struct MATRIX {
    int row;
    int column;
    int **matrix;  // A pointer to dynamically allocated 2D array
    // The first level (*matrix) is a pointer to an array (typically representing rows of a matrix).
    // The second level (**matrix) points to the individual elements in each row (the actual data in the matrix).
};

// Function to allocate memory for matrix
void allocateMatrix(struct MATRIX *m) {
    m->matrix = (int **)malloc(m->row * sizeof(int *)); // m is a pointer to structure hence -> is used to access its members
    // m->matrix is a pointer to this dynamically allocated members
    // int **:
        // A pointer to a pointer to an integer.
        // This means that int ** can store the address of a variable that is itself a pointer to an integer.
        // This is used for 2D arrays (matrices) in C, where the first pointer (int *) points to the rows of the matrix, and each of those rows is an array of integers (int).
    for (int i = 0; i < m->row; i++) {
        m->matrix[i] = (int *)malloc(m->column * sizeof(int));
            // Inside the for loop, we allocate memory for each row in the matrix:
                // m->matrix[i] = (int *)malloc(m->column * sizeof(int));
                    // m->matrix[i] refers to the i-th row of the matrix (which is an array of integers).
                    // malloc(m->column * sizeof(int)) allocates memory for m->column integers in each row. This is the number of columns in that row.
            // This process is repeated for each row in the matrix (up to m->row rows).
    }
}

// Function to free memory of matrix
void freeMatrix(struct MATRIX *m) {
    for (int i = 0; i < m->row; i++) {
        free(m->matrix[i]);
    }
    free(m->matrix);
}

int main() {
    int n, choice, i, j, k;

    printf("Enter 1 for Matrix Addition and 2 for Matrix Multiplication: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Matrix addition
        printf("Enter the number of matrices you want to add: ");
        scanf("%d", &n);

        struct MATRIX matrix[n];  // Array of matrix structs
        for (i = 0; i < n; i++) {
            printf("Enter the number of rows and columns for matrix %d: ", i + 1);
            scanf("%d%d", &matrix[i].row, &matrix[i].column);

            // Allocate memory for the matrix
            allocateMatrix(&matrix[i]);

            // Input the matrix elements
            printf("Enter elements of matrix %d:\n", i + 1);
            for (j = 0; j < matrix[i].row; j++) {
                for (k = 0; k < matrix[i].column; k++) {
                    scanf("%d", &matrix[i].matrix[j][k]);
                }
            }
        }

        // Validate the size of matrices for addition
        for (i = 0; i < n - 1; i++) {
            if (matrix[i].row != matrix[i + 1].row || matrix[i].column != matrix[i + 1].column) {
                printf("The matrices cannot be added due to mismatched dimensions.\n");
                exit(1);
            }
        }

        // Allocate memory for the result matrix
        struct MATRIX result;
        result.row = matrix[0].row;
        result.column = matrix[0].column;
        allocateMatrix(&result);

        // Initialize result matrix to 0
        for (i = 0; i < result.row; i++) {
            for (j = 0; j < result.column; j++) {
                result.matrix[i][j] = 0;
            }
        }

        // Matrix addition (sum all matrices)
        for (i = 0; i < result.row; i++) {
            for (j = 0; j < result.column; j++) {
                for (k = 0; k < n; k++) {
                    result.matrix[i][j] += matrix[k].matrix[i][j];
                }
            }
        }

        // Print the result matrix
        printf("Result of Matrix Addition:\n");
        for (i = 0; i < result.row; i++) {
            for (j = 0; j < result.column; j++) {
                printf("%d ", result.matrix[i][j]);
            }
            printf("\n");
        }

        // Free allocated memory
        for (i = 0; i < n; i++) {
            freeMatrix(&matrix[i]);
        }
        freeMatrix(&result);

    } else if (choice == 2)  {
        struct MATRIX matrix1, matrix2, result;

        // Input the first matrix
        printf("Enter the number of rows and columns for matrix 1: ");
        scanf("%d%d", &matrix1.row, &matrix1.column);
        allocateMatrix(&matrix1);  // Allocate memory for matrix 1
        
        printf("Enter elements of matrix 1:\n");
        for (i = 0; i < matrix1.row; i++) {
            for (j = 0; j < matrix1.column; j++) {
                scanf("%d", &matrix1.matrix[i][j]);
            }
        }

        // Input the second matrix
        printf("Enter the number of rows and columns for matrix 2: ");
        scanf("%d%d", &matrix2.row, &matrix2.column);
        
        // Matrix multiplication is only possible if columns of matrix 1 equals rows of matrix 2
        if (matrix1.column != matrix2.row) {
            printf("Matrix multiplication is not possible. Columns of matrix 1 must equal rows of matrix 2.\n");
            exit(1);
        }
        
        allocateMatrix(&matrix2);  // Allocate memory for matrix 2

        printf("Enter elements of matrix 2:\n");
        for (i = 0; i < matrix2.row; i++) {
            for (j = 0; j < matrix2.column; j++) {
                scanf("%d", &matrix2.matrix[i][j]);
            }
        }

        // Allocate memory for the result matrix (rows of matrix1 and columns of matrix2)
        result.row = matrix1.row;
        result.column = matrix2.column;
        allocateMatrix(&result);

        // Perform matrix multiplication
        for (i = 0; i < result.row; i++) {
            for (j = 0; j < result.column; j++) {
                result.matrix[i][j] = 0;  // Initialize the result matrix element to 0
                for (k = 0; k < matrix1.column; k++) {
                    result.matrix[i][j] += matrix1.matrix[i][k] * matrix2.matrix[k][j];
                }
            }
        }

        // Print the result matrix
        printf("Result of Matrix Multiplication:\n");
        for (i = 0; i < result.row; i++) {
            for (j = 0; j < result.column; j++) {
                printf("%d ", result.matrix[i][j]);
            }
            printf("\n");
        }

        // Free allocated memory for matrices
        freeMatrix(&matrix1);
        freeMatrix(&matrix2);
        freeMatrix(&result);
    }

    return 0;
}

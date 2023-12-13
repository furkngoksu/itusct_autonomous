#include <iostream>
#include <vector>
#include <cmath>

class Matrix {
private:
    std::vector<std::vector<double>> matrix;

public:
    Matrix(int _rows, int _cols, int x = 0) {
        matrix = std::vector<std::vector<double>>(_rows, std::vector<double>(_cols, x));
    }

    Matrix(std::vector<std::vector<double>> _matrix) {
        matrix = _matrix;
    }

    void print() {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                std::cout << matrix[i][j] << ' ';
            }
            std::cout << std::endl;
        }
    }

    static void inverse(std::vector<std::vector<double>> inputMatrix, std::vector<std::vector<double>>& outputMatrix) {
        if (inputMatrix.size() != 3 || inputMatrix[0].size() != 3) {
            std::cerr << "Matrix must be 3x3 for inversion." << std::endl;
            return;
        }

        double det = inputMatrix[0][0] * (inputMatrix[1][1] * inputMatrix[2][2] - inputMatrix[1][2] * inputMatrix[2][1]) -
                     inputMatrix[0][1] * (inputMatrix[1][0] * inputMatrix[2][2] - inputMatrix[1][2] * inputMatrix[2][0]) +
                     inputMatrix[0][2] * (inputMatrix[1][0] * inputMatrix[2][1] - inputMatrix[1][1] * inputMatrix[2][0]);

        if (det == 0) {
            std::cerr << "Matrix is not invertible (determinant is zero)." << std::endl;
            return;
        }

        // Calculate the adjugate matrix
        std::vector<std::vector<double>> adjugate(3, std::vector<double>(3, 0));
        adjugate[0][0] = (inputMatrix[1][1] * inputMatrix[2][2] - inputMatrix[1][2] * inputMatrix[2][1]) / det;
        adjugate[0][1] = (inputMatrix[0][2] * inputMatrix[2][1] - inputMatrix[0][1] * inputMatrix[2][2]) / det;
        adjugate[0][2] = (inputMatrix[0][1] * inputMatrix[1][2] - inputMatrix[0][2] * inputMatrix[1][1]) / det;
        adjugate[1][0] = (inputMatrix[1][2] * inputMatrix[2][0] - inputMatrix[1][0] * inputMatrix[2][2]) / det;
        adjugate[1][1] = (inputMatrix[0][0] * inputMatrix[2][2] - inputMatrix[0][2] * inputMatrix[2][0]) / det;
        adjugate[1][2] = (inputMatrix[0][1] * inputMatrix[1][0] - inputMatrix[0][0] * inputMatrix[1][1]) / det;
        adjugate[2][0] = (inputMatrix[1][0] * inputMatrix[2][1] - inputMatrix[1][1] * inputMatrix[2][0]) / det;
        adjugate[2][1] = (inputMatrix[0][1] * inputMatrix[2][0] - inputMatrix[0][0] * inputMatrix[2][1]) / det;
        adjugate[2][2] = (inputMatrix[0][0] * inputMatrix[1][1] - inputMatrix[0][1] * inputMatrix[1][0]) / det;

        outputMatrix=adjugate;
    }



    double trace() {
        if (matrix.size() != matrix[0].size()) {
            std::cerr << "Matrix must be square for trace calculation." << std::endl;
            return 0.0;
        }

        double sum = 0.0;
        for (int i = 0; i < matrix.size(); i++) {
            sum += matrix[i][i];
        }
        return sum;
    }


    double determinant() {
        if (matrix.size() != 3 || matrix[0].size() != 3) {
            std::cerr << "Matrix must be 3x3 for determinant calculation." << std::endl;
            return 0.0;
        }

        double det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
                     matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
                     matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

        return det;
    }


    Matrix transpose() {
        std::vector<std::vector<double>> transposed(matrix[0].size(), std::vector<double>(matrix.size(), 0.0));

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                transposed[j][i] = matrix[i][j];
            }
        }

        return Matrix(transposed);
    }


    Matrix add(Matrix other) {
        if (matrix.size() != other.matrix.size() || matrix[0].size() != other.matrix[0].size()) {
            std::cerr << "Matrix dimensions must match for addition." << std::endl;
        }

        std::vector<std::vector<double>> result(matrix.size(), std::vector<double>(matrix[0].size(), 0.0));

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                result[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }

        return Matrix(result);
    }



    Matrix subtract(Matrix other) {
        if (matrix.size() != other.matrix.size() || matrix[0].size() != other.matrix[0].size()) {
            std::cerr << "Matrix dimensions must match for subtraction." << std::endl;
        }

        std::vector<std::vector<double>> result(matrix.size(), std::vector<double>(matrix[0].size(), 0.0));

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                result[i][j] = matrix[i][j] - other.matrix[i][j];
            }
        }

        return Matrix(result);
    }


    Matrix neg() {
        //bizim matrisimizle aynı boş bir 00 matrisi oluşturur.
        std::vector<std::vector<double>> result(matrix.size(), std::vector<double>(matrix[0].size(), 0.0));

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                result[i][j] = -matrix[i][j];
            }
        }

        return Matrix(result);
    }


    Matrix multiply(Matrix other) {
        if (matrix.size() != other.matrix.size() || matrix[0].size() != other.matrix[0].size()) {
            std::cerr << "Matrix dimensions must match for multiplication." << std::endl;
        }

        std::vector<std::vector<double>> result(matrix.size(), std::vector<double>(matrix[0].size(), 0.0));

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                result[i][j] = matrix[i][j] * other.matrix[i][j];
            }
        }

        return Matrix(result);
    }

    //neden matrix.size 
    double dot(Matrix other) {
        if (matrix.size() != other.matrix.size() || matrix[0].size() != other.matrix[0].size()) {
            std::cerr << "Matrix dimensions must match for dot product calculation." << std::endl;
            return 0.0;
        }

        double result = 0.0;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                result += matrix[i][j] * other.matrix[i][j];
            }
        }

        return result;
    }

    //Class icinde tanımladıgımız matris variableının her değerini çarpar çarpımları toplar.
    double magnitude() {
        double result = 0.0;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                result += matrix[i][j] * matrix[i][j];
            }
        }

        return sqrt(result);
    }

};





int main(){
    std::vector<std::vector<double>> matrix1 = {
        {9, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    Matrix myMatrix(matrix1);
    std::cout << "Original Matrix:" << std::endl;
    myMatrix.print();
    std::vector<std::vector<double>> inverseMatrix(3, std::vector<double>(3, 0));
    Matrix::inverse(matrix1, inverseMatrix);
    std::cout << "Inverse Matrix:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << inverseMatrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    std::cout << "Trace: " << myMatrix.trace() << std::endl;
    std::cout << "Determinant: " << myMatrix.determinant() << std::endl;
    Matrix transposedMatrix = myMatrix.transpose();
    std::cout << "Transposed Matrix:" << std::endl;
    transposedMatrix.print();
    std::vector<std::vector<double>> other = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    Matrix otherMatrix(other);
    Matrix additionResult = myMatrix.add(otherMatrix);
    std::cout << "Addition Result:" << std::endl;
    additionResult.print();
    Matrix subtractionResult = myMatrix.subtract(otherMatrix);
    std::cout << "Subtraction Result:" << std::endl;
    subtractionResult.print();
    Matrix negatedMatrix = myMatrix.neg();
    std::cout << "Negated Matrix:" << std::endl;
    negatedMatrix.print();
    Matrix elementWiseResult = myMatrix.multiply(otherMatrix);
    std::cout << "Element-wise Multiplication Result:" << std::endl;
    elementWiseResult.print();
    double dotProduct = myMatrix.dot(otherMatrix);
    std::cout << "Dot Product: " << dotProduct << std::endl;
    double magnitude = myMatrix.magnitude();
    std::cout << "Magnitude (Frobenius Norm): " << magnitude << std::endl;

    return 0;
}


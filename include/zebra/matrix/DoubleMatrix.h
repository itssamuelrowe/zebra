/*
 * Copyright 2018-2019 Samuel Rowe
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Sunday, November 03, 2019

#ifndef ZEBRA_MATRIX_DOUBLE_MATRIX_H
#define ZEBRA_MATRIX_DOUBLE_MATRIX_H

/*******************************************************************************
 * DoubleMatrix                                                                *
 *******************************************************************************/

/**
 * @class DoubleMatrix
 * @ingroup zebra_matrix
 * @author Samuel Rowe
 * @since Zebra 1.0
 */
struct zb_DoubleMatrix_t {
    int32_t m_rows;
    int32_t m_columns;
    double** m_values;
};

/**
 * @memberof DoubleMatrix
 */
typedef struct zb_DoubleMatrix_t zb_DoubleMatrix_t;

/* Constructor */

/** 
 * @memberof DoubleMatrix
 */
zb_DoubleMatrix_t* zb_DoubleMatrix_new(int32_t rows, int32_t columns);

/**
 * @memberof DoubleMatrix
 */
zb_DoubleMatrix_t* zb_DoubleMatrix_newWithDefaultValue(int32_t rows, int32_t columns,
    double defaultValue)

/**
 * @memberof DoubleMatrix
 */
zb_DoubleMatrix_t* zb_DoubleMatrix_newIdentityMatrix(int32_t n);

/**
 * @memberof DoubleMatrix
 */
zb_DoubleMatrix_t* zb_DoubleMatrix_newZeroMatrix(int32_t rows, int32_t columns);

/** 
 * @memberof DoubleMatrix
 */
zb_DoubleMatrix_t* zb_DoubleMatrix_newFromArray(double** array, int32_t rows,
    int32_t columns);

/* Destructor */

/** 
 * @memberof DoubleMatrix
 */
void zb_DoubleMatrix_delete(zb_DoubleMatrix_t* matrix);

/* Add */

/**
 * In order to find the sum of two matrices, the matrices involved must have an
 * equal number of rows and columns. The sum of two matrices will produce a
 * matrix with the same number of rows and columns in the specified matrices.
 *
 * The sum of two matrices is evaluated by adding corresponding elements
 * in the specified matrices. Addition of two matrices, say `A` and `B`, are
 * denoted as `A + B`.
 *
 * @memberof DoubleMatrix
 */
zb_DoubleMatrix_t* zb_DoubleMatrix_add(zb_DoubleMatrix_t* matrix1, zb_DoubleMatrix_t* matrix2);

/* Adjugate */

/**
 * @memberof DoubleMatrix
 */
zb_DoubleMatrix_t* zb_DoubleMatrix_adjugate(zb_DoubleMatrix_t* matrix);

/* Array */

/**
 * @memberof DoubleMatrix
 */
void zb_DoubleMatrix_toArray(zb_DoubleMatrix_t* matrix, double** destination,
    int32_t rows, int32_t columns);

/* Clone */

/** 
 * @memberof DoubleMatrix
 */
zb_DoubleMatrix_t* zb_DoubleMatrix_clone(zb_DoubleMatrix_t* matrix);

/* Column */

/**
 * @memberof DoubleMatrix
 */
int32_t zb_DoubleMatrix_getColumn(zb_DoubleMatrix_t* matrix, int32_t column,
    double* destination, int32_t size);

/* Columns */

/**
 * @memberof DoubleMatrix
 */
int32_t zb_DoubleMatrix_countColumns(zb_DoubleMatrix_t* matrix);

/* Determinant */

/**
 * @memberof DoubleMatrix
 */
double zb_DoubleMatrix_getDeterminant(zb_DoubleMatrix_t* matrix);

/* Equals */

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_equals(zb_DoubleMatrix_t* matrix1, zb_DoubleMatrix_t* matrix2);

/* Equals Array */

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_equalsArray(zb_DoubleMatrix_t* matrix1, double** array,
    int32_t rows, int32_t columns);

/* Inverse */

/**
 * @memberof DoubleMatrix
 */
zb_DoubleMatrix_t* zb_DoubleMatrix_getInverse(zb_DoubleMatrix_t* matrix);

/* Row */

/**
 * @memberof DoubleMatrix
 */
int32_t zb_DoubleMatrix_getRow(zb_DoubleMatrix_t* matrix, int32_t row,
    double* destination, int32_t size);

/* Matrix Type */

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_isColumnMatrix(zb_DoubleMatrix_t* matrix);

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_isDiagonalMatrix(zb_DoubleMatrix_t* matrix);

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_isIdentityMatrix(zb_DoubleMatrix_t* matrix);

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_isRectangularMatrix(zb_DoubleMatrix_t* matrix);

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_isRowMatrix(zb_DoubleMatrix_t* matrix);

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_isScalarMatrix(zb_DoubleMatrix_t* matrix);

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_isSquare(zb_DoubleMatrix_t* matrix);

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_isTriangularMatrix(zb_DoubleMatrix_t* matrix);

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_isLowerTriangularMatrix(zb_DoubleMatrix_t* matrix);

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_isUpperTriangularMatrix(zb_DoubleMatrix_t* matrix);

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_isZeroMatrix(zb_DoubleMatrix_t* matrix);

/* Multiply */

/**
 * @memberof DoubleMatrix
 */
zb_DoubleMatrix_t* zb_DoubleMatrix_multiply(zb_DoubleMatrix_t* matrix1,
    zb_DoubleMatrix_t* matrix2);

/**
 * @memberof DoubleMatrix
 */
zb_DoubleMatrix_t* zb_DoubleMatrix_multiplyWithArray(zb_DoubleMatrix_t* matrix1,
    double** matrix2, int32_t matrix2Rows, int32_t matrix2Columns);

/* Negative */

/**
 * @memberof DoubleMatrix
 */
zb_DoubleMatrix_t* zb_DoubleMatrix_getNegative(zb_DoubleMatrix_t* matrix);

/* Rows */

/**
 * @memberof DoubleMatrix
 */
int32_t zb_DoubleMatrix_countRows(zb_DoubleMatrix_t* matrix);

/* Subtract */

/**
 * @memberof DoubleMatrix
 */
zb_DoubleMatrix_t* zb_DoubleMatrix_subtract(zb_DoubleMatrix_t* matrix1,
    zb_DoubleMatrix_t* matrix2);

/* Symmetric */

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_isSymmetric(zb_DoubleMatrix_t* matrix);

/* Transpose */

/**
 * @memberof DoubleMatrix
 */
zb_DoubleMatrix_t* zb_DoubleMatrix_getTranspose(zb_DoubleMatrix_t* matrix);

/**
 * @memberof DoubleMatrix
 */
bool zb_DoubleMatrix_isTranspose(zb_DoubleMatrix_t* matrix1, zb_DoubleMatrix_t* matrix2);

/* Value */

/**
 * @memberof DoubleMatrix
 */
double zb_DoubleMatrix_getValue(zb_DoubleMatrix_t* matrix, int32_t row, int32_t column);

/**
 * @memberof DoubleMatrix
 */
void zb_DoubleMatrix_setValue(zb_DoubleMatrix_t* matrix, int32_t row,
    int32_t column, double value);

#endif /* ZEBRA_MATRIX_DOUBLE_MATRIX_H */
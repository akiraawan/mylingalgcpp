#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include "matrix.h"
#include "vector.h"
#include "slice.h"
#include "operations.h"
#include <tuple>

using namespace la::matrix;
using namespace la::vector;

namespace la {
namespace algorithms {

Matrix GS_classical(Matrix& A);

Matrix GS_modified(Matrix& A);

void householder(Matrix& A);

Vector solve_Q(const Matrix& Q, const Vector& b);

Matrix solve_U(const Matrix& U, const Matrix& B);

std::tuple<Matrix, Matrix> householder_qr(Matrix& A);

Vector householder_ls(Matrix& A, Vector& b);

void hessenberg(Matrix& A);

Matrix hessenbergQ(Matrix& A);

std::tuple<Vector, double> pow_it(const Matrix& A, const Vector& x0, double tol = 1e-6, size_t max_iter = 1000);

} // namespace algorithms
} // namespace la

#endif // ALGORITHMS_H
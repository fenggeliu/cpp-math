//
// Created by fenggeliu on 6/20/20.
//
#include <iostream>
#include "linalg/lib/lib.h"

using namespace std;
/**
 * The function
 *    void **matrix()
 * reserves dynamic memory for a two-dimensional matrix
 * using the C++ command new . No initialization of the elements.
 * Input data:
 *   int row - number of rows
 *   int col - number of columns
 *   int num_bytes- number of bytes for each
 *   element
 * Returns a void **pointer to the reserved memory location.
 */

void** matrix(
    int row,
    int col,
    int num_bytes) {
  int i, num;
  char** pointer, * ptr;
  pointer = new(nothrow) char* [row];
  if (!pointer) {
    cout << "Exception handling: Memory allocation failed";
    cout << "for" << row << "row addresses !" << endl;
    return nullptr;
  }
  i = (int) ((row * col * num_bytes) / sizeof(char));
  pointer[0] = new(nothrow) char[i];
  if (!pointer[0]) {
    cout << "Exception handling: Memory allocation failed";
    cout << "for address to" << i << "characters! " << endl;
    return nullptr;
  }
  ptr = pointer[0];
  num = col * num_bytes;
  for (i = 0; i < row; i++, ptr += num) { pointer[i] = ptr; }
  return (void**) pointer;
} // end: function void **matrix()

void free_matrix(int** matrix) {
  for (int i = 0; i < sizeof(matrix) / sizeof(matrix[0]); i++) {
    delete[] matrix[i];
  }
  delete[] matrix;
}

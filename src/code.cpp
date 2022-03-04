#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy


namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int answer = abs(left - right);
    return answer * answer;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    using std::string;

    if (mask < 0 or bit_pos < 0) {
      return false;
    }

    string d_number;

    while (mask > 0) {
      d_number += char(mask % 2);
      mask /= 2;
    }

    if (d_number[static_cast<unsigned long long int>(bit_pos)] == '1') {
      return true;
    }

    else {
      return false;
    }
  }

  // Task 3
  int max3(int left, int middle, int right) {
    if (left >= middle and left >= right) {
      return left;
    }

    else if (middle >= left and middle >= right) {
      return middle;
    }

    else if (right >= middle and right >= left) {
      return right;
    }
  }


  // Task 4
  int swap_args(int* left, int* right) {

    if (!(left == nullptr or right == nullptr)) {
        int x = *left;
        *left = *right;
        *right = x;
    }
    return 0;
  }
  // Task 5
  int arr_sum(int *arr, int length) {
    if (length <= 0 or arr == nullptr) {
      return 0;
    }

    int sum_arr = 0;

    for (int i = 0; i < length; ++i) {

      sum_arr += arr[i];
    }
    return sum_arr;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (arr == nullptr or length <= 0) {
      return nullptr;
    }

    int max_el = arr[0];
    int* pointer_max_el = &arr[0];

    for (int i = 1; i < length; ++i) {
      if (arr[i] > max_el) {
        max_el = arr[i];
        pointer_max_el = &arr[i];
      }

    }
    return pointer_max_el;

  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length <= 0) {
      return nullptr;
    }

    std::string str;

    for (int i = 0; i < length; ++i) {
      str += std::to_string(init_value) + ", ";
    }

    str.pop_back();
    str.pop_back();

    std::cout << "[" << str << "]";

  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (length <= 0 or arr_in == nullptr) {
      return nullptr;
    }

    int *arr = new int[length];
    std::copy(arr_in, arr_in + length, arr);

    return arr;


    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment

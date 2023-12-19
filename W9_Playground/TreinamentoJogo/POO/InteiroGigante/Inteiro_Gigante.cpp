#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

class HugeInteger {
private:
  int digits[40];
public:
  HugeInteger() {
    memset(digits, 0, sizeof(digits));
  }

  void input() {
    string str;
    cin >> str;
    // O comprimento da string str é armazenado na variável len.
    int len = str.length();
    cout << len << endl;
    for (int i = 0; i < len; i++) {
      digits[39 - i] = str[len - 1 - i] - '0';
      cout << i << endl;
    }
  }

  void output() {
    int i = 0;
    while (i < 40 && digits[i] == 0) {
      i++;
    }
    if (i == 40) {
      cout << "0";
    } else {
      while (i < 40) {
        cout << digits[i];
        i++;
      }
    }
    std::cout << std::endl;
  }

  HugeInteger add(const HugeInteger& other) const {
    HugeInteger result;
    int carry = 0;
    for (int i = 39; i >= 0; i--) {
      int sum = digits[i] + other.digits[i] + carry;
      result.digits[i] = sum % 10;
      carry = sum / 10;
    }
    return result;
  }

  HugeInteger subtract(const HugeInteger& other) const {
    HugeInteger result;
    int borrow = 0;
    for (int i = 39; i >= 0; i--) {
      int diff = digits[i] - other.digits[i] - borrow;
      if (diff < 0) {
        diff += 10;
        borrow = 1;
      } else {
        borrow = 0;
      }
      result.digits[i] = diff;
    }
    return result;
  }

  bool isEqualTo(const HugeInteger& other) const {
    for (int i = 0; i < 40; i++) {
      if (digits[i] != other.digits[i]) {
        return false;
      }
    }
    return true;
  }

  bool isNotEqualTo(const HugeInteger& other) const {
    return !isEqualTo(other);
  }

  bool isGreaterThan(const HugeInteger& other) const {
    for (int i = 0; i < 40; i++) {
      if (digits[i] > other.digits[i]) {
        return true;
      } else if (digits[i] < other.digits[i]) {
        return false;
      }
    }
    return false;
  }

  bool isLessThan(const HugeInteger& other) const {
    for (int i = 0; i < 40; i++) {
      if (digits[i] < other.digits[i]) {
        return true;
      } else if (digits[i] > other.digits[i]) {
        return false;
      }
    }
    return false;
  }

  bool isGreaterThanOrEqualTo(const HugeInteger& other) const {
    return !isLessThan(other);
  }

  bool isLessThanOrEqualTo(const HugeInteger& other) const {
    return !isGreaterThan(other);
  }

  bool isZero() const {
    for (int i = 0; i < 40; i++) {
      if (digits[i] != 0) {
        return false;
      }
    }
    return true;
  }

  HugeInteger multiply(const HugeInteger& other) const {
    HugeInteger result;
    for (int i = 39; i >= 0; i--) {
      int carry = 0;
      for (int j = 39; j >= 0; j--) {
        int product = digits[i] * other.digits[j] + carry + result.digits[i + j + 1];
        result.digits[i + j + 1] = product % 10;
        carry = product / 10;
      }
      result.digits[i] += carry;
    }
    return result;
  }

  HugeInteger divide(const HugeInteger& other) const {
    HugeInteger result;
    HugeInteger remainder = *this;
    for (int i = 0; i < 40; i++) {
      int quotient = 0;
      while (remainder.isGreaterThanOrEqualTo(other)) {
        remainder = remainder.subtract(other);
        quotient++;
      }
      result.digits[i] = quotient;
      remainder.digits[39] = 0;
      for (int j = 38; j >= 0; j--) {
        remainder.digits[j + 1] = remainder.digits[j];
      }
      remainder.digits[0] = digits[i + 1];
    }
    return result;
  }

  HugeInteger modulus(const HugeInteger& other) const {
    HugeInteger remainder = *this;
    for (int i = 0; i < 40; i++) {
      int quotient = 0;
      while (remainder.isGreaterThanOrEqualTo(other)) {
        remainder = remainder.subtract(other);
        quotient++;
      }
      remainder.digits[39] = 0;
      for (int j = 38; j >= 0; j--) {
        remainder.digits[j + 1] = remainder.digits[j];
      }
      remainder.digits[0] = digits[i + 1];
    }
    return remainder;
  }
};

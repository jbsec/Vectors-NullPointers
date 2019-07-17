#include <iostream>
using namespace std;

int main() {
  std::cout << "Hello World!\n";
}

double* pd  = nullptr;
Link<Record>* lst = nullptr;
int x = nullptr;

int count_x(char* p, char x)
  // count the number of occurrences of x in [p]
  // p is assumed to point to a zero-terminated arrayr of char (or to nothing)
  {
    if (p==nullptr) return 0;
    int count = 0;
    for (; *p!=0; ++p)
      if (*p==x)
        ++count;
    return count;
  }
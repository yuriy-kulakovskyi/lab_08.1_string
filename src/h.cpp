#include "../include/main.h"
#include <string>

using namespace std;

int Count(const string& s) {
  int k = 0;
  size_t pos = 0;
  while (pos < s.size() - 3) {
    if (s[pos] == s[pos + 1] && s[pos] == s[pos + 2] && s[pos] == s[pos + 3]) {
      k++;
      pos += 4;
    } else {
      pos++;
    }
  }
  return k;
}

string Change(string& s) {
  size_t pos = 0;
  while (pos < s.size() - 3) {
    if (s[pos] == s[pos + 1] && s[pos] == s[pos + 2] && s[pos] == s[pos + 3]) {
      s.replace(pos, 4, "**");
      pos += 2;
    } else {
      pos++;
    }
  }
  return s;
}
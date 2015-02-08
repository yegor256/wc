#include <stdio.h>
#include <unistd.h>
int main() {
  char ch;
  int count = 0;
  while (1) {
    if (read(STDIN_FILENO, &ch, 1) <= 0) {
      break;
    }
    if (ch == ' ') {
      ++count;
    }
  }
  if (count > 0) {
    ++count;
  }
  printf("%d\n", count);
  return 0;
}

    #include <stdio.h>

    int main() {
      int a, b;

      scanf("%d", &a);
      scanf("%d", &b);
      int y;
      while (a <= b) {
        y++;
        if (a == b) {
          break;
        }
        a *= 3;
        b *= 2;
      }
      printf("%d", y);
      return 0;
    }

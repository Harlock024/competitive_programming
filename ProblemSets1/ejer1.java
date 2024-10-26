import java.util.Scanner;

public class ejer1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, h, row = 0;
        n = sc.nextInt();
        h = sc.nextInt();
        int p[] = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            if (p[i] <= h) row++;
            else if (p[i] > h) row = row + 2;
        }

        System.out.print(row);
    }
}

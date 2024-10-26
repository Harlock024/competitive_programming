import java.util.Scanner;

public class ps3 {

    public static void main(String[] arg) {
        Scanner in = new Scanner(System.in);
        int a, b, y = 0;

        a = in.nextInt();
        b = in.nextInt();

        while (a <= b) {
            y++;
            if (a > b) break;
            a *= 3;
            b *= 2;
        }
        System.out.print(y);
    }
}

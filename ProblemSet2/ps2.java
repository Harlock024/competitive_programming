import java.util.Scanner;

public class ps2 {

    public static void main(String[] args) {
        int p, aw = 0, dw = 0;
        Scanner in = new Scanner(System.in);
        p = in.nextInt();
        String w = in.next();
        char ws[] = new char[p];
        for (int i = 0; i < p; i++) {
            ws[i] = w.charAt(i);
        }

        for (int i = 0; i < p; i++) {
            if (ws[i] == 'A') aw++;
            else if (ws[i] == 'D') dw++;
        }
        if (aw > dw) System.out.print("Anton");
        else if (aw < dw) System.out.print("Danik");
        else System.out.print("Friendship");
    }
}

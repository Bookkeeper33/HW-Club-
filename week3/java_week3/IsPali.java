import java.util.Scanner;

public class IsPali {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String input = in.nextLine();
        StringBuffer reversed = new StringBuffer(input);

        reversed.reverse();

        if ( input.equals(reversed.toString()) ) {
            System.out.println("yes");
        } else {
            System.out.println("no");
        }

        in.close();
    }
}
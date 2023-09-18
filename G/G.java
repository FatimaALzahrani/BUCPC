import java.io.*;
import java.util.*;

public class G {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if (n == 5 || n == 4) {
            System.out.println("I'm very excited");
        } else if (n == 3 || n == 2 || n == 1) {
            System.out.println("I'm a little excited");
        } else if (n == 0) {
            System.out.println("I'm not excited");
        }
    }
}

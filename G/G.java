import java.util.*;

public class G {
    public static void main(String[] args) {
        int n, p;
        Queue<Integer> q = new LinkedList();
        Scanner input = new Scanner(System.in);
        while ((n = input.nextInt()) != 0) {
            for (int i = 1; i <= n; i++) {
                q.add(i);
            }
            System.out.print("Discarded cards:");
            while (q.size() > 1) {
                System.out.print(" " + q.peek());
                q.poll();
                p = q.peek();
                q.poll();
                if (q.size() != 0)
                    System.out.print(",");
                q.add(p);
            }
            System.out.println("\nRemaining card: " + q.peek());
            q.poll();
        }
    }
}
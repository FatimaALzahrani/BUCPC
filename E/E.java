import java.util.*;

public class E {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        Set<Integer> s = new HashSet<>();
        
        for (int i = 0; i < n; i++) {
            int g = scanner.nextInt();
            while (g-- > 0) {
                int a = scanner.nextInt();
                s.add(a);
            }
        }
        
        System.out.println(s.size() == m ? "Yes" : "No");
        scanner.close();
    }
}

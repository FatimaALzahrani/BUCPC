package D;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class D {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        int n = s.length();
        Map<String, Integer> mp = new HashMap<>();
        
        for (int i = 0; i < n; i++) {
            String substr = s.substring(i, Math.min(i + 4, n));
            mp.put(substr, mp.getOrDefault(substr, 0) + 1);
        }
        
        int sum = 0;
        for (int value : mp.values()) {
            if (value >= 3) {
                sum++;
            }
        }
        
        System.out.println(sum);
    }
}

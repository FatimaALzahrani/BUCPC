import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        // بنعرف متغير لتخزين عدد الناس في المسرح
        int n;
        // بنستخدم Scanner لأخذ الإدخال من المستخدم
        Scanner scanner = new Scanner(System.in);
        // بناخذ من المستخدم عدد
        n = scanner.nextInt();
        // بنطبع العدد ناقص واحد واللي هو فاطمة ؛ لأنها ما بتسلم على نفسها
        System.out.println(n - 1);
    }
}

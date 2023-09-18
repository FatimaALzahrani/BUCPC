import java.util.Scanner;

public class B {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        //بنسمح للمستخدم يدخل عدد يمثل عدد حالات الاختبار ونخزنه بالمتغير تي
        int T = scanner.nextInt();
        //بنعيد الخطوات الاتيه لكل تست كيس 
        while (T-- > 0) {
           //بنعرف متغيرين ونسمح للمستخدم يدخلهم
            int a= scanner.nextInt();
            int b =  scanner.nextInt();
            //بنطبع ناتج طرح العدد الثاني من الاول لحساب الربح
            System.out.println(b-a);
        }
    }
}

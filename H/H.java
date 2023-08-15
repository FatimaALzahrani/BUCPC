package H;

import java.util.Scanner;

public class H {
    public static void main(String [] args){
        //تعريف متغيرات لتخزين نتائج الفريقين الأول والثاني
        int a, b;
        //السماح للمستخدم بادخال نتائج الفريقين
        Scanner input = new Scanner(System.in);
        a=input.nextInt();
        b=input.nextInt();
         //قارن بين A و B: 
         // * إذا كان A > B، طباعة "first".
         // * إذا كان B > A، طباعة "second".
         // * غير كذا بيكونون متساويين فبنطبع "draw".
        System.out.println(a > b ? "first" : a < b ? "second" : "draw");
         //السطر اللي فوق مجرد اختصار للسطور الجايه
         /*
         if(a > b)
             System.out.println("first");
         else if(a < b)
             System.out.println("second");
         else
             System.out.println("draw");
         */
    }
}

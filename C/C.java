
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 12fat
 */
public class C {
     public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s=input.next();
        int k=input.nextInt();
        char re='0';
        int count=0;
        for (int i = 0; i < s.length(); i++) {
            count=0;
            for (int j = 0; j < s.length(); j++) {
                if(s.charAt(i)==s.charAt(j)){
                count++;
                }
            }
            if(count==k){
            re=s.charAt(i);
            break;
            }
}
        if(re=='0')
         System.out.println("NO");
     else
             System.out.println("YES "+re);}
}

import java.util.Scanner;

public class F {
 public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int T=input.nextInt();
        int re=0;
        int count=0;
        for (int i = 0; i < 2; i++) {
            int sum=0;
            for (int j = 0; j < T; j++) {
            int n=input.nextInt();
            sum+=n;
            }
            if(i==0){
            re=sum;
            count++;
            }
            else if(re==sum){
            count++;
            }
        }
        if(count==2)
            System.out.println("fair");
        else 
            System.out.println("not fair");
    }
}

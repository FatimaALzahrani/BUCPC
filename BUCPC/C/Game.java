
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Game {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int T=input.nextInt();
        for (int i = 0; i < T; i++) {
            int n=input.nextInt();
            List<Integer> Ar=new ArrayList<>();
            int tmp=0;
            int key=0;
            int count=0;
            int k=n;
           for (int j = 0; j < n; j++) {
                Ar.add(input.nextInt());
            }
            while(true){
             for (int j = 0; j < Ar.size(); j++) {
                   if(Ar.get(j)<tmp){
                   tmp=Ar.get(j);
                   key=j;
                }
            }
            for(int j = key; j < Ar.size(); j++) {
                 Ar.remove(j);
            }
            count++;
            k=Ar.size();
            if(Ar.isEmpty())
                break;
            }
            if(count%2==0){
                System.out.println("Hoor");
            }else
                System.out.println("Majd");
}        
}
}

package D;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        String s=input.next();
        Map<String,Integer> mp=new HashMap<String,Integer>();
        int sum=0;
        for (int i = 0; i < s.length()-3; i++){
            if(mp.containsKey(s.substring(i,i+3))){
                mp.put(s.substring(i,i+3),mp.get(s.substring(i,i+3)+1));
            }else{
                mp.put(s.substring(i,i+3),1);
            }
        }
        for (int i = 0; i < s.length()-3; i++){
                if(mp.get(s.substring(i,i+3))>=3){
                    sum++;
                }
        }
        System.out.println(sum);
    }
}
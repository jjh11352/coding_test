//import java.util.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();

        int re=0;
        int now = 0;
        for(int i = 0;i<str.length();i++){
            if(str.charAt(i)==')'&& str.charAt(i-1)=='('){
                now--;
                re+=now;
            }else if(str.charAt(i)==')'&&str.charAt(i-1)==')'){
                re++;
                now--;
            }else{
                now++;
            }
        }
        System.out.println(re);
    }
}
import java.util.*;
import java.lang.*;
import java.io.*;


public class codechef{

    public static void main(String[] args)throws java.lang.Exception{
        Scanner read = new Scanner(System.in);
        int t= read.nextInt();

        while(t-->0){
            int n= read.nextInt(), z= read.nextInt();
            Integer[] power= new Integer[n];
            for(int i=0; i<n; i++)
                power[i]= read.nextInt();
            System.out.println(fate_of_konoha(power, z));
        }
        read.close();
    }

    public static String fate_of_konoha(Integer[] power, int z) {
        
        Arrays.sort(power, Collections.reverseOrder()); int len= power.length, i= 0, hits= 0;
        // System.out.printf("Modified arr[] : %s", Arrays.toString(power));
        while(i< len){
            while(i<len-1 && power[i]>= power[i+1]){
                z-= power[i];
                hits++;
                if(z<= 0)
                    return String.valueOf(hits);
                power[i]/= 2;
            }
            i++;
        }
        return "Evacuate";
    }
}
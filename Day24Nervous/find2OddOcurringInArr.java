package Day24Nervous;

import java.io.*;
import java.lang.*;
import java.util.*;

// import javax.lang.model.util.ElementScanner6;

/*
    Find xor-sumation of all elements.
    Find least significant set bit(Bi).
    Split elements into set of two, where Bi is set and off.
    XOR of the splits.
*/
class find2OddOccuringInArr{
    
    public static Integer[] findOddOcurring(Integer[] arr) {
        Integer[] valueCountOdd = new Integer[2];
        Integer res= 0;
        for (Integer value : arr)
            res ^= value;

        Integer lsDiffBit = res & ~(res-1); 
        Integer[] setArr = new Integer[1]; Integer[] notSetArr =  new Integer[1];

        Integer set=0, notSet=0;
        for (Integer value : arr) 
            if ((value & lsDiffBit) != 0)
                set ^= value;
            else
                notSet ^= value;
        
         
        valueCountOdd[0]= set;    
        valueCountOdd[1]= notSet;
        
        return valueCountOdd;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Integer arrSize = input.nextInt();
        Integer[] arr = new Integer[arrSize];
        for(int i=0; i<arrSize; i++)
            arr[i] = input.nextInt();
        input.close();

        System.out.println(Arrays.toString(findOddOcurring(arr)));
    }
}
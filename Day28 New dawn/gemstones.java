import java.util.*;

public class gemstones{

    static class solution{
        String[] rocks;
        
        solution(String[] rocks){
            this.rocks = rocks;
        }

        public Boolean[] countGemStones(){

            // Keep track of frequency of minerals.
            Integer[] freqMonitor = new Integer[26];
            Arrays.fill(freqMonitor, 0);

            // Keep track of gemstones
            Boolean[] gemStones = new Boolean[26];
            Boolean[] hasAppeared = new Boolean[26];
            Arrays.fill(gemStones, false);
            Arrays.fill(hasAppeared, false);

            for(String rock : this.rocks){ // Traverse through rock collection.
                for(int i=0; i<rock.length(); i++){// Traverse through minerals in rock.
                    if(!hasAppeared[rock.charAt(i)-97])
                        freqMonitor[rock.charAt(i)-97]++;
                    hasAppeared[rock.charAt(i)-97]=true;
                }
                Arrays.fill(hasAppeared, false);
            } 
            
            // Set gemStones to true, if freq=number of rocks.
            for(int i=0; i<26; i++)
                if(freqMonitor[i]==this.rocks.length)
                    gemStones[i]=true;
                
            // Return gemStones data.
            return gemStones;
        }
    }
    public static void main(String[] args){
        
        // Fetch input.
        Scanner read = new Scanner(System.in);
        Integer n = read.nextInt(), i=0;
        String[] rocks = new String[n];
        while(i<n){
            rocks[i++] = read.next();
        }
        read.close();

        // Solve
        solution mySolution = new solution(rocks);
        Boolean[] gemStones = mySolution.countGemStones();

        // Display result.
        Integer gemStonesCount = 0;
        for(Boolean isGemStone : gemStones){
            if(isGemStone)
                gemStonesCount++;
        }
        System.out.println(gemStonesCount);
    }
}
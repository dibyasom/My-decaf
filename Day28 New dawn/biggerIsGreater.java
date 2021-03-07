import java.util.*;

public class biggerIsGreater {

    static class solution{

        private solution(){

        }

        private static String formWord(String word, Integer msc_smolest, Integer insert){

           // Swap msc with msc_smolest
           char[] wordMutable = word.toCharArray();
           Character temp = wordMutable[msc_smolest];
           wordMutable[msc_smolest] = wordMutable[insert];
           wordMutable[insert] =  temp;

           // Sort ind 1->length()-1
           char[] sortMe = new String(wordMutable).substring(insert+1).toCharArray();
           Arrays.sort(sortMe);

           //Return concatenated String.
           return (new String(wordMutable).substring(0,insert+1)+new String(sortMe));
        }

        public static String closesLexioGreaterWord(String word){
            String nextWord = "no answer";

            Character lsc = word.charAt(word.length()-1), msc_smolest_val = 255;
            Integer msc_smolest=256, lsc_closest=-1;

            for(int i=word.length()-2; i>=0; i--){
                Character ch = word.charAt(i);

                if(ch<lsc){ // Simple swap/
                    lsc_closest = i;
                    break;
                } else if (ch>word.charAt(0) && ch<msc_smolest_val){ // Root rearrange
                    msc_smolest_val = ch;
                    msc_smolest = i;
                }
            }

            if(lsc_closest != -1) {
                nextWord = formWord(word, word.length()-1, lsc_closest);
            } else if (msc_smolest != 256) {
                nextWord = formWord(word, msc_smolest, 0);
            }

            return nextWord;
        }
    }

    public static void main(String[] args){
        Scanner read = new Scanner(System.in);
        Integer testCases = read.nextInt();
        while(testCases-->0){
            String word = read.next();
            System.out.println(solution.closesLexioGreaterWord(word));
        }
    }
}

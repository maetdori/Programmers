class Solution {
    boolean solution(String s) {
        boolean answer = true;
        int cntP = 0;
        int cntY = 0;
        
        for(int i=0; i<s.length(); i++) {
            if(s.charAt(i)=='p' || s.charAt(i)=='P')
                cntP++;
            if(s.charAt(i)=='y' || s.charAt(i)=='Y')
                cntY++;
        }
        
        if(cntP!=cntY)
            answer = false;

        return answer;
    }
}
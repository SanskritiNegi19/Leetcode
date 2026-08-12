class Solution {
    public boolean isPalindrome(String s) {
        String original="";
        String check="";

        for(int i=0;i<s.length();i++){
            if(s.charAt(i)>='A' && s.charAt(i)<='Z')
            {
                char c=Character.toLowerCase(s.charAt(i));
                original=original+c;
            }

            else if(s.charAt(i)>='a' && s.charAt(i)<='z'){
                original=original+s.charAt(i);
            }
            else if(s.charAt(i)>='0' && s.charAt(i)<='9'){
                original=original+s.charAt(i);
            }
        }

        for(int i=s.length()-1;i>=0;i--){
            if(s.charAt(i)>='A' && s.charAt(i)<='Z')
            {
                char c=Character.toLowerCase(s.charAt(i));
                check=check+c;
            }

            else if(s.charAt(i)>='a' && s.charAt(i)<='z'){
                check=check+s.charAt(i);
            }
            else if(s.charAt(i)>='0' && s.charAt(i)<='9'){
                check=check+s.charAt(i);
            }
        }

        return original.equals(check);
    }
}
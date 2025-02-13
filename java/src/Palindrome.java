public class Palindrome {
    public static void main(String[] args) {
        String s = "abc";

        System.out.println(isPalindrome(s));

    }

    public static boolean isPalindrome(String input){
        String reversed = new StringBuilder(input).reverse().toString();
        return input.equals(reversed);
    }
}

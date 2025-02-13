public class StringReverseLoop {
    public static void main(String[] args) {
        String s = "abc";

        System.out.println(reverseString(s));

    }

    public static String reverseString(String input){
        StringBuilder reversed = new StringBuilder();

        for(int i=input.length()-1; i>=0; i-- ){
            reversed.append(input.charAt(i));
        }

        return reversed.toString();

    }
}

public class StringReverse {
    public static void main(String[] args) {
        String s = "abc";
        String sRev = new StringBuilder(s).reverse().toString();
        System.out.println(sRev);
    }
}

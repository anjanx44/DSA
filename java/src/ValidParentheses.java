import java.util.Stack;

public class ValidParentheses {
    public static void main(String[] args) {
        String s1 = "()[]{}";
        String s2 = "(]";

        System.out.println(isValid(s1));
        System.out.println(isValid(s2));


    }

    public static boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();

        for(char c : s.toCharArray()) {
            if(c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else {
                if(stack.empty()){
                    return false;
                }
                char top = stack.pop();
                if(!isMatch(top, c)) {
                    return false;
                }
            }
        }
        return stack.isEmpty();
    }

    private static boolean isMatch(char open, char close){
        return (open == '(' && close == ')') ||
                (open == '{' && close == '}') ||
                (open == '[' && close == ']');
    }
}

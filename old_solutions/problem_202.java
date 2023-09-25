/**
 * anwser
 */
public class problem_202 {

    public static void main(String[] args) {
        System.out.println(palindrome(121));
    }

    public static boolean palindrome(int in) {

        int x = in;
        int y = 0;

        while (x > 0) {
            y = (y * 10) + (x % 10);
            x /= 10;
        }
        return (in == y) ? true : false;
    }
}
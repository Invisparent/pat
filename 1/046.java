import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        Scanner ivsScan = new Scanner(System.in);
        BigInteger n = ivsScan.nextBigInteger();
        BigInteger x = new BigInteger("1");

        while (!x.mod(n).equals(new BigInteger("0"))) {
            x = x.multiply(new BigInteger("10"));
            x = x.add(new BigInteger("1"));
        }

        System.out.print(x.divide(n));
        System.out.print(' ');
        System.out.print(x.toString().length());
    }
}

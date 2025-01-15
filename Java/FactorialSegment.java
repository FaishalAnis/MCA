//Write a Java Program to calculate factorial value of a declared variable by creating a separate method for factorial segment.

import java.util.*;

public class FactorialWithMethod {
    public static int calculateFactorial(int num) {
        int factorial = 1;
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        return factorial;
    }

    public static void main(String[] args) {
        int num = 5;
        System.out.println("Factorial: " + calculateFactorial(num));
    }
}

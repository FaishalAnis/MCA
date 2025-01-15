//Write a Java Program to calculate factorial value of a declared variable by creating a separate class and method for factorial segment.

import java.util.*;

class FactorialCalculator {
    public int calculateFactorial(int num) {
        int factorial = 1;
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        return factorial;
    }
}

public class FactorialWithClass {
    public static void main(String[] args) {
        FactorialCalculator calculator = new FactorialCalculator();
        int num = 5;
        System.out.println("Factorial: " + calculator.calculateFactorial(num));
    }
}

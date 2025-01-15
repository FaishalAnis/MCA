//Write a Java Program to check whether a number is divisible by 5 or not.

import java.util.*;

public class DivisibleByFive {
    public static void main(String[] args) {
        int num = 15;
        if (num % 5 == 0) {
            System.out.println("Divisible by 5");
        } else {
            System.out.println("Not Divisible by 5");
        }
    }
}

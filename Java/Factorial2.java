Write a Java Program to calculate factorial value of a variable by taking input from the command line.
Solution:

java
Copy code
import java.util.*;

public class FactorialFromCommandLine {
    public static void main(String[] args) {
        // Check if a command-line argument is provided
        if (args.length == 0) {
            System.out.println("Please provide a number as a command-line argument.");
            return;
        }

        try {
            // Parse the input from the command line
            int num = Integer.parseInt(args[0]);
            
            // Check for negative input
            if (num < 0) {
                System.out.println("Factorial is not defined for negative numbers.");
                return;
            }

            // Calculate factorial
            int factorial = 1;
            for (int i = 1; i <= num; i++) {
                factorial *= i;
            }

            // Display the result
            System.out.println("Factorial of " + num + " is: " + factorial);
        } catch (NumberFormatException e) {
            System.out.println("Invalid input! Please enter a valid integer.");
        }
    }
}

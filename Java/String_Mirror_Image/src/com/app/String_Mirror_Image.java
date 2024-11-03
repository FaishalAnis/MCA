package com.app;

import java.util.Scanner;

public class String_Mirror_Image {
	// Function to calculate the mirror image of a string
    private static String mirrorImage(String input) {

        return (new StringBuffer(input).reverse().toString());
    }
	public static void main(String[] args) {
        // Create a Scanner object to read input
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter a string
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        // Call the mirrorImage function and print the result
        String result = mirrorImage(input);
        System.out.println("Mirror Image: " + result);
        System.out.println(input + " | " + result );

        // Close the Scanner
        scanner.close();
    }

}

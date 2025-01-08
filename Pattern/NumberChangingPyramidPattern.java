/* Number-changing Pyramid Pattern
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 */

import java.util.*;
// Java code for printing pattern
public class Main {
    // Function to demonstrate pattern
    public static void printPattern(int n)
    {
        int i, j;
        int num = 1;
        // outer loop to handle number of rows
        for (i = 1; i <= n; i++) {
            // inner loop to handle number of columns
            for (j = 1; j <= i; j++) {
                // printing value of num in each iteration.
                System.out.print(num + " ");
                // increasing the value of num.
                num++;
            }
            // printing new line for each row
            System.out.println();
        }
    }
    // Driver Function
    public static void main(String args[])
    {
        int n = 6;
        printPattern(n);
    }
}

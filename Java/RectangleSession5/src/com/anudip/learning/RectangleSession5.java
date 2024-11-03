//Assignment-1. 
//
//Write a Java program that uses a method to calculate the area 
//of a rectangle and compare them using Relational Operator .
//Steps: 
//	● Create a class Rectangle. 
//	● The Rectangle class should have two attributes length and 
//	width of type int. 
//	● Create a constructor that accepts length and width as parameters. 
//	● Area should be calculated as length*width. 
//	● Instantiate two Rectangle classes with random values. 
//	● Compare the areas of the two rectangles using the Relational Operator. 
//	● If the first one is bigger than the second one, 
//	print “Rectangle1 > Rectangle2”. 
//	● If the first one is smaller print “Rectangle1 < Rectangle2”. 
//	● Otherwise print “They are equal”. 
package com.anudip.learning;

public class RectangleSession5 {
	int length, width;
	public RectangleSession5(int length, int width) {
		this.length = length;
		this.width = width;
	}
	public static int getArea(RectangleSession5 rec) {
		return rec.length*rec.width;
	}
	public static void main(String[] args) {
		RectangleSession5 rec1 = new RectangleSession5(5, 8);
		RectangleSession5 rec2= new RectangleSession5(5, 4);
		
		int AreaOfRect1 = getArea(rec1);
		int AreaOfRect2 = getArea(rec2);
		if(AreaOfRect1>AreaOfRect2) {
			System.out.println("Rectangle 1 is Bigger than Rectangle 2");
		}
		else if(AreaOfRect2>AreaOfRect1) {
			System.out.println("Rectangle 2 is bigger than Rectangle 1 ");
		}
		else {
			System.out.println("Both the rectangle is equal");
		}
	}
}

//OUTPUT-------
//Rectangle 1 is Bigger than Rectangle 2
package com.app;

import java.util.StringTokenizer;

public class StringManipulation {

	
//	 * The program inputs a line containing state capital pairs
//	 * in this format 'Bihar||Patna-WB||Kolkata-UP||Lucknow'
//	 * and outputs each state capital pair in a new line 


	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String stateCapitals="Bihar||Patna-WB||Kolkata-UP||Lucknow";
		//Separating the state capital pairs
		StringTokenizer stateCapitalPairs=new StringTokenizer(stateCapitals,"-");
		while(stateCapitalPairs.hasMoreTokens())
		{
			String stateCapitalPair=stateCapitalPairs.nextToken();
			StringTokenizer token=new StringTokenizer(stateCapitalPair,"||");
			System.out.println(token.nextToken()+"\t"+token.nextToken());
		}
	}
	
}




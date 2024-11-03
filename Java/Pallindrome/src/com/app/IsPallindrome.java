package com.app;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;


class IsPallindrome {

    @Test
    void testIsPalindrome() {
        assertTrue(isPalindrome("madam"));
        assertTrue(isPalindrome("level"));
        assertTrue(isPalindrome("1221"));
        assertFalse(isPalindrome("hello"));
        assertFalse(isPalindrome("12345"));
    }

    private boolean isPalindrome(String input) {
        String original = input;
        String reverse = "";
        int length = original.length();

        for (int i = length - 1; i >= 0; i--) {
            reverse = reverse + original.charAt(i);
        }

        return original.equals(reverse);
    }
}
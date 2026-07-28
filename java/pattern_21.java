/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author arunava
 */

// Given an integer n. You need to recreate the pattern given below for any
// value of N. Let's say for N = 5, the pattern should look like as below:

// *****
// *   *
// *   *
// *   *
// *****

public class pattern_21 {
    public static void main(String[] args) {
        int n = 2;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i >= 2 && i <= n - 1) {
                    if (j >= 2 && j <= n - 1) {
                        System.out.print(" ");
                    } else {
                        System.out.print("*");
                    }
                } else {

                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }
}

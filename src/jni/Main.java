package jni;

public class Main {
    public static void main(String[] args) {
        long start = System.currentTimeMillis();
        MatrixMultiplicationJNI.computeBenchmark();
        long end = System.currentTimeMillis();

        System.out.println("PROGRAM EXECUTION:: " + (end - start) + "ms");
    }
}

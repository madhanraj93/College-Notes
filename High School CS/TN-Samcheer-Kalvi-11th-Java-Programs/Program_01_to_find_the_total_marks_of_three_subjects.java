import java.util.Scanner;

public class Program_01_to_find_the_total_marks_of_three_subjects {
    public static void main(String[] agrs) {
        int m1, m2, m3, sum;
        Scanner in = new Scanner(System.in);
        
        System.out.println("Enter Mark 1: ");
        m1 = in.nextInt();

        System.out.println("Enter Mark 2: ");
        m2 = in.nextInt();

        System.out.println("Enter Mark 3: ");
        m3 = in.nextInt();
        in.close();

        sum = m1 + m2 + m3;
        System.out.println("\nThe Sum: " + sum);

    }
}

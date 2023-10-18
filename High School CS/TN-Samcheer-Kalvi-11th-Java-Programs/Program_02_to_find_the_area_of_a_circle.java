import java.util.Scanner;

public class Program_02_to_find_the_area_of_a_circle {
    public static void main(String[] args) {
        int radius;
        double area;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter The Radius : ");
        radius = in.nextInt();
        area = 3.14 * radius * radius;
        System.out.println("The area of circle : " + area);
        in.close();
    }
}

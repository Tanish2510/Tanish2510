 import java.util.Scanner;
 
 class prince 
 {

    public static int findPersonWithPillow(int n, int time) 
    {
        int position = 1; 
        int direction = 1; 

        for (int second = 1; second <= time; second++) 
        {
            if (position == n) 
            {
                direction = -1; 
            } 
            else if (position == 1) 
            {
                direction = 1; 
            }

            position += direction; 
        }

        return position;
    }

    public static void main(String[] args) 
    {
        
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of people (n): ");
        int n = scanner.nextInt();

        System.out.print("Enter the time in seconds: ");
        int time = scanner.nextInt();

        int result = findPersonWithPillow(n, time);
        System.out.println("After " + time + " seconds, the person holding the pillow is at position " + result + ".");

        scanner.close();
    }
}
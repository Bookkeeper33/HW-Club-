import java.util.ArrayList;

public class List {
    public static void main(String[] agrs) {
        ArrayList<Integer> array = new ArrayList<Integer>();

        array.add(5);
        array.add(1);
        array.add(10);
        array.add(15);

        System.out.println(array);

        System.out.println(array.indexOf(10));
        System.out.println(array.get(0));

        array.add(2, 1488);
        array.remove(1);
        System.out.println(array);
    }
}
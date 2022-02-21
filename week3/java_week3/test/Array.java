public class Array {
    public static void main(String[] args) {
        int[] array = new int[] { 10, 125, 120, 59, 10, 10, 10, 1, 50, 25, 11, 2, 5, 3, 4, 0};
        int[] arr = new int[] { 1, 5, 0, 55, 14, 88, 55, 20, 25, 13, 10, 9, 8, 5, 7, 1488 };
        int last = array.length - 1;
        int last2 = arr.length - 1;
        MergeSort sorted2 = new MergeSort();
        QuickSort sorted = new QuickSort();

        sorted2.mergeSort(array, 0, array.length);
        sorted.quickSort(arr, 0, arr.length-1);

        for ( int i = 0; i < last; i++ ) {
            System.out.print(array[i] + " ");
        }
        System.out.println(array[last]);


        for ( int i = 0; i < last2; i++ ) {
            System.out.print(arr[i] + " ");
        }
        System.out.println(arr[last2]);
    }
}
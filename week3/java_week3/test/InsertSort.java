public class InsertSort {
    public void insertSort(int[] array) {
        for ( int i = 1; i < array.length; i++ ) {
            int j = i;
            int tmp = array[i];

            for ( int prev = j - 1; j > 0 && tmp < array[prev]; j--, prev-- ) {
                array[j] = array[prev];
            }

            array[j] = tmp;
        }
    }
}
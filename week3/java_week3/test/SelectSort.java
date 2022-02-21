public class SelectSort {
    public void selectSort(int[] array) {
        for ( int i = 0; i < array.length; i++ ) {
            int min = i;

            for ( int j = i + 1; j < array.length; j++ ) {
                if ( array[j] < array[min] ) {
                    min = j;
                }
            }

            if ( min != i ) {
                int buffer = array[i];

                array[i] = array[min];
                array[min] = buffer;
            }
        }
    }
}
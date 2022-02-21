public class BubbleSort {
    public void bubbleSort(int[] array) {
        int last = array.length - 1;
        boolean checked = false;

        for ( int i = 0; i < last && !checked; i++ ) {
            int limit = last - i;

            checked = true;

            for ( int j = 0; j < limit; j++ ) {
                int next = j + 1;

                if ( array[next] < array[j] ) {
                    int buffer = array[j];

                    array[j] = array[next];
                    array[next] = buffer;
                    checked = false;
                }
            }
        }
    }
}
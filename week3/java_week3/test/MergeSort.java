public class MergeSort {
    private void merge(int[] array, int lo, int mid, int hi) {
        int len = hi - lo;
        int[] buffer = new int[len];
        int i = lo;
        int j = mid;
        int index = 0;

        for ( ; i < mid && j < hi; index++ ) {
            if ( array[i] < array[j] ) {
                buffer[index] = array[i];
                i += 1;
            } else {
                buffer[index] = array[j];
                j += 1;
            }
        }

        for ( ; i < mid; i++, index++ ) {
            buffer[index] = array[i];
        }

        for ( ; j < hi; j++, index++ ) {
            buffer[index] = array[j];
        }

        for ( index = 0; index < len; index++, lo++ ) {
            array[lo] = buffer[index];
        }
    }

    public void mergeSort(int[] array, int lo, int hi) {
        int mid = lo + (hi - lo) / 2;

        if ( mid <= lo ) {
            return;
        }
        mergeSort(array, lo, mid);
        mergeSort(array, mid, hi);
        merge(array, lo, mid, hi);
    }
}
public class QuickSort {
    private int partition(int[] array, int start, int end) {
        int mid = start + (end - start) / 2;
        int pivot = array[mid];
        int pivotIndex = start;

        array[mid] = array[end];
        array[end] = pivot;

        for ( ; array[pivotIndex] < array[end]; pivotIndex++ );

        for ( int index = pivotIndex + 1; index < end; index++ ) {
            if ( array[index] < array[end] ) {
                pivot = array[index];

                array[index] = array[pivotIndex];
                array[pivotIndex] = pivot;
                pivotIndex += 1;
            }
        }

        pivot = array[end];
        array[end] = array[pivotIndex];
        array[pivotIndex] = pivot;

        return pivotIndex;
    }

    public void quickSort(int array[], int start, int end) {
        int index;

        if ( start >= end ) {
            return;
        }
        index = partition(array, start, end);
        quickSort(array, start, index-1);
        quickSort(array, index+1, end);        
    }
}
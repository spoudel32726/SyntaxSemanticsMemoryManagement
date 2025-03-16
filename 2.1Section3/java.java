public class MemoryDemo {
    public static int[] createAndUseArray(int size) {
        int[] arr = new int[size];  // Dynamic allocation on heap
        for (int i = 0; i < size; i++) {
            arr[i] = i;  // Direct access, no ownership concept
        }
        return arr;  // Reference returned
    }

    public static void main(String[] args) {
        int[] array = createAndUseArray(5);
        System.out.println("Array: " + java.util.Arrays.toString(array));
        // No explicit deallocation; garbage collector handles it
    }
}
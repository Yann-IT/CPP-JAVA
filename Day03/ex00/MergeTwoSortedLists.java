import java.util.Arrays;


public class MergeTwoSortedLists {

    public static int[] merge(int[] array1, int[] array2){
        int[] list = new int[array1.length+array2.length];
        int j = 0, k = 0;
        for (int i = 0; i < array1.length+array2.length; i++){
            if((j<array1.length || k>= array2.length) && array1[j] < array2[k]){
                list[i]= array1[j];
                j++;
            }else{
                list[i]= array2[k];
                k++;
            }
        };
        return list;
    }
    public static void main(String[] args) {
        int[] a = {1,2,3};
        int[] b = {1,3,4};
        int[] result = merge(a,b);

        for (int i = 0; i < result.length; i++) {
            System.out.println(result[i]);
        }
        
    }
}

/*
exercise 1-1
 */

public class Solution {
    public static void main(String[] args) {
        int[] array1 = {1,2,3,4,4};
        int[] array2 = {3,1,4,1,5,9,2,6,5,3,5,8,9,3,9};
        int[] array3 = {1,1,1,1};
        showNonDuplicateArray(array1);
        System.out.println();
        showNonDuplicateArray(array2);
        System.out.println();
        showNonDuplicateArray(array3);
    }
    //相同的数据只输出一次

    /*
     * Remove duplicate elements in an array
     * and print it in the standard output
     * @param a the input array
     */
    public static void showNonDuplicateArray(int[] a) {
        int [] b = new int[a.length];
        for(int i = 0;i < a.length;i ++){
            for(int j = 0;j<i;j++){
                if(a[j] == a[i]){
                    b[i] = 1;
                    break;

                }
            }
        }
        for(int i =0;i < a.length;i ++)
        {
            if(b[i]== 0)
            {
                System.out.print(a[i] + " ");
            }
        }
    }
//一定要记住这种方法


  /*  public static void main(String[] args) {
        int[] array1 = {1, 2, 3, 4, 5};
        int[] array2 = {3, 1, 4, 1, 5, 9, 2, 6};

        showReversedArray(array1);
        showReversedArray(array2);
    }

    public static void showReversedArray(int[] a) {
        int Length = a.length;
        int temp;
        int i;
        for (i = 0; i < Length / 2; i++) {
            temp = a[i];
            a[i] = a[Length -1-i];    //记得倒序时下标为a.length-1-i
            a[Length - 1-i] = temp;
        }
        for (i = 0; i < Length; i++) {
            System.out.print(a[i] + " ");
        }
    }*/
}






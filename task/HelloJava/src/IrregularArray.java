public class IrregularArray {
    public static void main(String[] args){
        int a[][] = new int[3][];  //创建二维数组指定行数不指定列数
        a[0] = new int[] {78,89,63,28,67};   //给第一行分配元素
        a[1] = new int[] {56,38,98};
        a[2] = new int[] {67,35};
        for(int i = 0;i < a.length;i ++) {
            System.out.print("a[" + i + "]中有" + a[i].length + "个元素，分别是：");
            for (int tmp : a[i]) {     //foreach循环输出数字中的元素

                System.out.print(tmp + " ");

            }
            System.out.println();
        }



    }
}

public class Trap {
    public static void main(String[] args){
        int a [][] = new int[][]{{1},{2,4},{7,8,9}};
        for(int k = 0; k < a.length;k++){
            for(int c = 0; c < a[k].length; c++){
                System.out.print(a[k][c]);
            }
            System.out.println();
        }
    }
}

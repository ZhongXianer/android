import java.util.Arrays;
public class Swap {
    public static void main(String[] args){   //每次都会打错main
        int arr[] = new int[5];   //创建Int型数组
        Arrays.fill(arr,8);
        for(int i = 0;i < arr.length; i ++){
            System.out.println("第" + i +"个元素的值为" + arr[i]);
        }

    }
}

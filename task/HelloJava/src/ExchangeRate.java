public class ExchangeRate {                      //创建汇率类
    public static void main(String[] args) {
        ExchangeRate Rate = new ExchangeRate();   //创建RefTest对象
        double denomination[] = {1, 10, 100};  //定义一维数组，用来存储纸币面额（实参）
        System.out.print("美元：");
        for (int i = 0; i < denomination.length; i++) {      //使用for循环遍历数组
            System.out.print(denomination[i] + "美元\t");
        }
        Rate.change(denomination);   //调用方法改变数组中元素的值
        //输出与三种面值的美元等值的人民币
        System.out.print("\n人民币：");
        for (int j = 0; j < denomination.length; j++) {
            System.out.print(denomination[j] + "元\t");
        }

    }

    //定义一个方法，方法的参数为一维数组（形参）  这也属于汇率类
    public void change(double[] i) {
        for (int j = 0; j < i.length; j++) {
            i[j] = i[j] * 6.903;
        }
    }
}

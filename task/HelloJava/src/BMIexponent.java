import java.util.Scanner;
public class BMIexponent {
    public static void main(String[] args){
            Scanner sc = new Scanner(System.in);
            System.out.print("请输入身高：");
            double height = sc.nextDouble();   //记得这里后面要加括号
            System.out.print("请输入体重：");
            int weight = sc.nextInt();
            double exponent = weight / (height * height);
            System.out.println("您的BMI值为：" + exponent);
            System.out.print("您的体重属于：");
            if (exponent < 18.5){
                System.out.println("体重过轻");
            }
            if (exponent >= 18.5 && exponent < 24.9){
                System.out.println("体重正常");
            }
            if (exponent >= 24.9 && exponent < 29.9){
                System.out.println("体重过重");
            }

            if (exponent >= 29.9){
                System.out.println("肥胖");
            }
            sc.close();
    }
}

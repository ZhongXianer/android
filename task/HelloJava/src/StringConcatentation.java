public class StringConcatentation {
    public static void main(String[] args){
        String a = "我叫李狗蛋";
        String b = "今年十九岁";
        String c = a + "，" + b;
        String d = "我来做个自我介绍：";
        d += c;
        System.out.println("a =" + a);
        System.out.println("b =" + b);
        System.out.println("c =" + c);
        System.out.println("d =" + d);

    }
}

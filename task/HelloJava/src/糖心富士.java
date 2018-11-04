public class 糖心富士 {
    public String toString(){
        return "红色的苹果被称为" +getClass().getName()+"，每500克4.98元，买了2500克"
            +getClass().getName()+"，须支付多少元";
    }
    public static void main(String[] args){
        System.out.println(new 糖心富士());
    }
}

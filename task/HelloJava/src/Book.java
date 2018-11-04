public class Book {
    /*书架上有30本书，箱子里有40本书，把书架上的书全部放在箱子里后，
    使用带参函数的成员方法计算箱子里书的总数
     */
    public static void main(String[] args){
        Book book = new Book();   //创建书类对象
        int shelf = 30;
        int box = 40;
        System.out.println("书架上的书放到箱子里后箱子里的书的总数是"
        + book.add(shelf,box) +"分别是：\n架子上有" + shelf +"本，盒子里有"
        +box + "本");
    }
    public int add(int shelf, int box){
        box = shelf + box;
        return box;
    }
}

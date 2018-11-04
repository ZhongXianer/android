public class BorrowABook {      //创建借书类
    public BorrowABook(){         //无参构造方法
    }
    public void borrow(String name){   //参数为书名的借书方法
        System.out.println("请前往借阅处借阅" + name);     //输出借出的书名
    }
    public static void main(String[] args){
        BorrowABook book = new BorrowABook();    //创建借书类对象
        book.borrow("《追风筝的人》");    //调用借书方法，并将“《战争与和平》”赋给参数name
    }
}

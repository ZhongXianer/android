public class EggCake {     //创建EggCake类
    int eggCount;    //鸡蛋灌饼里的鸡蛋个数（属性）
        //有参数的构造方法，参数是给饼加蛋的个数
        public EggCake(int eggCount){  //参数为鸡蛋灌饼里的蛋的个数的构造方法
            this.eggCount = eggCount;    //将参数eggCount 的值赋给属性eggCount
            System.out.println("这个鸡蛋灌饼里有"+ eggCount +"个蛋");
             }
             //无参数构造方法，默认给饼加一个蛋
        public EggCake(){     //默认构造方法
            //调用参数为鸡蛋灌饼里蛋的个数的构造方法，并设置鸡蛋灌饼里蛋的个数为1
            this(1);
         }
        public static void main(String[] args){
            EggCake cake1 = new EggCake();   //创建无参的鸡蛋灌饼对象
            EggCake cake2 = new EggCake(5);  //创建鸡蛋灌饼对象，且鸡蛋灌饼里有五个蛋
        }

}

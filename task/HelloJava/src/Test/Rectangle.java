package Test;

public class Rectangle extends Shape{
    public int width;
    public int height;

    public Rectangle(int w, int h) {
        this.width = w;
        this.height = h;
    }


    public double getArea() {
        // TODO
        double area;
        area = width * height;
        return area; // to be replaced
    }

}


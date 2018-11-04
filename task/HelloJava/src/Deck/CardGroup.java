package Deck;

public class CardGroup{
    public Card c1;
    public Card c2;
    public Card c3;

    public CardGroup(Card c1, Card c2, Card c3) {
        this.c1 = c1;
        this.c2 = c2;
        this.c3 = c3;

    }

    /*
     * Return the number of cards with the same number
     */
    public int numOfSameNumber() {
        int num =0;
        if(c1.number ==c2.number && c2.number == c3.number)
            num = 3;
        else if((c1.number ==c2.number && c2.number != c3.number)||
                (c1.number ==c3.number && c3.number != c2.number)||
                (c2.number ==c3.number && c3.number != c1.number))
          num =2;
        else num=1;
        return num; // to be replaced
    }

    /*
     * Return the sum of all 3 numbers.
     */
    public int sumOfNumbers() {
        int sum = 0;
        sum = c1.number + c2.number + c3.number;
        return sum; // to be replaced
    }
}

public class Paper {
    private int maxSymbols;
    private int symbols;
    private StringBuilder content;

    public Paper(int maxSymbols) {
        this.maxSymbols = maxSymbols;
        this.symbols = 0;
        this.content = new StringBuilder();
    }

    public Paper() {
        this(4096);
    }

    public int getMaxSymbols() {
        return maxSymbols;
    }

    public int getSymbols() {
        return symbols;
    }

    public void addContent(String message) throws OutOfSpaceException {
        int symbolsLeft;

        if ( maxSymbols < 0 ) {
            System.out.println("Wrong max symbol param.");
            return;
        } 

        if ( symbols == maxSymbols ) {
            throw new OutOfSpaceException();
        }

        symbolsLeft = maxSymbols - symbols;

        if ( message.length() > symbolsLeft ) {
            content.append(message.substring(0, symbolsLeft));
            symbols = maxSymbols;
            
            return;
        }

        content.append(message);
        symbols += message.length();
    }

    public void show() {
        if ( symbols == 0 ) {
            System.out.println("Paper is empty.");
            return;
        }

        System.out.println(content);
    }
}
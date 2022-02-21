enum Months{
    JAN(1), FEB(2), MAR(3), 
    APR(4), MAY(5), JUN(6), 
    JUL(7), AUG(8), SEP(9), 
    OCT(10), NOV(11), DEC(12);

    private int month;

    Months(int month) {
        this.month = month;
    }

    public int getValue() {
        return this.month;
    }
}

public class Date {
    private int day;
    private int month;
    private int year;
    public String text;
    
    private void validate(int day, int month, int year) throws InvalidDateException {
        boolean leap;

        if ( year <= 0 ) {
            throw new InvalidDateException("Invalid year.");
        }

        leap = ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

        if ( month < Months.JAN.getValue() || month > Months.DEC.getValue() ) {
            throw new InvalidDateException("Invalid month.");
        }
        
        if ( month == Months.APR.getValue() || month == Months.JUN.getValue() || month == Months.SEP.getValue() || month == Months.NOV.getValue() ) {
            if ( day < 1 || day > 30 ) {
                throw new InvalidDateException("Invalid day of month.");
            }
        } else if ( month == Months.FEB.getValue() && leap ) {
            if ( day < 1 || day > 29 ) {
                throw new InvalidDateException("Invalid day in Feb (leap year).");
            }
        } else if ( month == Months.FEB.getValue() && !leap ) {
            if ( day < 1 || day > 28 ) {
                throw new InvalidDateException("Invalid day of month.");
            }
        } else {
            if ( day < 1 || day > 31 ) {
                throw new InvalidDateException("Invalid day of month.");
            }
        }
    }

    public Date(int day, int month, int year) throws InvalidDateException {
        this.day = day;
        this.month = month;
        this.year = year;
        this.validate(day, month, year);
    }

    public Date() throws InvalidDateException {
        this(1, 1, 1970);
    }

    public int getDay() {
        return this.day;
    }

    public int getMonth() {
        return this.month;
    }

    public int getYear() {
        return this.year;
    }

    public String getDate() {
        StringBuilder date = new StringBuilder();

        if ( this.day < 10 ) {
            date.append('0').append(this.day).append('-');
        } else {
            date.append(this.day).append('-');
        }

        if ( this.month < 10 ) {
            date.append('0').append(this.month).append('-');
        } else {
            date.append(this.month).append('-');
        }

        date.append(this.year);

        return date.toString();
    }
}

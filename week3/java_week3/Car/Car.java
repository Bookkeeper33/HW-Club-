public class Car {
    private double fuelAmount;
    private double fuelCapacity;
    private double fuelConsumption;
    private Point location;
    private String model;

    public Car(double capacity, double consumption, Point location, String model) {
        this.fuelAmount = 0;
        this.fuelCapacity = capacity;
        this.fuelConsumption = consumption;
        this.location = location;
        this.model = model;
    }

    public Car() {
        this(60, 0.6, new Point(0,0), "Mercedes");
    }

    public double getFuelAmount() {
        return this.fuelAmount;
    }

    public double getFuelCapacity() {
        return this.fuelCapacity;
    }

    public double getFuelConsumption() {
        return this.fuelConsumption;
    }

    public Point getLocation() {
        return this.location;
    }

    public String getModel() {
        return this.model;
    }

    public void drive(Point destination) throws OutOfFuelException {
        double neededFuel;

        if ( this.fuelConsumption <= 0 ) {
            System.out.println("Incorrect fuel consumption data.");
            return;
        }

        neededFuel = this.location.distance(destination) * this.fuelConsumption;
        if ( this.fuelAmount <= 0 ) {
            throw new OutOfFuelException();
        }

        if ( this.fuelAmount < neededFuel ) {
            throw new OutOfFuelException();
        }

        this.fuelAmount -= neededFuel;
        this.location = destination;
    }

    public void drive(double x, double y) throws OutOfFuelException {
        this.drive(new Point(x, y));
    }

    public void refill(double fuel) throws ToMuchFuelException {
        double newFuelAmount;

        if ( fuel <= 0 ) {
            System.out.println("Incorrect fuel refill data.");
            return;
        }
        
        newFuelAmount = this.fuelAmount + fuel;

        if ( fuel > this.fuelCapacity || newFuelAmount > this.fuelCapacity ) {
            throw new ToMuchFuelException();
        }

        this.fuelAmount = newFuelAmount;
    }

    public void showInfo() {
        System.out.println("Car info\n" 
                        + "===========\n"
                        + "Model           : " + this.getModel() + "\n"
                        + "Capacity        : " + this.getFuelCapacity() + "\n"
                        + "Consumption     : " + this.getFuelConsumption() + "\n"
                        + "Fuel amount     : " + this.getFuelAmount() + "\n"
                        + "Current location: " + this.getLocation());
    }
}

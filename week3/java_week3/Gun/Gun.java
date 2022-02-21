public class Gun {
    private int amount;
    private int capacity;
    private boolean isReady;
    private String model;
    private int totalShots;

    public Gun(String model, int capacity) {
        this.amount = 0;
        this.capacity = capacity;
        this.isReady = false;
        this.model = model;
        this.totalShots = 0;
    }

    public Gun() {
        this("Beretta", 8);
    }

    public int getAmount() {
        return this.amount;
    }

    public int getCapacity() {
        return this.capacity;
    }

    public boolean ready() {
        return this.isReady;
    }

    public String getModel() {
        return this.model;
    }

    public int getTotalShots() {
        return this.totalShots;
    }

    public void prepare() {
        this.isReady = !this.isReady;
    }

    public void reload() {
        if ( this.capacity < 0 ) {
            return;
        }
        
        this.amount = this.capacity;
    }

    public void shoot() throws OutOfRoundsException, NotReadyException {
        if ( !this.ready() ) {
            throw new NotReadyException();
        }

        if ( this.amount == 0 ) {
            throw new OutOfRoundsException();
        }

        System.out.println("BANG!");
        this.totalShots += 1;
        this.amount -= 1;
    }

    public void showGunInfo() {
        System.out.println("Gun mode           : " + this.getModel() + "\n"
                         + "Clip capacity      : " + this.getCapacity() + "\n"
                         + "Bullets in the clip: " + this.getAmount() + "\n"
                         + "Ready to fire      : " + this.ready() + "\n"
                         + "Shots fired        : " + this.getTotalShots());
    }
}

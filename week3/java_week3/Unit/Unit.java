public class Unit {
    private int damage;
    private int hitPoints;
    private int hitPointsLimit;
    private String name;

    private void ensureIsAlive() throws UnitIsDeadException {
        if ( this.hitPoints == 0 ) {
            throw new UnitIsDeadException();
        }
    }

    public Unit(String name, int health, int damage) throws UnitIsDeadException {
        if ( health < 0 ) {
            health = 0;
        }

        if ( damage <= 0 ) {
            damage = 1;
        }

        this.name = name;
        this.hitPoints = health;
        this.hitPointsLimit = health;
        this.damage = damage;
        this.ensureIsAlive();
    }

    public int getDamage() {
        return damage;
    }

    public int getHitPoints() {
        return hitPoints;
    }

    public int getHitPointsLimit() {
        return hitPointsLimit;
    }

    public String getName() {
        return name;
    }

    void addHitPoints(int health) throws UnitIsDeadException {
        int newHitPoints;

        this.ensureIsAlive();

        newHitPoints = this.hitPoints + health;
        if ( newHitPoints < this.hitPoints ) {
            System.out.println("Invalid healing params.");
            return;
        } else if ( newHitPoints > this.hitPointsLimit ) {
           this. hitPoints = hitPointsLimit;
        } else {
            this.hitPoints = newHitPoints;
        }
    }

    public void takeDamage(int damage) throws UnitIsDeadException {
        int damagedHp;

        this.ensureIsAlive();

        damagedHp = this.hitPoints - damage;
        if ( damagedHp <= 0 ) {
            this.hitPoints = 0;
            return;
        }

        this.hitPoints = damagedHp;
    }

    public void attack(Unit enemy) throws UnitIsDeadException {
        this.ensureIsAlive();
        enemy.takeDamage(damage);
        enemy.counterAttack(this);
    }

    public void counterAttack(Unit enemy) throws UnitIsDeadException {
        this.ensureIsAlive();
        enemy.takeDamage(this.damage / 2);
    }

    public void getUnitInfo() {
        System.out.println("________Stats________" + "\n" + this.getName() + "\n"
                         + "Damage              : " + this.getDamage() + "\n"
                         + "Current health      : " + this.getHitPoints() + "\n"
                         + "Max amount of health: " + this.getHitPointsLimit());
    }
}

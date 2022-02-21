public class UnitMain {
    public static void main(String[] args) {
        try {
            Unit vampire = new Unit("Vampire", 1, 0);
            Unit knight = new Unit("Knight", 100, 20);

            vampire.getUnitInfo();
            knight.getUnitInfo();

            vampire.attack(knight);
            vampire.addHitPoints(100);
            knight.attack(vampire);
            System.out.println("Knight current health: " + knight.getHitPoints());
            

            System.out.println("=================================");
            System.out.println("Vampire current health: " + vampire.getHitPoints());
            System.out.println("Knight current health: " + knight.getHitPoints());

            knight.attack(vampire);
            vampire.attack(knight);

            System.out.println("=================================");
            System.out.println("Vampire current health: " + vampire.getHitPoints());
            System.out.println("Knight current health: " + knight.getHitPoints());

            
            System.out.println("=================================");
            knight.addHitPoints(10);
            vampire.addHitPoints(100);
            System.out.println("Vampire current health: " + vampire.getHitPoints());
            System.out.println("Knight current health: " + knight.getHitPoints());

            
            System.out.println("=================================");
            knight.attack(vampire);
            System.out.println("Vampire current health: " + vampire.getHitPoints());
            vampire.attack(knight);
            System.out.println("Knight current health: " + knight.getHitPoints());

            

        } catch (UnitIsDeadException e) {
            System.out.println("Unit is dead.");
        }
    }
}

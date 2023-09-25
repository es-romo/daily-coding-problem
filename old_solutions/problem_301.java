public class problem_301 {
    
    static Integer[] hashTable = new Integer[5];

    public static void main(String[] args) {
        int[] addValues = {0,5,2,14};
        int[] checkValues = {0,1,13,4};
        
        for (int value : addValues) 
            add(value);
        for (int value : checkValues){
            if (check(value))
                System.out.println(value + " is in the set");
            else
                System.out.println(value + " is not the set");
        }
    }
    
    public static void add(int value) {
        int index = value % hashTable.length;
        hashTable[index] = value;
    }

    public static boolean check(int value) {
        int index = value % hashTable.length;
        return hashTable[index] != null ? true : false ;
    }
}
package College.DSA;

class Set{
    int[] set;
    Set(int[] arr){
        this.set = arr;
    }
    boolean Contains(int ele){
        for (int i : set) {
            if(i==ele){
                return true;
            }
        }
        return false;
    }
}

public class A2_Set{
    public static void main(String[] args) {
        int[] a = {23,45,6,7};
        Set s = new Set(a);
        System.out.println(s.Contains(23));
    }
}
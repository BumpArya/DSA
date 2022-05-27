package College.DSA;

// Shell Sort

public class A9_ShellSort {

    static int[] swap(int[] arr,int i,int j){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        return arr;
    }
    
    static int[] shellSort(int[] arr){
        for(int gap=arr.length/2; gap>0; gap/=2){
            for(int j=gap;j<arr.length;j++){
                for(int i=j-gap;i>=0;i-=gap){
                    if(arr[j]>arr[i]){
                        break;
                    }else{
                        swap(arr, i, j);
                    }
                }
            }
        }
        return arr;
    } 

    public static void main(String[] args) {
        int[] arr = {10,9,8,7,6,5,4,3,2,1};
        shellSort(arr);
        for (int i : shellSort(arr)) {
            System.out.println(i);
        }  
    }
}

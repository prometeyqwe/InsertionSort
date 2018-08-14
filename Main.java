import java.util.Random;

public class Main {
    public static void main(String[] args){
        int [] arr= new int[100];
        Random random = new Random();
        for(int i=0; i < arr.length; i++){
            arr[i] = random.nextInt(100);
        }
        for(int i=0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }

        insertionSort(arr);
        System.out.println();
        System.out.println();
        System.out.println();


        for(int i=0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }

    }
    static void insertionSort(int[] arr){
        int temp,j;
        for(int i = 1; i < arr.length; i++){
            temp = arr[i];
            j=i;
            while(j>0 && arr[j-1]>=temp){
                arr[j] = arr[j-1];
                j--;
            }
            arr[j] = temp;
        }
    }
}


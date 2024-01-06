class Mergesort{
    void merge(int[] arr,int left,int mid,int right){
        int left_len=mid-left+1;
        int right_len=right-mid;
        int L[]=new int[left_len];
        int R[]=new int[right_len];
        int i;
        int j;
        int k;

        for( i=0;i<left_len;i++){
            L[i]=arr[i+left];

        }

        for(j=0;j<right_len;j++){
            R[j]=arr[mid+1+j];
        }
        i=0;
        j=0;
        k=left;
        while(i<left_len && j<right_len){
            if(L[i]<R[j]){
                arr[k]=L[i];
                i++;
            }
            else{
                arr[k]=R[j];
                j++;
            }
            k++;
            }

        
        while(i<left_len){
            arr[k]=L[i];
            i++;
            k++;
        }
        while(j<right_len){
            arr[k]=R[j];
            j++;
            k++;
        }

    }
    void mergesort(int[] arr,int left,int right){
        Mergesort o1=new Mergesort();
        Mergesort o2=new Mergesort();
        if(left<right){
            int mid=left+(right-left)/2;
            o1.mergesort(arr,left,mid);
            o1.mergesort(arr,mid+1,right);
            o2.merge(arr,left,mid,right);
        }
    }
    static void printarray(int[] arr){
        int n=arr.length;
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String args[]){
        int[] arr={9,8,7,6,5,4,3,2,1};
        System.out.println("unsorted array\n");
        Mergesort object=new Mergesort();
        Mergesort.printarray(arr);
        object.mergesort(arr,0,arr.length-1);
        System.out.println("sorted array\n");
        Mergesort.printarray(arr);
        
        


    }
}
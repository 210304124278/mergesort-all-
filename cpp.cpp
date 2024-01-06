#include<iostream>
using namespace std;
void merge(int arr[],int left,int mid,int right){
    int left_len=mid+1;
    int right_len=right-mid;
   int L[left_len];
   int R[right_len];
  
   for(int i=0;i<left_len;i++)
    {L[i]=arr[left+i];}
     for(int j=0;j<right_len;j++)
    {R[j]=arr[mid+1+j];}
    int i=0;
    int j=0;
    int k=left;
    while(i<left_len && j<right_len){
        if(L[i]<R[j]){
            arr[k]=L[i];
            i++;
            k++;
        }
         else{
            arr[k]=R[j];
            
            j++;
            k++;
        }
    
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
    
void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid=(right+left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
void printarray(int arr[],int n){
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";

}
int main(){
    int arr[]={9,8,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"unsorted array\n";
    printarray(arr,n);
    mergesort(arr,0,n-1);
    cout<<"sorted array\n";
    printarray(arr,n);
    return 0;

}
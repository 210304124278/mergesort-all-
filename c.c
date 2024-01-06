#include<stdio.h>
void merge(int arr[],int left,int mid,int right){
    int i,j,k;
    int left_len=mid-left+1;
    int right_len=right-mid;
    int L[left_len],R[right_len];
    for(i=0;i<left_len;i++)
        L[i]=arr[i+left];
    for(j=0;j<right_len;j++)
    R[j]=arr[mid+1+j];
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
void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;
        mergesort( arr,left, mid);
        mergesort( arr, mid+1,right);
        merge(arr,left,mid,right);
    }
}
void printarray(int arr[],int size){
    int i;
  for(i=0;i<size;i++)
  printf("%d ",arr[i]);
}
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("unsorted array:\n");
    printarray(arr,n);
    mergesort(arr,0,n-1);
    printf("\nsorted array:\n");
    printarray(arr,n);
    printf("\n kusum 210304124278");
    return 0;
}
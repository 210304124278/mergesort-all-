def mergesort(arr):
    if len(arr)>1:
        mid=len(arr)//2
        L=arr[:mid]
        R=arr[mid:]
        mergesort(L)
        mergesort(R)
        i=j=k=0
        while i<len(L) and j<len(R):
            if L[i]<R[j]:
                arr[k]=L[i]
                i+=1
            else:
                arr[k]=R[j]
                j+=1
            k+=1
        while i<len(L):
            arr[k]=L[i]
            i+=1
            k+=1
        while j<len(R):
            arr[k]=R[j]
            j+=1
            k+=1
def printarray(arr):
    for i in range(len(arr)):
        print(arr[i]," ")
arr=[9,8,7,6,5,4,3,2,1]
print("unsorted array: ",end="\n")
printarray(arr)
mergesort(arr)
print("sorted array: ",end="\n")
printarray(arr)


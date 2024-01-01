n,m,k=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
final_array=arr1+arr2
final_array.sort()
print(final_array[k-1])
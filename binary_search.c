    #include<stdio.h>
    int binary_search(int a[],int n,int element){
    int l=0,h=n-1;
    
    while(l<=h)
    {int mid=l+h/2;
        if(a[mid]==element)
        return mid;

        else if(a[mid]<element)
        l=mid+1;

        else
        h=mid-1;
    
        
    }
    return -1;

}

int main(){
    int a[]={11,22,33,44,55,66,77,88,99};
    int n=9;
    int element=22;
    
    int index = binary_search(a,n,element);
    if(index==-1)
    {
        printf("element is not found");
    }
    else
    {
        printf("element is found at %d",index);
    }   
    
    return 0;
    

}
#include <iostream>
using namespace std;
int main() {
    int a[]={23,78,45,8,32,56};
    for(int i=0;i<6;i++){
        int min=i;
        for(int j=i+1;j<6;j++){
            if(a[j]<a[min]){
                min=j;
            }
            
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    for(int i=0;i<6;i++){                         
        cout<<a[i]<<" ";
    }

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[]={1,2,3,4,5,6};

    for(int i=0;i<6;i++){
        sum+=arr[i];
    }
    cout<<sum;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;


void miniMaxSum(vector<int> arr) {
    long long large=LLONG_MIN;
    long long  small=LLONG_MAX;
    for(int i=0;i<arr.size();i++){
        
        long long sum=0;
        for(int j=0;j<arr.size();j++){
            if(j!=i){
                sum+=arr[j];
            }
            
        }
        if (sum>large){
            large=sum;
        }
        else if(sum<small){
            small=sum;
        }
    }
    
    cout<<small<<" "<<large;


}

int main()
{
    vector<int> st{769082435,210437958,673982045,375809214,380564127};
    cout<<miniMaxSum(st);

}
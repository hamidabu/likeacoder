#include <iostream>
using namespace std;
#include<queue>
#include<vector>
class element{
    public:
    
    int value;
    int index;
    int row;
    element(int v,int i,int n){
        value = v;
        index = i;
        row = n;
        
    }
};

struct compare{
    bool operator()(element a,element b){
        
        return a.value>b.value;
    }
};

class solution{
    public:
    
    vector<int>mergekarray(vector<vector<int>>arr,int k){
        priority_queue<element,vector<element>,compare>q;
        vector<int>ans;
        for(int i=0;i<k;i++){
            element temp(arr[i][0],0,i);
            q.push(temp);
        }
        while(!q.empty()){
            
            element curr =q.top();
            q.pop();
            ans.push_back(curr.value);
            
            if(curr.index<k-1){
                int row = curr.row;
                int index = index+1;
                int val =arr[row][index];
                element temp(val,index,row);
                q.push(temp);
            }
        }
        return ans;
        
    }
};

int main()
{
    

    return 0;
}

#include<iostream>
#include<vector>

using namespace std;
int timeRequiredToBuy(vector<int>& tickets, int k) {
          int time = 0;
        for(int i = 0;i<tickets.size();i++){
            if(i <= k){
                time += min(tickets[k],tickets[i]);
            }else{
                time+= min(tickets[k] - 1,tickets[i]);
            }
        }
        return time;
    }
    int main(){
        vector<int> tickets = {2,3,5,7,11,13};
        int k = 2;
        cout<<timeRequiredToBuy(tickets, k);
        return 0;
    }
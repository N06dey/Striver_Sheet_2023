class Solution {
public:
    int maxProfit(vector<int>& prices) {

        vector<int> mini(prices.size());
        vector<int> maxi(prices.size());
        int minim=INT_MAX,maxim=0;

        for(int i=0;i<prices.size();i++){
            minim=min(minim,prices[i]);
            mini[i]=minim;
        }
        cout<<endl;

        for(int j=prices.size()-1;j>=0;j--){
            maxim=max(maxim,prices[j]);
            maxi[j]=maxim;
        }


        int res=0;
        for(int i=0;i<prices.size();i++){
            res=max(res,maxi[i]-mini[i]);
            cout<<res<<endl;
        }
        return res;
    }
};

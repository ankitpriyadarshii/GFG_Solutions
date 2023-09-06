class Solution {
  public:
    string longestPalin (string S) {
        // code here
        int n = S.length();
        int ans =0, stidx=-1;
        
        for(int mid =0;mid<n;mid++){
            int s=mid,e=mid;
            while(s>=0 && e<n && S[s] == S[e]){
                int currlen = e-s+1;
                if(currlen>ans){
                    ans = currlen;
                    stidx=s;
                }
                s--,e++;
            }
            s=mid-1,e=mid;
            while(s>=0 && e<n && S[s] == S[e]){
                int currlen = e-s+1;
                if(currlen>ans){
                    ans = currlen;
                    stidx=s;
                }
                s--,e++;
            }
        }
        return S.substr(stidx,ans);
    }
};
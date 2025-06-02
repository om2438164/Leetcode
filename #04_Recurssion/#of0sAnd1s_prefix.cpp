 
//  see on gfg -solved
 void solve(int n,int zero,int one,string op,vector<string>&ans){
      if(n==0){
          ans.push_back(op);
          return;
      }
      
      if(zero==one){
          solve(n-1,zero,one+1,op+"1",ans);
      }else{
          solve(n-1,zero,one+1,op+"1",ans);
          solve(n-1,zero+1,one,op+"0",ans);
      }
  }
    vector<string> NBitBinary(int n) {
        // Your code goes here
        
        vector<string>ans;
        string op="";
        solve(n,0,0,op,ans);
        return ans;
    }
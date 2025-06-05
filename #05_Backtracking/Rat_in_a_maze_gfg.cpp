
// gfg and aditya verma video
class Solution {
  public:
  bool isvalid(int& x,int& y,int& n,vector<vector<int>>& maze){
      return (x>=0 && x<n && y>=0 && y<n && maze[x][y]==1)? 1:0;
  }
  bool issolved(int& x, int& y,int& n){
      return (x==n-1 && y==n-1)? 1:0;
  }
  void solve(vector<vector<int>>& maze,int& x,int& y,vector<vector<int>>& choices,string& temp,vector<string>& result,int& n){
      if(issolved(x,y,n)){
          result.push_back(temp);
          return;
      }
      
      for(auto& it:choices){
          int newx=x+ it[1];
          int newy=y+ it[2];
          if(isvalid(newx,newy,n,maze)){
              char ch=it[0];
              temp.push_back(ch);
              maze[x][y]=0;
              solve(maze,newx,newy,choices,temp,result,n);
              maze[x][y]=1;
              temp.pop_back();
              
          }
      }
  }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<vector<int>>choices={{85,-1,0},{68,1,0},{76,0,-1},{82,0,1}};
        string temp="";
        vector<string>result;
        int x=0,y=0;
        int n=maze.size();
        if(maze[0][0]==0 || maze[n-1][n-1]==0) return result;
        solve(maze,x,y,choices,temp,result,n);
        sort(result.begin(),result.end());
        return result;
    }
};
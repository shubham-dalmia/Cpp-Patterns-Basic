#include<bits/stdc++.h>
#define ll long long
#define m 10000007
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(0);
  int n,t;
  string s;
  cin>>n>>t;
  cin>>s;
  while(t--)
  {
    for(int i=0;i<s.length()-1;i++)
    {
     if(s[i] == 'B'&& s[i+1]=='G')
      {swap(s[i],s[i+1]);i++;}
    } }
     cout<<s<<endl;
return 0;
}
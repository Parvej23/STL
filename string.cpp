Almost everything STL string
____________________________

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    s="abced";
    cout<<s.size()<<endl; /// Size of a string.
    cout<<s<<endl;
    s+='b'; /// add caracter back to a string.
    s+='c';
    cout<<s<<endl;
    s="abcdef";
    string s1;
    cout<<s.empty()<<endl; /// Checking string empty or not
    cout<<s1.empty()<<endl;
    s1=s;
    s.clear();
    cout<<s.empty()<<endl;
    cout<<s1.empty()<<endl;
    
    s="bcde";
    s[0]='a'; /// Assigning 'a' in 0-th index
    cout<<s<<endl;
    
    s="abc";
    s1="def";
    string temp= s+s1; /// String concatenation
    cout<<temp<<endl;
    
    string:: iterator it; /// String iterator
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it;
    } 
    cout<<endl;
    
    for(auto u: s) cout<<u; /// For each loop
    cout<<endl;
    s="asd";
    temp=s;
    if(temp==s) cout<<"Match"<<endl; /// Comparing two string.
    else cout<<"Not match"<<endl;
    
    s="abba";
    temp=s;
    reverse(s.begin(),s.end());
    if(s==temp)cout<<"Palindrome"<<endl; /// Check palindrome or not
    else cout<<"Not pallindrome"<<endl;
    
    s="avbde";
    sort(s.begin(), s.end()); /// Sort non decreasing order
    for(auto u: s) cout<<u;
    cout<<endl;
    
    sort(s.rbegin(), s.rend()); ///Sort non increasing order
    for(auto u: s) cout<<u;
    cout<<endl;

    s="deacddaaabbbdeag"; /// Getting unique element
    sort(s.begin(),s.end());
    int n= unique(s.begin(),s.end())-s.begin();
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    } 
    cout<<endl;

    /// Getting maximum and minimum element.
    cout<<*max_element(s.begin(),s.end())<<endl;
    cout<<*min_element(s.begin(),s.end())<<endl;
    
    /// When we to take input with space
    /// Input: Md Parvej
    char c;
    //cin>>c;
   // getline(cin,s);
    //s=c+s;
    //cout<<s<<endl;
    
    /// If we need strt srting
    vector<string>v;
    v.push_back("Parvej");
    v.push_back("Green");
    v.push_back("Apple");
    sort(v.begin(),v.end());
    for(auto u:v) cout<<u<<endl;
    
    s="asdf";
    s.pop_back(); /// remove last character
    cout<<s.back()<<endl; /// print last character
    v.clear();
    v={"bb","aa","bb","cd","aa" };
    sort(v.begin(), v.end());
    
    n= unique(v.begin(), v.end())-v.begin();/// unique string
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" "<<endl;
    } 
    
    /// Converting string to int
    s="123";
    int a=stoi(s);
    cout<<a<<endl;
    cout<<a+1<<endl;
    
    /// Deleting substring;
    s="abcdefghi";
    s.erase(s.begin()+3, s.begin()+6);
    cout<<s<<endl;
    
    /// Copy substring
    temp="Gadha Ful   ";
    s="Kodom";
    copy(temp.begin()+6, temp.begin()+10, back_inserter(s));
    cout<<s<<endl;
    
    /// Remove all character 'a' from string
    s="aaaaaaabdfavaaferree";
    s.erase(remove(s.begin(), s.end(), 'a'), s.end());
    cout<<s<<endl;
    
    /// Checking is a string is substring of another string
    
    s="ParvejurRahman";
    if(s.find("Rahman")!=-1) cout<<"Found"<<endl;
    else
    {
        cout<<"Not Found"<<endl;
    }
}

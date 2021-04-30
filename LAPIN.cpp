#include<bits/stdc++.h>
#include<string>
using namespace std;
void swap(char *a, char *b)  
{  
    char temp = *a;  
    *a = *b;  
    *b = temp;  
} 
void sort(string& s)
{
    int i,j,n;
    n=s.length();
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(s[j]>s[j+1])
            swap(&s[j],&s[j+1]);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    string s,s1,s2,s3;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        int l=s.length();
        s1=s.substr(0,l/2);
        if(l%2==0)
        s2=s.substr(l/2,l);
        else
        s2=s.substr(l/2+1,l);
        sort(s1);
        sort(s2);
        if(s1==s2)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}


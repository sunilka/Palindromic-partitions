#include<iostream>
using namespace std;

int checkpalindrome(string s){
    
    int low=0;
    int high=s.length()-1;
    
    while(low<=high){
        if(s[low] != s[high])
            return 0;
        low++,high--;
    }
    return 1;
}

void substring(string s){
    
    string choosen;
    if(s==""){
        return;
    }
    
    else{
        
        for(int i=0;i<s.length();i++){
            choosen += s[i];
             
            int ans=checkpalindrome(choosen);
            
            if(ans==1){
                cout<<choosen<<endl;
            }
           
        }
        
        s.erase(0,1);
        
        substring(s);
    }
}

int main()
{
    string s;
    cin>>s;
    substring(s);
}
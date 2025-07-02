#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=8;
    vector<string> emojis = {"✰","☻","❀","♡"};
    
    for(int i=0;i<n;i++){
        string emoji = emojis[i%emojis.size()];
        
        for(int j=0;j<=i;j++){
            cout<< emoji;
        }
        cout<<endl;
    }
    

    return 0;
}

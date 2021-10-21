#include <iostream>

// i've been everywhere man

using namespace std;

int main(){
    
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
          int ans = 0;
         string a[n], b[n];
        for(int j = 0; j < n; j++){
            cin>>a[j];
            for(int k = 0; k < n; k++){
                if(a[j] == b[k]){
                    break;
                 }if(k == n - 1){
                    b[ans] = a[j];   
                    ans++;
                }
                }
            }
            cout<<ans<<endl;
        }
    
    
    return 0; 
}

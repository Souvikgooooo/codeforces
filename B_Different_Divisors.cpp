
bool alu(ll x){
    if(x==2||x==3||x==5) return true;
     if(x%2==0||x%3==0||x%5==0) return false;
    for(int l=7;l<=x;l+=2){if(x%l==0) return false;}
    return true;
}
int main(){
    ll N=1e15;
    int t;
    cin>>t;
    while(t--){
        ll d,x(1),y(1);
        cin>>d;
        for(ll p=d+1;p<=N;p++){
            if(alu(p)){
                x=p;
                break;
            }
        }
        y=x*x;
        for(ll p=x+d;p<x*x;p++){
            if(alu(p)){
                y=p;
                break;
            }
        }
       cout<<x*y<<endl;
    }
    return 0;
}
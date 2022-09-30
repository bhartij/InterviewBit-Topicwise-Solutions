int Solution::divisibleBy60(vector<int> &a) {
    
    int n = a.size() ; int t=0,f=0 ; int sum =0 ;
 
    for(int i=0 ;i<n ;i++){
        sum += a[i] ;
        if(a[i] %2==0) two++ ;
        if(a[i] == 0) f++ ; 
    }
    if(( (sum%3==0) && (t>=1) && (f>=1) && (two>=2))|| sum ==0) return 1 ;
       return 0 ; 
}

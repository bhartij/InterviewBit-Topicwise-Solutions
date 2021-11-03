
vector<int> Solution::findPerm(const string A, int B) {

    int n= A.length()+1 ;
    vector<int> ans ;
    int end = B  ;
    int start = 1 , i=0 ;
    while(i< n){
        if(A[i] == 'D'){
            ans.push_back(end) ;
            end--; 
        }
        else{
            ans.push_back(start) ;
            start++ ;
        }
        i++ ;
    }
    
    return ans ;
    
}

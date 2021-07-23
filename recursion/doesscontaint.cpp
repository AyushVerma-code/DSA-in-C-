#include<string.h>
 bool checksequenece(char large[] , char*small) {
     bool ans;
 if(strlen(small)== 0){
            return true;
        }
        if(strlen(large) == 0){
            return false;
        }
        
        if(large[0] == small[0]){
           ans = checksequenece(large+1,small+1);
        }else{
            ans = checksequenece(large+1,small);
        }
        
       

        return ans;
	}

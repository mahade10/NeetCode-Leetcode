class Solution {
public:
    bool isPalindrome(string s) {
        string str,str1;
        int i,j=-1,l;
        if(s.empty()){
            return true;
        }
        else{

            transform(s.begin(), s.end(), s.begin(), ::tolower);
            l = s.size();
            for(i=0;i<l;i++){
                if((s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9')){
                    str+= s[i];
                }
            }

            str1 = str;
            reverse(str1.begin(),str1.end());
            //cout<<str1<<endl;
            int pos = 0;
            int index=-1;
            index = str.find(str1, pos);
            if(index==0)
                return true;
            else
                return false;
        }
    }
};

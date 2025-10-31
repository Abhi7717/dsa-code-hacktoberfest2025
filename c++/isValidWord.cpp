class Solution {
public:
    bool isValid(string word) {
        int c=0, cc=0, ccc=0;
     if(word.size()>=3)
     {
      
        for(int i=0;i<word.size();i++)
    {
        //  cout<<word[i]<<" ";
            if(word[i]>='0' && word[i]<='9')
            {
                c=1;
                cout<<word[i]<<" "<<c;
                
            }
          else if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='i' ||  word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' ||  word[i]=='U' )
            {
                cc=1;
                cout<<word[i]<<" ";
            }
            else if(isalpha(word[i]))
            {
                ccc=1;
                cout<<word[i]<<" ";
            }
            else
            {
                return false;
                cout<<word[i]<<" ";
            }
        }
     }   
     cout<<c;
     if(cc==1 && ccc==1)
     return true;
           return false;
     
    }
};

string ans="";
    int n=s.length();
    int m=t.length();
        unordered_map<char,int> mt;
        for(int i=0;i<m;i++)
                mt[t[i]]++;
        int mct=0;
        int dmct=m;
        unordered_map<char,int> ms;
        int i=-1;
        int j=-1;
            while(true){
                    bool f1=false;
                    bool f2=false;
                    //acquire
                    while((i<(n-1))&&mct<dmct){
                            i++;
                            ms[s[i]]++;
                            if(ms[s[i]]<=mt[s[i]]){
                                    mct++;
                            }
                            f1=true;
                    }
                    //work and release
                    while(j<i&&mct==dmct){
                            string pans=s.substr(j+1,i+1);
                            if(ans.length()==0||pans.length()<ans.length()){
                                    ans=pans;
                            }
                            j++;
                            if(ms[s[j]]==1){
                                    ms.erase(s[j]);
                            }
                            else{
                                    ms[s[j]]--;
                            }
                            if(ms[s[j]]<mt[s[j]]){
                                    mct--;
                            }
                           f2=true;
                    }
                    if(f1==false&&f2==false){
                        cout<<"hi";
                        break;
                    }
            }
            cout<<ans;
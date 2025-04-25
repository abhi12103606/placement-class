class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        int level=0;

        unordered_set<string>bankSet(bank.begin(),bank.end());
        unordered_set<string>visited;
        queue<string>q;

        q.push(startGene);
        visited.insert(startGene);

        while(!q.empty()){
            int N=q.size();
            while(N--){
                string currString=q.front();
                q.pop();

                if(endGene==currString) return level;

                for(char ch:"ACGT"){
                    for(int i=0;i<currString.length();i++){
                        string ngbr=currString;
                        ngbr[i]=ch;

                        if(bankSet.find(ngbr)!=bankSet.end() && 
                            visited.find(ngbr)==visited.end()){
                                visited.insert(ngbr);
                                q.push(ngbr);
                        }
                    }
                }
            }
            level++;
        }
        return -1;
    }
};
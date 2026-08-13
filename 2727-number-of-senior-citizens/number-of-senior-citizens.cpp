class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for(const string& d : details)
        {
            if(stoi(d.substr(11, 2)) > 60)
            {
                cnt++;
            }
        }
        return cnt;
    }
};
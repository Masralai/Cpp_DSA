#include<bits/stdc++.h>
using namespace std;

void solve(string digit,string output, int index, vector<string>& ans,string mapping[]){
    
    //base case
    if(index>=digit.length()){
        ans.push_back(output);
        return;
    }








}

vector<string> letterCombinations(string digits) {
    
    vector<string> digits;

    string output;
    int index = 0;

    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,output,index,ans,mapping);

    return ans;



    }

int main() {

    string digits = "23";

    vector<string> ans = letterCombinations(digits);

     

    
    return 0;
}
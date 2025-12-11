#include<iostream>
#include<string>
using namespace std;

void removeDuplicates(string str, string ans, int i, int map[26]){

    if(i == str.size()){
        cout << "Ans: " << ans << endl;
        return ;
    }
    char ch = str[i];
    int mapidx = (int)(ch - 'a');
    if(map[mapidx]){
        removeDuplicates(str, ans, i+1, map);
    } else {
        map[mapidx] = true;
        removeDuplicates(str, ans+str[i], i+1, map);
    }
}

int main() {
    string str ="work done";
    string ans = "";
    int map[26] = {false};

    removeDuplicates(str, ans, 0, map);
    return 0;
}
    

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1 = {1, 2, 3, 4};
    
    cout << vec1.size()<< endl;     //4
    cout << vec1.capacity()<< endl;  //4

    vec1.push_back(5);
    cout << vec1.size()<< endl;   //5
    cout << vec1.capacity()<< endl; //8

    vec1.pop_back();
    cout << vec1.size()<< endl;   //4.....(Will change )
    cout << vec1.capacity()<< endl; //8......(Will remain same)

    return 0;

}
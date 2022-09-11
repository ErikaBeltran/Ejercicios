#include <iostream> 
#include <vector>
using namespace std; 

int main () { 
vector <int> nums; 
nums.push_back (24); 
nums.push_back (81); 
nums.push_back (57); 
nums.push_back (35); 
nums.push_back (98); 
nums.push_back (1248); 
nums.push_back (89544); 

for(int num: nums) 
cout << num << "\n";
}
//find the difference between the sum of elements at even indices to the sum of elements at odd indices

#include <iostream>
#include <vector>

using namespace std;

int main() {

vector<int> v; 

int element , sumofEven = 0, sumofOdd = 0;

for (int i = 0; i < 5; i++)
{
    cin>>element;
    v.push_back(element);
}

cout<<endl;

for (int i = 0; i < v.size(); i++)
{
    if(i % 2 == 0){
        sumofEven += v[i];
    }
    else{
        sumofOdd += v[i];
    }
}

cout<<"Sum of even indices = "<<sumofEven<<endl<<"Sum of odd indices = "<<sumofOdd<<endl;
cout<<"Sum of even indices - Sum of odd indices = "<<sumofEven - sumofOdd<<endl;

return 0;

}
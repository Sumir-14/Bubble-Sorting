#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector <int> v{10,1,7,6,14,9};
  int n = v.size();

  for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n-i; j++)
        {
          if(v[j] > v[j+1])
          {
            swap(v[j],v[j+1]);  
          }
        }
    }
  for(int i = 0; i < n; i++)
    {
      cout << v[i] << " ";
    }
  
}
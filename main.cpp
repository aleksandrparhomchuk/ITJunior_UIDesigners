#include <iostream>
using namespace std;

const int teamSize = 4;

int main(){
  string names[teamSize];

  names[0] = "Michael Koreshkov";
  //enter your names here
  names[1] = "";
  names[2] = "";
  names[3] = "";

  for(int i=0;i<teamSize;i++){
    cout<<names[i]<<"\n";
  }
  
  return 0;
}

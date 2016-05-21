#include <iostream>
using namespace std;

const int teamSize = 4;

int main(){
  string names[teamSize];

  names[0] = "Michael Koreshkov";
  //enter your names here
  names[1] = "Nazar Gavryliuk";
  names[2] = "Aleksandr Parhomchuk";
  names[3] = "";

  for(int i=0;i<teamSize;i++){
    cout<<names[i]<<"\n";
  }
  
  return 0;
}

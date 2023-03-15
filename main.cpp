#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  const int month=12;
  double rainfall[month];
  double totalRainfall=0.0;
  double averageMonthRainfall;
  double highestRainfall=0.0;
  double lowestRainfall=0.0;
  int highestMonthName=0;
  int lowestMonthName=0;

  for(int i=0; i<month; i++){
    cout<<"\nEnter rainfall for month"<<i+1<<": ";
    cin>>rainfall[i];
    while(rainfall[i]<0){
      cout<<"Please enter a valid number for rainfull, it can not be negative";
      cin>>rainfall[i];
    }
    totalRainfall+=rainfall[i];
    if(i==0||rainfall[i]>highestRainfall){
      highestRainfall=rainfall[i];
      highestMonthName=i;
    }
    if(i==0||rainfall[i]<lowestRainfall){
      lowestRainfall=rainfall[i];
      lowestMonthName=i;
    }
  }

  averageMonthRainfall=totalRainfall/month;
  cout<<"\nThe 12 months total rainfall is: "<<totalRainfall;
  cout<<"\nThe average of the rainfall is: "<<averageMonthRainfall;
  cout<<"\n The highes rainfall is month "<<highestMonthName+1<<": "<<highestRainfall;
  cout<<"\n The lowest rainfall is month "<<lowestMonthName+1<<": "<<lowestRainfall;


    return 0;
}



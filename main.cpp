#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
float  sushi, sales, netTip,  cash, grat, xtra;
const float  SUSHI_PERCENT = 0.03;
const float SALES_PERCENT = 0.075;
float sushiTipOut, baseTipOut;

   


  
  cout << "Enter NET sales:";
  cin >> sales;
  cout << fixed << setprecision(2) << "Based on a NET of $" << sales <<",\n";
  cout << "You will tip-out a base amount of $";
  if (sales >0){
     baseTipOut = (sales * SALES_PERCENT);
  
 cout <<  baseTipOut<<endl;
 }


  cout << "\nEnter Sushi sales:";
  cin >> sushi ;
  cout << "Based on $" << sushi << " in sushi, \n";
   cout <<"You will tip the sushi bar $";
     if (sushi >0){
       sushiTipOut = (sushi * SUSHI_PERCENT);
   
  
 cout <<  sushiTipOut<<endl;
 }
   
   


  cout << "\nEnter total Credit card tips: ";
  cin >> grat;
  cout << "Your CC tips were: $ " << grat <<"\n";
  
  cout << "\nEnter Cash Recieved: ";

  cin >> cash;
  cout << "You recieved $ " << cash << " in Cash\n";

  cout << "\nEnter any extra amount you will give to your awesome team: ";
  cin >> xtra;
  cout  << fixed << setprecision(2) <<"you will give an additional $" << xtra <<",\n";
    if (sales >0){
      
       netTip = (grat - cash - xtra -sushiTipOut -baseTipOut),
     
     
       

 cout << "\n The house owes you $" << netTip << "\n";
cout << "     [If Value is a negative number, that means you owe the house this amount]" ;

 cout << "\n \n Keep up the great work!";

 }


  return 0;
}
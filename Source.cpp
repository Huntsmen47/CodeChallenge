#include "Header.h"


vector<int> values = {1,5,10,50,100,500,1000};
vector<char> numerals = {'I','V','X','L','C','D','M'};

int main() {
    string numeral;
    cout << "please enter Roman numeral" << endl;
    cin >> numeral;
    char A;
    char B;
    int aVal;
    int bVal;
    int dNum = 0;
    bool pair;
   for (size_t i = 0; i < numeral.size(); i++) {
     if (i+1<numeral.size()) {
       bool pair = true;
       A=numeral[i];
       B=numeral[i+1];
       aVal = GetVal(A,numerals,values);
       bVal = GetVal(B,numerals,values);
       dNum = Convert(aVal,bVal,dNum,pair);
     }
     else{
       A = numeral[i];
       B= numeral[i];
       aVal = GetVal(A,numerals,values);
       bVal =  GetVal(B,numerals,values);
        dNum = Convert(aVal,bVal,dNum,pair);
       
        
     }
     if (i+2 < numeral.size()) {
       break;
     }
     else{
       i++;
     }
   }
   cout << dNum << endl;
   return 0;

}

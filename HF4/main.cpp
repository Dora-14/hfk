#include <iostream>
#include <string>

using namespace std;

string forditott(string s){
    string forditva ="";
    for(int i=s.length()-1; i>=0; i--){
        forditva=forditva+s[i];
    }
     return forditva;

}
int main(){
  string szoveg;
  getline(cin, szoveg);
  string ujszoveg="";
  bool kicserelt=false;
  string szo="";
  for(int i=0; i<szoveg.length(); i++){
   if(szoveg[i] ==' '){
    if(szo.length()%2==1){
        string csereltszo=forditott(szo);
        if(csereltszo!=szo){
            ujszoveg=ujszoveg+csereltszo+" ";
            kicserelt=true;
        }else{
            ujszoveg=ujszoveg+szo+" ";


        }
    }else{
        ujszoveg=ujszoveg+szo+" ";
    }
    szo="";
   }else{
      szo=szo+szoveg[i];
   }

  }
  if(szo.length()%2==1){
    string forditvaszo=forditott(szo);
    if(forditvaszo!=szo){
        ujszoveg=ujszoveg+forditvaszo;
        kicserelt=true;
    }else{
        ujszoveg=ujszoveg+szo;
    }
  }else{
      ujszoveg=ujszoveg+szo;

  }
 if(kicserelt){
    cout<< ujszoveg << endl;
  }else{
    cout<< "nu exista" << endl;

   }
  return 0;
}

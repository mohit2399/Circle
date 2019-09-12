#include <iostream>
using namespace std;

class CAT{
public:
    CAT() {
        itsAge = 1;
        itsWeight = 5;
    }
        ~CAT();
        int GetAge() const {
            return itsAge;
        };

 const int GetWeight(){
        return itsWeight;
    }
 void SetAge(int age){ itsAge =age;}
private:
    int itsAge;
    int itsWeight;

};
CAT :: ~CAT(){
    cout << "Destructer called!";
}
int main(){
    CAT *Family = new CAT[500];
    int i;
    CAT * pCAT;
    for(i=0; i<500; i++){
        pCAT = new CAT;
        pCAT->SetAge(2*i +1);
        Family[i] = *pCAT;
        delete pCAT;
   }
    for(i=0; i<500; i++){
        cout << "Cat #" << i+1 << ": ";
        cout << Family[i]->GetAge() << endl;

    }
    delete [] Family;
    return 0;
}
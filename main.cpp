#include <iostream>
#include<iomanip>
#include <vector>
using namespace std;
struct eil{
    string pav, var;
    vector <double> paz;
};
int main()
{   vector <eil> lent; eil temp; double k;char uzkl='t';
    while (uzkl!='n'){cout<<"Iveskite varda ir pavarde: ";
        temp.paz.clear();
        cin>>temp.var>>temp.pav; k=1;
        while(k!=0){cout<<"Iveskite pazymi: ";
            cin.clear(); cin.ignore(256,'\n');
            cin>>k;
            if (k>0 && k<=10) temp.paz.push_back(k);
            else cout<<"klaida"<<endl;
        }
        lent.push_back(temp);cout<<"Baigti - n: ";
        cin>>uzkl;
    }
    for (auto i: lent){
        cout<<setw(15)<<i.var<<setw(15)<<i.pav;/// hgfghffgdfdgfdgf
        for (auto j: i.paz)
            cout<<setw(3)<<j; cout<<endl;
    }
    return 0;
}

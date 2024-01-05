#import <iostream>
#import <iomanip>
using namespace std;
int main() {
   int i = -1, rjt = 4;
   float slr;
   int scr[] = {400, 800, 1200, 2000};
   int hgt[] = {15, 12, 10, 7};
   cin >> slr;
   while (++i < sizeof(scr)/sizeof(scr[0])) { 
       if (slr <= scr[i]) { 
            rjt = hgt[i];
            i = sizeof(scr)/sizeof(scr[0]);
       }    
   }
   int crr = slr*rjt;
   cout << fixed<<setprecision(2)<<
        "Novo salario: "<< slr + crr/100 << endl 
        << "Reajuste ganho: "<< slr*rjt/100 << endl
        << "Em percentual: "<<rjt<<" %"<< endl;
}

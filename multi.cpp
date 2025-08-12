#include <iostream>
using namespace std;  
class CSE {
private:
    int i, n;

public:
    void Mu() {
        cout << "Enter the no" << endl;
        cin >> n;
        for (i = 1; i <= 10; i++) {  // Use <=10 to print 10 times
            cout << "Mult is " << n * i << endl;  // Fixed syntax here
        }
    }
};

int main() {
    CSE b;     
    b.Mu();    

    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void towerOfHanoi(int n,char source,char helper,char destination){
    if(n ==1){
        cout <<"Move disk 1 from"<<source<<
            " to " << destination << endl;
        return;
    }
    //Move n-1 disks from source to helper
    towerOfHanoi(n -1,source,destination,helper);

//Move last disk from source to destination
cout <<"Move disk"<< n << "from"<<
    source<< " to " << destination << endl;
    
towerOfHanoi(n-1,helper,source,destination);
}
int main() {
    int n;
    cout <<"Enter number of disks: ";
    cin >> n;
    
    towerOfHanoi(n,'A','B','C'); //A =
        //source,B = helper,C = destination

    return 0;
}

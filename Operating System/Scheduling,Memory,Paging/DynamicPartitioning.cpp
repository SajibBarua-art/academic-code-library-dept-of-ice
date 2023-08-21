#include <iostream>
using namespace std;

int main() {
    int memory,mp[10],i,temp,n=0;
    char ch = 'y';
    cout << "Enter the total memory available:";
    cin >> memory;
    temp = memory;
    for (i = 0; ch == 'y'; i++, n++) {
        cout << "Enter memory required for process " << i+1<<" "<<endl;
        cin >> mp[i];
        if (mp[i] <= temp) {
            cout << "Memory is allocated for Process " << i+1<<" "<<endl;
            temp = temp - mp[i];
        }
        else {
            cout << "Memory is Full" << endl;
            break;
        }
        cout << "Do you want to continue(y/n) -- ";
        cin >> ch;
    }

    cout << endl << "Total Memory Available " << memory << endl;
    cout << "\n\tPROCESS\t\t MEMORY ALLOCATED " << endl;
    for (i = 0; i < n; i++)
        cout << "\t" << i+1 << "\t\t\t\t" << mp[i] << endl;
    cout << endl << "Total Memory Allocated is " << memory-temp << endl;
    cout << "Total External Fragmentation is " << temp << endl;
    return 0;
}
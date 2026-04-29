/* #include <iostream>
using namespace std;

int main() {
    int arr[5] = { 1,2,3,4,5 };
    int n = 5;
    int key = 4;

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;
    
      //  cout << low << endl;
      //  cout << high << endl;

        if (arr[mid] == key) {
            cout << endl;
            cout << "Element found at index: " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found";
    }

    return 0;
} */

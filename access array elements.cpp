#include <iostream>
using namespace std;

int main()
{
   int arr[5];
   cout << "Enter the elements: ";

   for(int i = 0; i < 5; ++i)
      cin >> arr[i];

   cout << "Entered elements are: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(arr + i);

   return 0;
}

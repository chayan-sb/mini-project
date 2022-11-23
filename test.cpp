
// C++ program to convert a decimal
// number to hexadecimal number
 
#include <iostream>
using namespace std;
 
// function to convert decimal to hexadecimal
string decToHexa(int n)
{
    // ans string to store hexadecimal number
    string ans = "";
   
    while (n != 0) {
        // remainder variable to store remainder
        int rem = 0;
         
        // ch variable to store each character
        char ch;
        // storing remainder in rem variable.
        rem = n % 16;
 
        // check if temp < 10
        if (rem < 10) {
            ch = rem + 48;
        }
        else {
            ch = rem + 55;
        }
         
        // updating the ans string with the character variable
        ans += ch;
        n = n / 16;
    }
     
    // reversing the ans string to get the final result
    int i = 0, j = ans.size() - 1;
    while(i <= j)
    {
      swap(ans[i], ans[j]);
      i++;
      j--;
    }
    return ans;
}
 
// Driver code
int main()
{
    int n = 2545;
 
    cout << decToHexa(n);
 
    return 0;
}
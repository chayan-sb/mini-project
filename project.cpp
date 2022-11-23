/*mini project : everything converter */

#include <iostream>
using namespace std;

float FaranheitToCelcius(float faranheit);
float CelsiusToFaranheit(float celsius);
void DecimalToBinary(int n);
int BinaryToDecimal(string n);
string DecimalToHexa(int n);
void DecimalToOctal(int n);
void metpersecTokmperhour(float n);
void kmperhourTometpersec(float n);
void CurrencyConversion(float n);
void weightconversion(float n);
void meterTofeet(float n);
void feetToinches(float n);




int main()
{
cout<<"Welcome to Everything convertor"<<endl;
cout<<"please select options from list to convert "<<endl;
cout<<"1.Temprature convertor"<<endl;
cout<<"2.Number system convertor"<<endl;
cout<<"3.speed convertor"<<endl;
cout<<"4.currency convertor"<<endl;
cout<<"5.weights convertor"<<endl;
cout<<"6. Length convertor"<<endl;
int a;  //selected option
cin>>a;
if(a==1)

{
cout<<"select one from the below given conversions"<<endl;
cout<<"1.Faranheit to celsius"<<endl;
cout<<"2.celsius to faranheit"<<endl;
int b; //second selected option
cin>>b;

if (b==1)
{
float p;      //temporary variable
FaranheitToCelcius(p);
}
else if (b==2)
{
    float p;  //temporary variable
CelsiusToFaranheit(p);
}
else
{
cout<<"invalid selection sorry "<<endl;
}


}



else if (a==2)
{
cout<<"select one from the below given conversions"<<endl;
cout<<"1.decimal to binary"<<endl;
cout<<"2.binary to decimal"<<endl;
cout<<"3.decimal to hexadecimal"<<endl;
cout<<"4.decimal to octal"<<endl;
int b; //second selection
cin>>b;
if (b==1)
{
int c;     //temporary variable
DecimalToBinary(c);
}
else if (b==2)
{
string c;  //temporary variable
BinaryToDecimal(c);
}
else if (b==3)
{
    int c;     //temporary variable
    DecimalToHexa(c);
}
else if (b==4)
{
    int c;     //temporary variable
    DecimalToOctal(c);
}
else
{
cout<<"invalid selection sorry"<<endl;
}



}
else if (a==3)
{
cout<<"select one from the below given conversions"<<endl;
cout<<"1.kmph to mps"<<endl;
cout<<"2.mps to kmph"<<endl;
int b; // second selection
cin>>b;
if(b==1)
{
    float p;
    kmperhourTometpersec(p);
}
else if (b==2)
{
    float p;
    metpersecTokmperhour(p);

}

else
{
cout<<"invalid selection sorry"<<endl;
}




}



else if (a==4)
{
float p;
CurrencyConversion(p);
}
else if(a==5)
{
float p;
weightconversion(p);
}
else if (a==6)
{
    cout<<"select one from the below given conversions"<<endl;
cout<<"1.meters to feet"<<endl;
cout<<"2.feet to inches"<<endl;
int b; // second selection
cin>>b;
if(b==1)
{
    float p;
    meterTofeet(p);
}
else if (b==2)
{
    float p;
    feetToinches(p);

}
}





else

{
cout<<"invalid selection sorry"<<endl;
}


cout<<"program ended without any error"<<endl;
cout << "Thankyou" << endl;

cout << "--------------------------- " << endl;

return 0;
}






/*
1.function to convert faranheit to celsius
*/
float FaranheitToCelcius(float faranheit)
{ float celsius;
 cout << "Enter the temperature in fahrenheit\n";
    cin >> faranheit;
  
       celsius = 5 * (faranheit - 32) / 9;           //converting fahreneheit to celsius 
     
     cout<<"Temp in celsius is : "<<celsius<<endl;
   
}






/*
2. function to convert celsius to faranheit 
*/
float CelsiusToFaranheit(float celsius)
{
float faraheit,celcius;
 cout << "Enter the temperature in celsius\n";
    cin >> celcius;
   faraheit = (celcius * 9.0) / 5.0 + 32; //converting celsius to faranheit
     cout<<"Temp in fahreneheit is : "<<faraheit<<endl;
}




/*
3. function to convert decimal numbers to binary numbers
*/
void DecimalToBinary(int n)
{cout<<"enter the number in decimal "<<endl;
    	int arr[11], i = 0;int num;
        cin>>num;
    n=num;
    // Until the value of n becomes 0.
	while(n != 0){
		arr[i] = n % 2;
		i++;
		n = n / 2;
	}
	cout<<"binary form of given number is : " ;

	// Printing the array in Reversed Order.
	for(i = i - 1; i >= 0;i--){
		cout << arr[i];
	}
	cout << endl;

}



/*
4. function to convert  binary numbers to decimal form
*/
int BinaryToDecimal (string n)
{
cout<<"enter the number in binary"<<endl;
cin>>n;
    string num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    cout<<"decimal form of given number is"<<dec_value<<endl;
}



 /*
5. function to convert decimal to hexadecimal
*/  
string DecimalToHexa(int n)
{cout<<"enter the number in decimal ";
cin>>n;
    // answer string to store hexadecimal number
    string ans = "";
   
    while (n != 0) {
        // remainder variable to store remainder
        int rem = 0;
         
        // char variable to store each character
        char ch;
        // storing remainder in rem variable.
        rem = n % 16;
 
        // check if temp < 10
        if (rem < 10) {
            ch = rem + 48;    //ascii value of 48 is 0
        }
        else {
            ch = rem + 55;    //ascii value of 65 is A
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
    cout<<"Hexadecimal form of given number is : "<<ans<<endl;
}


 /*
6. function to convert decimal to octal
*/  

void DecimalToOctal(int n) {
    cout<<"enter the number in decimal ";
    cin>>n;
   int octalNum = 0, placeValue = 1;
   int dNo =n;
   while (n != 0) {
      octalNum += (n % 8) * placeValue;
   n /= 8;
      placeValue *= 10;
   }
   cout<<"Octal form of given number is :"<<octalNum<<endl;
}




 /*
7. function to conver meters per sec to t to kilometers per hour
 */  

void metpersecTokmperhour(float n)
{ cout<<"enter the speed in meter per sec"<<endl;
cin>>n;
    float ans = n*3.6;
    cout<<"the speed in kilometers per hour is "<<ans<<endl;
}




/*
8. function to convert kilometers per hour to meters per second
 */  

void kmperhourTometpersec(float n)
{ cout<<"enter the speed in kilometers per hour"<<endl;
cin>>n;
    float ans = n/3.6;
    cout<<"the speed in meters per sec is "<<ans<<endl;
}


/*
9. function to convert currencies
 */ 

void CurrencyConversion(float n){
    cout<<"enter amount of rupees  ";
    cin>>n;
    float rupees ;  
float britishPounds = n*0.010 ;  
float usdollars= n*0.012;
float euro = n*0.012  ;  
float deutschmark = n*0.0232;  
float yen =n*1.73;  
cout << " US dollars" <<usdollars<< endl ;  
cout << " British Pounds : " <<britishPounds<< endl ;  
cout << " French euro : " <<euro<< endl ;  
cout << " German Deutschmark : " <<deutschmark<< endl ;  
cout << " Japanese Yen : " <<yen<< endl ;  
}


/*
10. function to convert weights
 */ 
void weightconversion(float n)
{
 cout<<"enter amount of weight in kilograms "<<endl;
    cin>>n;
    float kilograms ;  
float Pounds = n*2.20462 ;  
float ounces= n*35.274;
float grams = n*1000  ;  
 
cout << " pounds :"<<Pounds<< endl ;  
cout << " ounces : " <<ounces<< endl ;  
cout << " grams : " <<grams<< endl ;  


}

/*
11. function to convert length in meters to feet
 */ 
void meterTofeet(float n)
{
    cout<<"enter the length in meters"<<endl;
    cin>>n;
    cout<<" the length in feet is : "<<n*3.281<<endl;
}




/*
12. function to convert length in meters to feet
 */
void feetToinches(float n)
{
 cout<<"enter the length in feet"<<endl;
    cin>>n;
    cout<<" the length in inches is : "<<n*12<<endl;
}
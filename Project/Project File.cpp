#include <iostream>

using namespace std;
void convert(int num)
{
  
    char *first_words[20] = {"ZERO", "ONE", "TWO", "THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN",
    "ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTTEEN","NINETEEN"};
  
    char *second_words[10] = {"", "TEN", "TWENTY", "THIRTY","FORTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINETY"};
    if(num<0)
    {
        cout<<" ";
        convert(-num);
    }
    else if(num>=1000)
    {
        convert(num/1000);
        cout<<" THOUSAND";
        if(num % 1000)
        {
            if(num % 1000 < 100)
            {
                cout << " AND";
            }
            cout << " " ;
            convert(num % 1000);
        }
    }
    else if(num >= 100)
    {
        convert(num / 100);
        cout<<" HUNDRED";
        if(num % 100)
        {
            cout << " AND ";
            convert (num % 100);
        }
    }
    else if(num >= 20)
    {
        cout << second_words[num / 10];
        if(num % 10)
        {
            cout << " ";
            convert(num % 10);
        }
    }
    else
    {
        cout<<first_words[num];
    }
    return;
    
}
int main()
{
    int input_number;
    cout<<"please type a number to convert it into words : ";
    cin>>input_number;
    convert(input_number);
    return 0;
}
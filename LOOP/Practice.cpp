#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Question#1
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<'*';
    //     }
    //  cout<<endl;  // To print a new line after each row
    // }
    // Question#2
    // int num,i=1;
    // cout<<"Enter Number: "<<endl;
    //     cin>>num;

    //     for(num;num>=i;num--){
    //         cout<<"Number is:"<<num<<endl;
    //     }
    // Question#3 "Print sum of digit of number using while loop"
    // int n=10829,last_digit=0,sum=0;
    // while(n>0){
    //     last_digit=n%10;
    //     sum+=last_digit;
    //     n=n/10;
    // }
    // cout<<"sum is:"<<sum<<endl;
    // Question#4 "print the sum of odd digits of a number using while loop"
    // int n=10829,last_digit=0,sum=0;
    // while(n>0){
    //     last_digit=n%10;
    //     if(last_digit%2!=0){
    //     sum+=last_digit;
    //     }
    //     n=n/10;
    // }
    // cout<<"sum is:"<<sum<<endl;

    // Question#5 "print the digits of a number in reverse order using while loop"
    //  int n=10829,last_digit=0;
    //  while(n>0){
    //      last_digit=n%10;
    //      cout<<last_digit<<" ";
    //      n=n/10;
    //  }

    // Question#6 "Reverse a given number &  print the result"
    //  int n=10829,last_digit=0,sum=0;
    //  while(n>0){
    //      last_digit=n%10;
    //      sum=sum*10+last_digit;
    //      n=n/10;
    //  }
    //  cout<<"sum is:"<<sum<<endl;

    // Question#7 "Write a program user can keep entering number till they enter a number multiple of 10"
    //  int n;
    //  do{
    //  cout<<"enter Number:";
    //  cin>>n;
    //  if(n%10==0){
    //      break;
    //  }
    //  cout<<"U entered :"<<n<<endl;
    //  }while (true);
    // Question#8 "check if number is prime or not prime"
    //  int n;
    //  bool isPrime=true;
    //  cout<<"Enter Number:";
    //  cin>>n;
    //  for(int i=2;i<=n-1;i++){
    //      if(n%i==0){
    //  isPrime=false;
    //  break;
    //      }
    //  }
    //  if(isPrime){
    //      cout<<"No is Prime"<<endl;
    //  }
    //  else{
    //      cout<<"No is not Prime"<<endl;
    //  }

    // Second method using cmath library
    int n;
    bool isPrime = true;
    cout << "Enter Number:";
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "No is Prime" << endl;
    }
    else
    {
        cout << "No is not Prime" << endl;
    }
    return 0;
}
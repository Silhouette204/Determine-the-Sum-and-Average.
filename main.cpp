#include<iostream>
using namespace std;
int main()
{
    int i, n, num, sum = 0, avrg = 0;

    cout<<"How many numbers you want to enter ? ";
    cin>>n;

    cout<<"Enter "<<n<<" numbers: ";
    for(i=0; i<n; i++)
    {
        cin>>num;
        sum = sum+num;
    }
    cout<<"\nSum of all "<<n<<" numbers is: "<<sum;

     avrg = sum / n;

    cout << "\nYour average is: " << avrg << "\n";

     if (sum %2==0 && avrg %2==0) {

        cout <<"The number of sum is: " << sum << " It's EVEN! \n";
          }
          else {
         cout <<"The number of sum is: " << sum << " It's ODD! \n";
    }

    if  (avrg %2==0) {

     cout <<"The number of Average is: " << avrg << " It's EVEN!";
    }
    else {
    cout <<"The number of Average is: " << avrg << " It's ODD!";
    }
    return 0;
}

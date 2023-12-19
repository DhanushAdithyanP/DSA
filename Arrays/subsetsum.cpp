#include <iostream>
using namespace std;

void subArraySum(int arr[], int N, int S)
{
    for (int i= 0; i<N; i++)
    {
        int currentsum = arr[i];
        if(currentsum == S)
        {
            cout<<"Sum found at index "<< i << endl;
            return;
        }
        else
        {
            for(int j=i+1; j<N; j++)
            {
                currentsum += arr[j];
                if (currentsum == S)
                {
                    cout<<"Sum found between indexes "<< i << " and "<< j << endl;
                    return;
                }
            }
        }
    }
    cout << "No subarray found "<< endl;
    return;
}

int main()
{
    int N;
    cout<<"N = ";
    cin>>N;

    int S;
    cout<<"S = ";
    cin>>S;

    int arr[N];
    cout<<"A[] = ";
    for (int i = 0; i<N; i++)
    {
        cin >> arr[i];
    }

    subArraySum(arr, N, S);
    return 0;
}
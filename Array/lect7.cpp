#include <iostream>
using namespace std;
int max_arr(int arr[], int n)
{
    int max_arr = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // if (arr[i] > max_arr)
        // {
        //     max_arr = arr[i];
        // }
        max_arr = max(max_arr, arr[i]);
    }
    return max_arr;
}
int min_arr(int arr[], int n)
{
    int min_arr = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (arr[i] < min_arr)
        // {
        //     min_arr = arr[i];
        // }
        min_arr = min(min_arr, arr[i]);
    }
    return min_arr;
}
void linearSearch(int linear_arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (key == linear_arr[i])
        {
            cout << "present at location " << i + 1;
            return;
        }
    }
    if (i == n)
    {
        cout << "key not present";
        return;
    }
}
void reverse_arr(int reverse_arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(reverse_arr[start], reverse_arr[end]);
        start++;
        end--;
    }
}
void alternate_swap(int arr[], int n)
{
    int i = 0, j = 0;
    while (j < n - 1 && i < n - 1)
    {
        swap(arr[i], arr[j + 1]);
        i = i + 2;
        j = j + 2;
    }
}
void duplicate(int arr[], int n)
{
    int count = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    cout << count;
}

bool lin(int arr[],int n){
    int Xor=0;
   for (int i = 0; i < n; i++)
   {
    Xor=arr[i]^Xor;
   }
   cout<<Xor<<endl;
   for (int i = 0; i < n; i++)
   {
    if(Xor==arr[i]){
        return true;
    }
   }
   
   return false;
}

int main()
{
    // to intialize all element to 0
    // int arr[6] = {5, 3, 31, 85, 97, 11};
    // int n = sizeof(arr) / 4;
    // cout << "max element of arr: "<< max_arr(arr, n) << endl;
    // cout << "min element of arr: "<<min_arr(arr, n) << endl;

    // sum of arr

    // int m,a,sum=0;
    // cout<<"enter size of arr: ";
    // cin>>m;
    // int sum_arr[m];
    // for (int i = 0; i < m; i++)
    // {
    //     cin>>a;
    //     sum_arr[i]=a;
    //     sum=sum+sum_arr[i];
    // }
    // cout<<"sum of all element: "<<sum;

    // linear Search --Array

    // int linear_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int alternate_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int duplicate_arr[10] = {1, 3, 3, 4, 5, 5, 7, 8, 9, 9};

    // int key = 12, i = 0;
    // linearSearch(linear_arr, 10, 45);

    // reverse_arr(linear_arr, 10);
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << linear_arr[i] << " ";
    // }
    // cout << endl;
    // alternate_swap(alternate_arr, 10);
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << alternate_arr[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << array_intersect2[i] << " ";
    // }
    // cout << endl;
    // duplicate(duplicate_arr, 10);
    // int arr1[10] = {1, 15,13,15,15,15, 15,1, 13,13};
    return 0;
}
//Q1. Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements : ";
    for (int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int product = 1;
    for (int i=0; i<=n-1; i++){
        product *= arr[i];
    }
    cout<<"Product of all array elements is "<<product;
    return 0;
}

//Q2. Find the second largest element in the given Array in one pass.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements : ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=0; i<=n-1; i++){
        if (max<arr[i]) max=arr[i];
    }
    int smax = arr[0];
    for(int i=0; i<=n-1; i++){
        if (arr[i]!=max && smax<arr[i]) smax=arr[i];
    }
    cout<<"2nd biggesst element of array is "<<smax;
    return 0;
}

//Q3. Find the minimum value out of all elements in the array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements : ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i=0; i<=n-1; i++){
        if (min>arr[i]) min=arr[i];
    }
    cout<<"max element of array is "<<min;
    return 0;
}

//Q4. Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements : ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int dup = 0;
    bool flag = false;
    for(int i=0; i<=n-1; i++){
        if(dup==arr[i]) flag = true;
    }
    if (flag == true) cout<<"duplicate elements present";
    else cout<<"no duplicate elements in array";
    return 0;
}

//Q5. WAP to find the smallest missing positive element in the sorted Array that contains only
//positive elements.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements : ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    cout<<endl;
    int min = arr[0];
    for(int i=0; i<=n-1; i++){
        if(min>arr[i]) min=arr[i];
    }
    cout<<"minimum element of array is "<<min;
    cout<<endl;
    return 0;
}


//Q6: Predict the output.
/*int main()
{
int sub[50], i ;
for ( i = 0 ; i <= 48 ; i++ ) ;
{
sub[i] = i ;
cout<<sub[i]<<endl ;
}
return 0;
}*/
//ouput = it will print all integers from 0 to 48

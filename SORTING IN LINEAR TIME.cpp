#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
void sort_0_1_2(int a[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid = 0;

    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(&a[low], &a[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(&a[mid], &a[high]);
            high--;
            break;
        }
    }
}
int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort_0_1_2(a,n);
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<endl;
  }
	return 0;
}

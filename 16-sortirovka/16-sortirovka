#include <iostream>
#include <ctime>
using namespace std;

void swap (int *a, int *b)
{
	int l = *a;
	*a = *b;
	*b = l;
}
void quickSort(int *n, int left, int right)
{
  int pivot;
  int l = left; 
  int r = right;
  pivot = n[left];
  while (left < right) 
  {
    while ((n[right] >= pivot) && (left < right))
      right--; 
    if (left != right)
    {
      n[left] = n[right];
      left++; 
    }
    while ((n[left] <= pivot) && (left < right))
      left++;
    if (left != right)
    {
      n[right] = n[left];
      right--;
    }
  }
  n[left] = pivot;
  pivot = left;
  left = l;
  right = r;
  if (left < pivot)
    quickSort(n, left, pivot - 1);
  if (right > pivot)
    quickSort(n, pivot + 1, right);
}
int main()
{
	int i;
	int arr_size;
	int a;
	int b;
	int c;
	cout<<"Vvedite 2 chisla\n";
	cin>>a;
	cin>>b;
	swap(&a,&b);
	cout<<"Perviy sposob "<<a<<" "<<b<<"\n";

	a = a + b;
	b = a - b;
	a = a - b;
	cout<<"Vtoroy sposob "<<a<<" "<<b<<"\n";

	c = a;
	a = b;
	b = c;
	cout<<"Tretiy sposob "<<a<<" "<<b<<"\n";

	cout<<"VVedite chislo\n";
	cin>>arr_size;
	int *ary = new int[arr_size];
	//cout<<arr_size;
	cout<<"ishod massiv ";
	

	for(int i = 0; i < arr_size;  i++)
	{
		ary[i] = rand()%100;
		cout<<ary[i]<<" ";
	}
	quickSort(ary, 0, arr_size); 
	cout<<"\n";
	cout<<"otsort massiv ";
	for(int k = 1; k < arr_size + 1; k++)
	{
		cout<<ary[k]<<" ";
	}

	cout<<"\n";
	system("pause");
	return 0;
}

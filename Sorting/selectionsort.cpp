#include<iostream>

void selection_sort(int x[], int size)
{
  int temp, i, j;
  for(i=0;i<size;i++)
    for(j=i+1;j<size-i;j++)
      if(x[i]>x[j])
      {
        temp = x[j];
        x[j] = x[i];
        x[i] = temp;
      }
  std::cout << "Sorted numbers:-\n";
  for(i=0;i<size;i++)
    std::cout << x[i] << ' ';
  std::cout << '\n';
}

int main()
{
  int arr[10], size, i;
  std::cout << "How many elements do you need ?\n";
  std::cin >> size;
  std::cout << "Enter the numbers:-\n";
  for(i=0;i<size;i++)
    std::cin >> arr[i];
  std::cout << "Here are your numbers:-\n";
  for(i=0;i<size;i++)
    std::cout << arr[i] << " ";
  std::cout << '\n';
  std::cout << "-----SELECTION-SORT-----\n";
  selection_sort(arr, size);
  return 0;
}

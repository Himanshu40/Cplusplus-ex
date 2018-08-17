#include<iostream>

void bubble_sort(int x[10], int s)
{
  int temp, i, j;
  for(i=0;i<(s-1);i++)
    for(j=0;j<(s-i);j++)
      if(x[j] > x[j+1])
      {
        temp=x[j];
        x[j]=x[j+1];
        x[j+1]=temp;
      }
  std::cout << "\t\t---Sorted Array---\n";
  for(i=0;i<s;i++)
    std::cout << x[i] << " ";
  std:: cout << '\n';
}

int main()
{
  int arr[10], size, a;
  std::cout << "How many elements do you need ? ";
  std::cin >> size;
  std::cout << "Enter the numbers:- \n";
  for(a=0;a<size;a++)
    std::cin >> arr[a];
  std::cout << "Here are your numbers:- \n";
  for(a=0;a<size;a++)
    std::cout << arr[a] << " ";
  std::cout << "\n\t-----PROGRAM-FOR-BUBBLE-SORT-----\n";
  bubble_sort(arr,size);
  return 0;
}

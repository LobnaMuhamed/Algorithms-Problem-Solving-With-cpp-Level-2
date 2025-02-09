#include "header.h"
// Min Of Random Array

int RandomNumber(int From, int To)
{
  int randomNumber = rand() % (To - From + 1) + From;
  return randomNumber;
}
int ReadPositiveNumber(string Message)
{
  int Number = 0;
  do
  {
    cout << Message << endl;
    cin >> Number;
  } while (Number <= 0);
  return Number;
}
void FillArrayWithRandomNumbers(int Arr[100], int &arrLength)
{
  arrLength = ReadPositiveNumber("Please Enter Number Of Array Elements");
  for (int i = 0; i < arrLength; i++)
  {
    Arr[i] = RandomNumber(1, 100);
  }
}
void PrintArrayElements(int Arr[100], int arrLength)
{
  cout << "Array Elements: ";
  for (int i = 0; i < arrLength; i++)
  {
    cout << Arr[i] << " ";
  }
  cout << endl;
}
int MinElement(int Arr[100], int arrLength)
{
  int minNum = Arr[0];
  for (int i = 0; i < arrLength; i++)
  {
    if (Arr[i] < minNum)
      minNum = Arr[i];
  }
  return minNum;
}
int main()
{
  srand((unsigned)time(NULL));
  int Arr[100], arrLength;
  FillArrayWithRandomNumbers(Arr, arrLength);
  int minNum = MinElement(Arr, arrLength);
  PrintArrayElements(Arr, arrLength);
  cout << "Min Element: " << minNum << endl;
  return 0;
}
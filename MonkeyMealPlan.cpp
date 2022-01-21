#include <iostream>
using namespace std;

int main()
{
  int monkeys [3][5];
  double food;
  double average[5];
  double min = -1;
  double max = 0;

  for(int j = 0; j < 5; j++)
  {
    for(int i = 0; i < 3; i++)
    {
      cout << "Enter amout of food for monkey " << i + 1 << " on day " << j + 1 << ": ";
      cin >> food;
      if(food < 0)
      {
        cout << "Invalid input. \n";
      }
      else
      {
        cout << endl;
        if(min == -1)
        {
          min = food;
        }
        if(food < min)
        {
          min = food;
        }
        if(food > max)
        {
          max = food;
        }
        monkeys[i][j] = food;
        food = 0;

        average[j] = average[j] + monkeys[i][j];
      }
    }
  }

    for(int i = 0; i < 3; i++)
    {
      for(int j = 0; j < 5; j++)
      {
        cout << monkeys[i][j] << "\t";
      }
      cout << endl;
    }

    for(int j = 0; j < 5; j++)
    {
      cout << "The average of day " << j + 1 << " is " << average[j]/3 << " pounds. \n";
    }
    cout << "The maximum food eaten this week is " << max << " pounds. \n";
    cout << "The minimum food eaten this week is " << min << " pounds. \n";
    return 0;
}

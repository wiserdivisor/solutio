#include<iostream>
using namespace std;

//Declaring function.
string jumpnum(int n);

//Main function.
int main()
  {
    //'t' Testcases.
    int t;
    cin>>t;
    while(t--)
      {
        int n;
        cin>>n;
        cout << jumpnum(n) << endl;
      }
  }

//Defining Funtion.
string jumpnum(int n)
  {
    //String for storing JNs.
    string s = "";

    //For all numbers from 0 to n.
    for (int i=0; i<=n; i++)
      {
        //Storing value in 'v' for checking.
        int v = i;

        //Storing value in 'w' for printing.
        int w = i;

        //Appending single-digit values.
        if (to_string(i).length() == 1)
          {
            s.append(to_string(i));
            s.append(" ");
          }

        //For values that aren't single-digit.
        else
          {
            //Keep removing and checking.
            //Until it becomes zero.
            while(v > 0)
              {
                //Take last digit.
                int a = v%10;
                //Remove last digit.
                v = v/10;
                //Take last digit.(Actually, second last)
                int b = v%10;

                //Check if difference is 1.
                if ( a - b == 1 || a - b == -1)
                  {
                    //Keep checking...
                    continue;
                  }
                else
                  {
                    //Stop checking.
                    break;
                  }
              }

            //If the entire number was checked
            //It becomes 0
            //So its a JN.
            if (v == 0)
              {
                s.append(to_string(w));
                s.append(" ");
              }
          }
      }
      //Return the result.
      return s;
  }

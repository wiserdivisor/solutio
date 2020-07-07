#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//start
class Person
  {
    public :
      string name;
      int age;

      virtual void getdata()
        {
          cin>>name>>age;
        }

      virtual void putdata()
        {
          cout<<name<<' '<<age<<' ';
        }
  };

class Professor : public Person
  {
    private:
      int pub, id;
      static int cur_id;

    public:
      void getdata()
        {
          Person::getdata();
          cin>>pub;
          id = ++cur_id;
        }

      void putdata()
        {
          Person::putdata();
          cout<<pub<<' '<<id<<'\n';
        }

  };

int Professor::cur_id = 0;

class Student : public Person
  {
    private:
      int marks[6], id;
      static int cur_id;

    public:
      void getdata()
        {
          Person::getdata();
          for(int i=0; i<6; i++)
            {
              cin>>marks[i];
            }
          id = ++cur_id;
        }

      void putdata()
        {
          int sum=0;
          Person::putdata();
          for(int i=0; i<6; i++)
            {
              sum+=marks[i];
            }
          cout<<sum<<' '<<id<<'\n';
        }

  };

int Student::cur_id = 0;
//end
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

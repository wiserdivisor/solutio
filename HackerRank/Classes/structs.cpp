#include<iostream>

struct Student{int age; std::string fName; std::string lName; int std;};

int main()
  {
    Student st;
    std::cin >> st.age >> st.fName >> st.lName >> st.std;
    std::cout << st.age <<' '+st.fName+' '+st.lName+' '<< st.std;
    return 0;
  }

#include <iostream>
#include<string>
using namespace std;
struct student_data
    {
        char* name;
        int age;
        char *gender;
        char *blood_type;
    };
int main()
{
    student_data stu;
    stu.name= "tumi";
    stu.age=17;
    stu.gender="boy";
    stu.blood_type="O";
    cout<<stu.name<<endl;
     cout<<stu.age<<endl;
      cout<<stu.gender<<endl;
       cout<<stu.blood_type<<endl;
    return 0;
}

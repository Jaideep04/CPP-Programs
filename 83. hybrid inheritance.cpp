#include<iostream>
#include<string>
using namespace std;

class student{
    public:
      int id, roll_no;
      string name;
      void data(){
        cout<<"Enter the name of a  Student : ";
        cin>>name;
        cout<<"Enter the ID of Student : ";
        cin>>id;
        cout<<"Enter Roll No. Of The Student :"; 
        cin>>roll_no;
      }
};

class external_exam : public student{
    public:
       int ext_marks[4];
       int total_ext = 0;
       void external_marks(){
        cout<<"External Exam Marks for 4 subjects out of 40 : ";
        for(int i=0 ;i<4;++i){
          cin>>ext_marks[i];
          total_ext = total_ext + ext_marks[i];
        }
       }
};

class internal_exam{
    public:
      int total_int=0;
      int int_marks[4];
      void internal_marks(){
        cout<<"Internal Exam Marks for 4 subjects out of 20 : ";
        for(int i=0 ;i<4;++i){
          cin>>int_marks[i];
          total_int = total_int + int_marks[i];
        }
      }
};

class result : public external_exam , public internal_exam{
    public:
      int res; 
      void final(){
         res = (((total_ext + total_int)*100)/240);
      }
      void display(){
        cout<<endl;
        cout<<"Name : "<< name <<" , "<<"ID : " << id <<" , "<<"Roll no. "<< roll_no <<" , "<<"total percentage : " << res <<" %";
        if(res>=30){
          cout<<"  pass"<<endl;
        }
        else{
          cout<<"  fail"<<endl;
        }
        
      }
      
};

int main(){
    result r[2];
    for(int i=0;i<2;i++){
      cout<<endl;
      cout<<"enter data of student "<<i+1<<endl;
      r[i].student::data();
      r[i].external_exam::external_marks();
      r[i].internal_exam::internal_marks();
      r[i].final();
    }
    for(int i=0;i<2;i++)
      r[i].display();
    

    return 0;
}
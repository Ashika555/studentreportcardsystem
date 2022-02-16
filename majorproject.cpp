#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class student{
    public:
    string Name;
    int Class;
    int Roll_number;
    string Subject1;
    string Subject2;
    string Subject3;
    string Subject4;
    string Subject5;
    string Subject6;
    string Subject7;
    int m1,m2,m3,m4,m5,m6,m7;
    int addedsubnum;
   
   
  void StudentDetails(){
      cout<<"Enter student name:\n";
      cin>>Name;
      cout<<"Class:\n";
      cin>>Class;
      cout<<"Enter roll no:\n";
      cin>>Roll_number;
    
  }
  void StudentMarkDetails(){
        cout<<"Enter name of 1st subject:\n" ;
      cin>>Subject1;
      cout<<"Enter marks in "<<Subject1<<":"<<"\n";
      cin>>m1;
      cout<<"Enter name of 2nd subject:\n" ;
      cin>>Subject2;
       cout<<"Enter marks in "<<Subject2<<":"<<"\n";
        cin>>m2;
      cout<<"Enter name of 3rd subject:\n" ;
      cin>>Subject3;
       cout<<"Enter marks in "<<Subject3<<":"<<"\n";
        cin>>m3;
      cout<<"Enter name of 4th subject:\n" ;
      cin>>Subject4;
       cout<<"Enter marks in "<<Subject4<<":"<<"\n";
      cin>>m4;
      cout<<"Enter name of 5th subject:\n" ;
      cin>>Subject5;
       cout<<"Enter marks in "<<Subject5<<":"<<"\n";
        cin>>m5;
  }
  void DisplayStudentDetails(){
      cout<<"Student Name: "<<Name<<"\n";
      cout<<"Class: "<<Class<<"\n";
      cout<<"Roll Number: "<<Roll_number<<"\n"; 
  }
  void DisplayMarkdetails(){
      cout<<"1)"<<Subject1<<": "<<m1<<"\n";
      cout<<"2)"<<Subject2<<": "<<m2<<"\n";
      cout<<"3)"<<Subject3<<": "<<m3<<"\n";
      cout<<"4)"<<Subject4<<": "<<m4<<"\n";
      cout<<"5)"<<Subject5<<": "<<m5<<"\n";
      
  }
  
  void InsertNewMarks(){
      cout<<"Maximum of 3 subject's mark can be added more!\n";
      cout<<"Enter how many subjects is to be added(1-2): ";
      cin>>addedsubnum;
      switch(addedsubnum){
          case 1:
          cout<<"Enter 6th subject name:\n";
          cin>>Subject6;
          cout<<"Enter marks of"<<Subject6<<":"<<"\n";
          cin>>m6;
          break;
          case 2:
           cout<<"Enter 6th subject name:\n";
          cin>>Subject6;
          cout<<"Enter marks of"<<Subject6<<":"<<"\n";
          cin>>m6;
           cout<<"Enter 7th subject name:\n";
          cin>>Subject7;
          cout<<"Enter marks of "<<Subject7<<":"<<"\n";
          cin>>m7;
          break;
          default:
          cout<<"Invalid choice!!";
          break;
      }
     
  } 
  void DisplayNewMark(){
      cout<<"Progress card is updated!";
      DisplayStudentDetails();
      DisplayMarkdetails();
       cout<<Subject6<<": "<<m6<<"\n";
        cout<<Subject7<<": "<<m7<<"\n";
  }
  void DeleteMark(){
      int option;
   cout<<"Select which subject marks you have to delete:\n";
   DisplayMarkdetails();
   cout<<"\nSelect an option(1-5)";
   cin>>option;
   switch(option)
   {
       case 1:
       cout<<"1)"<<Subject2<<":"<<m2<<"\n2)"<<Subject3<<":"<<m3<<"\n3)"<<Subject4<<":"<<m4<<"\n4)"<<Subject5<<":"<<m5;
       break;

       case 2:
       cout<<"1)"<<Subject1<<":"<<m1<<"\n2)"<<Subject3<<":"<<m3<<"\n3)"<<Subject4<<":"<<m4<<"\n4)"<<Subject5<<":"<<m5;
       break;

       case 3:
       cout<<"1)"<<Subject1<<":"<<m1<<"\n2)"<<Subject2<<":"<<m2<<"\n3)"<<Subject4<<":"<<m4<<"\n4)"<<Subject5<<":"<<m5;
       break;

       case 4:
        cout<<"1)"<<Subject1<<":"<<m1<<"\n2)"<<Subject2<<":"<<m2<<"\n3)"<<Subject3<<":"<<m3<<"\n4)"<<Subject5<<":"<<m5;
       break;

       case 5:
         cout<<"1)"<<Subject1<<":"<<m1<<"\n2)"<<Subject2<<":"<<m2<<"\n3)"<<Subject3<<":"<<m3<<"\n4)"<<Subject4<<":"<<m4;
       break;
        
        default:
        cout<<"Invalid Option";
        break;
   }
   
  }
  void ModifyMark(){
      int op;
      cout<<"Which subject's mark you have to modify?\n";
      DisplayMarkdetails();
      cout<<"\nSelect 1 option";
      cin>>op;
      switch(op){
          case 1:
          cout<<"Enter new marks for "<<Subject1<<"\n";
          cin>>m1;
          cout<<"\n Marks have been updated for "<<Subject1<<"\n";
          DisplayMarkdetails();
          break;

        case 2:
          cout<<"Enter new marks for "<<Subject2<<"\n";
          cin>>m2;
          cout<<"\n Marks have been updated for "<<Subject2<<"\n";
          DisplayMarkdetails();
          break;

        case 3:
          cout<<"Enter new marks for "<<Subject3<<"\n";
          cin>>m3;
          cout<<"\n Marks have been updated for "<<Subject3<<"\n";
          DisplayMarkdetails();
          break;

        case 4:
          cout<<"Enter new marks for "<<Subject4<<"\n";
          cin>>m4;
          cout<<"\n Marks have been updated for "<<Subject4<<"\n";
          DisplayMarkdetails();
          break;
 
        case 5:
          cout<<"Enter new marks for "<<Subject5<<"\n";
          cin>>m5;
          cout<<"\n Marks have been updated for "<<Subject5<<"\n";
          DisplayMarkdetails();
          break;

        default:
          cout<<"Invalid option";
          break;

      }


  }
 
};
int main()
{ 
    int need,i;
    student a;
    a.StudentDetails();
    a.StudentMarkDetails();
    for(i=0;i<6;i++)
    {
      cout<<"--------Student Menu--------\n";
      
      cout<<"1-->Insert new marks\n2-->Delete existing mark\n3-->Modify existing marks\n4-->Display Student data\n5-->Exit\n Select your need:";
       cin>>need;
       cout<<"***************************************************************\n";
       switch(need){
           case 1:
           a.InsertNewMarks();
           a.DisplayNewMark();
           break;
           case 2:
          a.DeleteMark();
          break;
           case 3:
           a.ModifyMark();
           break;
           case 4:
          a.DisplayStudentDetails();
          a.DisplayMarkdetails();
           break;
           case 5:exit(0);
           default :
           cout<<"Invalid Choice!!";
           break;
       }
    
       cout<<"\n******************************************************************";
    }  
   return 0;
}


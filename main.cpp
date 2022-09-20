#include <iostream>
#include<conio.h>
#include <fstream>
using namespace std;
int main()
{
     while(1){
      cout<<"******* SECURITY SYSTEM PROGRAM *******";
    cout<<endl<<endl<<"***************************************"<<endl;
    cout<<"* 1 ->       change the password      *"<<endl;
    cout<<"* 2 ->       change the name      *"<<endl;
    cout<<"* 3 ->  go to login panel to see data *"<<endl;
    cout<<"* 4 ->       quit the program         *"<<endl;
    cout<<"***************************************"<<endl<<endl;
    cout<<"enter your choice :- ";
      int n,c=0;
      string mainpass,oldfirstname,oldlastname;
      cin>>n;
      if(n==1){
      ifstream outf;
            outf.open("password.txt");
         while(outf.is_open())//jotokkhn na close hoy cholte thakbe
            {
               cout<<"Enter old password : ";
          string old;
          cin>>old;
             outf>>mainpass;
               if(old==mainpass){
                         cout<<"Password should be in 50 letters!\n";
                  ofstream newpassword;
                  newpassword.open("password.txt");
                  cout<<"Enter new Password: ";
                  string newp;
                  cin>>newp;
                  cout<<"Enter new Password again: ";
                   string new1;
                  cin>>new1;
                  if(new1==newp){
                         outf.close();
                        newpassword<<new1;
                         newpassword.close();
                    cout<<"Password change successfully\n";
                  }
                  else{
                    cout<<"Something went wrong.Try again.\n";
                  }
               }
                else{
               cout<<"Sorry,your old password is not right.   Try Again.\n";
          }
            }
      }
      else if(n==2){
           ifstream firstnamefile;
            firstnamefile.open("firstname.txt");
         while(firstnamefile.is_open())//jotokkhn na close hoy cholte thakbe
            {
               cout<<"Enter old firstname : ";
          string firstname;
          cin>>firstname;
             firstnamefile>>oldfirstname;
               if(firstname==oldfirstname){
                  ofstream newfirstnamefile;
                  newfirstnamefile.open("firstname.txt");
                  cout<<"Enter new firstname : ";
                  string newfirstname;
                  cin>>newfirstname;
                  cout<<"Enter new firstname again: ";
                   string newfirstname1;
                  cin>>newfirstname1;
                  if(newfirstname1==newfirstname){
                         firstnamefile.close();
                        newfirstnamefile<<newfirstname;
                         newfirstnamefile.close();
                    cout<<"Firstname change successfully\n";
                  }
                  else{
                    cout<<"Something went wrong.Try again.\n";
                  }
               }
                else{
               cout<<"Sorry,your old name is not right.   Try Again.\n";
          }
            }
            ifstream lastnamefile;
            lastnamefile.open("lastname.txt");
         while(lastnamefile.is_open())//jotokkhn na close hoy cholte thakbe
            {
               cout<<"Enter old lastname : ";
          string lastname;
          cin>>lastname;
             lastnamefile>>oldlastname;
               if(lastname==oldlastname){
                  ofstream newlastnamefile;
                  newlastnamefile.open("lastname.txt");
                  cout<<"Enter new lastname : ";
                  string newlastname;
                  cin>>newlastname;
                  cout<<"Enter new lastname again: ";
                   string newlastname1;
                  cin>>newlastname1;
                  if(newlastname1==newlastname){
                         lastnamefile.close();
                        newlastnamefile<<newlastname;
                         newlastnamefile.close();
                    cout<<"Lastname change successfully\n";
                  }
                  else{
                    cout<<"Something went wrong.Try again.\n";
                  }
               }
                else{
               cout<<"Sorry,your old name is not right.   Try Again.\n";
          }
            }


      }
      else if(n==3){
           bool ok;
           ifstream firstnamefile;
           firstnamefile.open("firstname.txt");
           while(firstnamefile.is_open()){
               cout<<"Enter your firstname : ";
               string firstname;
               cin>>firstname;
               firstnamefile>>oldfirstname;
               if(oldfirstname==firstname){
                    ok=true;
                    ifstream lastnamefile;
           lastnamefile.open("lastname.txt");
              while(lastnamefile.is_open()){
                    cout<<"Enter your lastname : ";
               string lastname;
               cin>>lastname;
               lastnamefile>>oldlastname;
               if(oldlastname==lastname){
                    ok=true;
              lastnamefile.close();
              firstnamefile.close();
               }
               else{
               cout<<"Incorrect lastname\n.";
               }
               }
               }
               else{
               cout<<"Incorrect firstname\n.";
               }
              }
          ifstream oldpass;
      oldpass.open("password.txt");
  while(oldpass.is_open()){
          cout<<"Enter your password : ";
  string password="";
  char ch;
  ch = _getch();
   while(ch != 13){//character 13 is enter
      password.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   cout<<endl;
          oldpass>>mainpass;
          if(password==mainpass){
               ok=true;
               oldpass.close();
          }
          else{
               cout<<"Incorrect password\n.";

          }
  }
  if(ok){
          cout<<endl;
     cout<<"--------------Welcome------------\n";
      cout<<"####### Your information ########";
    cout<<endl<<endl<<"################################"<<endl;
  cout<<"\tName : "<<oldfirstname<<" "<<oldlastname<<endl;
  cout<<"\tPassword : "<<mainpass<<endl;
   cout<<"################################"<<endl;
  }
      }
      else if(n==4){
                cout<<"You Quit the Program\n";
               cout<<"Thank you\n";
          return 0;
      }
      else{
       cout<<"Enter valid choice.\n";
      }
    }
}

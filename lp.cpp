#include<iostream>
using namespace std;
class Register {
public:
    string username, password;
};
class login{
public:
    string inputUsername, inputPassword;
};
int main(){
    Register newUser, newPassword;
    cout<<"Register new id";
    cout<<"\nEnter username:-";
    cin>>newUser.username;
    cout<<"\nEnter Password:-";
    cin>>newPassword.password;
    cout<<"";
login newLogin;
cout<<"\nUsername:-";
cin>>newLogin.inputUsername;
cout<<"\nPassword:-";
cin>>newLogin.inputPassword;
if(newLogin.inputUsername==newUser.username && newLogin.inputPassword==newPassword.password)
    {
    cout<<"\nLogged in Successfully.";
}
else{
    cout<<"\nLogin failed. Please try again later.";
}
}

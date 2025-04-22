#include <iostream>

using namespace std;

class clsPerson
{

private:

    int _ID = 10;
    string _FirstName;
    string _LastName;
    string _FullName;
    string _Email;
    string _Phone;


public:

    clsPerson(int ID, string FirstName , string LastName , string Email , string Phone)
    {
         _ID = ID;
         _FirstName = FirstName;
         _LastName = LastName;
         _FullName = FirstName + " " + LastName;
         _Email = Email;
         _Phone = Phone;
    }

    int ID()
    {
        return _ID;
    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string FirstName()
    {
        return _FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string LastName()
    {
        return _LastName;
    }

    void SetFullName()
    {
        _FullName = _FirstName + " " + _LastName;
    }

    string FullName()
    {
        return _FullName;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }

    string Email()
    {
        return _Email;
    }

    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    string Phone()
    {
        return _Phone;
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe following message sent successfully to email: " << _Email;
        cout << "\nSubject: " << Subject;
        cout << "\nBody: " << Body;
    }

    void SendSMS(string Body)
    {
        cout << "\n\nThe following message sent successfully to Phone: " << _Phone << endl;
        cout << Body << endl;
    }

    void Print()
    {
        cout << "\nInfo:\n";
        cout << "\n---------------------------";
        cout << "\nID       : " << _ID;
        cout << "\nFirstName: " << _FirstName;
        cout << "\nLastName : " << _LastName;
        cout << "\nFull Name: " << _FullName;
        cout << "\nEmail    : " << _Email;
        cout << "\nPhone    : " << _Phone << endl;
        cout << "\n---------------------------\n";
    }

};

int main()
{

    clsPerson Person1(10 , "Islam" , "Ahmed" , "My@gmail.com" , "01092058985");
    Person1.Print();

    Person1.SendEmail("Hi", "How are you?");
    Person1.SendSMS("How are you?");

    system("pause > 0");
    return 0;
}

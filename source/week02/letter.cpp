#include "../std_lib_facilities.h"

int main() {
    
    cout << "Enter your name" << endl;
    string my_name;
    cin >> my_name;

    cout << "Enter the name of the person you want to write to" << endl;
    string first_name;
    cin >> first_name;

    cout << "Enter the name of your friend" << endl;
    string friend_name;
    cin >> friend_name;

    cout << "Enter an 'm' if the friend is male and an 'f' if the friend is female" << endl;
    char friend_sex = 0;
    cin >> friend_sex;

    cout << "Enter the recipients age" << endl;
    int age;
    cin >> age;
        if(age <= 0 || age >= 110)
            simple_error("you're kidding!");
        
    
    cout << "Dear " << first_name << "," << endl;
    cout << endl;
    cout << "How are you? I am fine. I miss you. I have great news. We should meet soon. " << endl;
    cout <<  "Have you seen " << friend_name << " lately?" << endl;

        if(friend_sex == 'm')
            cout << "If you see " << friend_name << " please ask him to call me" << endl;
        if(friend_sex == 'f')
            cout << "If you see " << friend_name << " please ask her to call me" << endl;

    cout << "I hear you just had a birthday and you are " << age << " years old." << endl;
        if(age < 12)
            cout << "Next year you will be " << age+1 << "." << endl;
        if(age == 17)  
            cout << "Next year you will be able to vote." << endl;
        if(age > 70)
            cout << "I hope you are enjoying retirement." << endl;

    cout << "Yours sincerely," << endl;
    cout << endl;
    cout << endl;
    cout << my_name << endl;

    return 0;
}
#include <iostream>

using namespace std;

void print_calculator(void){
    cout<<"Welcome to the calculator!"<<endl;
    cout<<"1.Add"<<endl;
    cout<<"2.Subtract"<<endl;
    cout<<"3.Multiply"<<endl;
    cout<<"4.Divide"<<endl;
    cout<<"5.Modulus"<<endl;
    cout<<""<<endl;
}
void calculator() {

    unsigned int choice;
    int nr1, nr2;
    int result;
    char continue_calculator;

    continue_calculator = 'y';
    print_calculator();

    while(continue_calculator == 'y'){
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;

        if(choice != 1 || choice != 2 || choice != 3 || choice != 4 || choice != 5)        {
            cout<<"Please input a valid choice. "<<endl;
            cin>>choice;
        }

        cout<<"Enter your two numbers: ";
        cin>>nr1>>nr2;
        cout<<endl;

        result = 0;

        if(choice == 1) {
            result = nr1 + nr2;
        } else

            if(choice == 2) {
                result = nr1 - nr2;
            } else
                if(choice == 3) {
                    result = nr1 * nr2;
                } else
                    if(choice == 4) {
                        result = nr1 / nr2;
                    } else
                        if(choice == 5) {
                            result = nr1 % nr2;
                        }

        cout<<"Result: "<<result;

        cout<<endl<<"Continue? y/n"<<endl;
        cin>>continue_calculator;
    }
}



int main()
{
    cout << "Hello World!" << endl;
    calculator();
    return 0;
}

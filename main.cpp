#include <iostream>
#include<math.h>

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
void calculator(void) {

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

void ten_integers(void){ //could have done sorting first and after the occurrence
    int array[10];
    int min, max;
    int most_occurred;
    unsigned int max_count;
    unsigned count;
    int temp;

    cout<<"Please input 10 integers."<<endl;
    for (int i = 0; i<=9; i++)
        cin>>array[i];

    cout<<"The 10 integers are: "<<endl;
    for (int i = 0; i<=9; i++)
        cout<<array[i]<<"  ";

    cout<<"The smallest inputed integer is: ";
    min = array[0];
    for (int i = 1; i<= 9; i++)
        if(min > array[i])
            min = array[i];
    cout<<min<<endl;

    cout<<"The greatest inputed integer is: ";
    max = array[0];
    for (int i = 1; i<= 9; i++)
        if(max < array[i])
            max = array[i];
    cout<<max<<endl;

    for(int i=0;i<= 9;i++)
        {
            for(int j=i+1;j<= 9;j++)
            {
                if(array[i]>array[j])
                {
                    temp  = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }

    cout<<"The most occurred number: ";

    for (int i = 0; i<= 9; i++) {
        count = 1;
        for (int j = i + 1; j <= 9 ; j++) {
            if(array[i] == array [j])
                count++;
        }

        if (count > max_count) {
            max_count = count;
            most_occurred = array[i];
        }
    }
    cout<<most_occurred<<" with an occurrence of "<<max_count<<" times."<<endl;

}

void sort_int (void){
    int array[10];
    int temp;

    cout<<"Please input 10 integers."<<endl;
    for (int i = 0; i<=9; i++)
        cin>>array[i];

    cout<<"The 10 integers are: "<<endl;
    for (int i = 0; i<=9; i++)
        cout<<array[i]<<"  ";

    for(int i=0;i<= 9;i++)
        {
            for(int j=i+1;j<= 9;j++)
            {
                if(array[i]>array[j])
                {
                    temp  = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    cout<<endl<<"Sorted: ";
    for (int i = 0; i<=9; i++)
        cout<<array[i]<<"  ";

    cout<<endl<<"occurence: "<<endl;

}

void pascal_triangle(int rows) {
    int cnt;

    for (int i = 0; i< rows; i++){
        cnt = 1;

        for(int j=0; j<=i;j++) {
            cout<<cnt<<" ";
            cnt = (cnt*(i-j) / (j+1));
        }
        cout<<endl;
    }

}

int *find_max (int array[], int n) {
    int *max = array;

    for(int i = 1; i<n; i++){
        if(*max < *(max+i))
            *max = *(max+i);
    }
    return max;
}

int main()
{
   int n, i, *p;

   cout<<" Enter number of data values: ";
   cin>>n;

   cout<<endl;
   int array[n];


   cout<<"Please input 10 integers."<<endl;
   for (int i = 0; i<n; i++){
       cout<<"Enter value "<<i+1<<": ";
       cin>>array[i];
       cout<<endl;
    }
   cout<<"The 10 integers are: "<<endl;
   for (int i = 0; i<n; i++)
       cout<<array[i]<<"  ";
  //  calculator();

//    ten_integers();
//    sort_int();
//    pascal_triangle(5);

   p =find_max(array,n);
   cout<<"The max is: "<<*p;
   cout<<endl;

    return 0;
}

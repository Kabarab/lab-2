    #include <iostream>
    #include <cmath>
    #include <limits>
        using namespace std;

double get_double_value()
{
    double value;
    while (!(cin >> value))
    {
        cout << "Некорректное значение. Пожалуйста, введите число." << endl;
        cout << "Введите значение снова: " << endl;

        cin.clear();

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return value;
}
int get_int_value()
{
    int value;
    while (!(cin >> value))
    {
        cout << "Некорректное значение." << endl;
        cout << "Значение должно быть целым числом." << endl;
        cout << "Введите значение снова:" << endl;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return value;
}

    int main(){
        double  x,a,b,y,z,fi;
        int choise,w;
        w=0;
        cout << "enter z: " <<endl;
        z=get_double_value();
        cout << "enter a: " <<endl;
        a=get_double_value();
        cout << "enter b: " <<endl;
        b=get_double_value();


        if (z<1)
        {
            cout<<"так как z<1  x=z³+0,2"<<endl;

            x=pow(z,3)+0.2;
        }
        else
        {
            cout<<"так как z≥1  x=z+lnz"<<endl;
            x=z+log(z);
        }

        cout << "Промежуточное значение x = " << x << endl;
        while (true){
            if (w==0){
        cout<<"Выберите ϕ(x):"<<endl<<"1)2x;"<<endl<<"2)x²;"<<endl<<"3)х/3"<<endl;
        choise=get_int_value();

        switch (choise)
        {
            case 1:
                cout<<"ϕ(x)=2x"<<endl;
                fi=2.0*x;
                w=1;
                break;

            case 2:
                cout<<"ϕ(x)=x²"<<endl;
                    fi=pow(x,2);
                w=1;
                break;
            case 3:
                cout<<"ϕ(x)=х:3"<<endl;
                fi=x/3.0;
                w=1;
                break;

        default:
                cout<<"incorrect value"<< endl;
                w=0;
                break;

        }
            }
            else{
                break;
            }
        }
        y=2*a*pow(cos (pow(x,2)),3)+pow(sin(pow(x,3)),2)-b*fi;
        cout << "Итоговый результат y = " << y << endl;

        return 0;
    }

#include<iostream>
using namespace std;
class arthematics
{
private:
    float a,b;
public:
    void set_data(float a,float b){
        this->a=a;
        this->b=b;
    }
    float addition(float a,float b){
        return this->a+this->b;
    }
    float subtraction(float a,float b){
        return this->a-this->b;
    }
    float multiplication(float a,float b){
        return this->a*this->b;
    }
    float division(float a,float b){
        if(b!=0){
        return this->a / this->b;}
        else{
            return 0;
        }
    }
};
int main(){
    cout<<"\n\nTo progrm a calculator for basic operation\n\n";
    arthematics calulations;
    cout<<"Enter operation to perform\n";
    cout<<"(+)Add\n";
    cout<<"(-)Subtract\n";
    cout<<"(*)Multiply \n";
    cout<<"(/)Divide\n";
    float a,b;
    cout<<"\nEnter First Number : ";
    cin>>a;
    cout<<"\nEnter Second Number : ";
    cin>>b;
    cout<<"\nEnter Opertion Number : ";
    char op;
    cin>>op;
    calulations.set_data(a,b);
    switch (op)
    {
    case '+':
        cout<<"The addition of numbers are: "<<calulations.addition(a,b);
        break;
    case '-':
        cout<<"The subtraction of numbers are: "<<calulations.subtraction(a,b);
        break;
    case '*':
        cout<<"The multiplication of numbers are: "<<calulations.multiplication(a,b);
        break;
    case '/':
        cout<<"The division of numbers are: "<<calulations.division(a,b);
        break;
    
    default:
        cout<<"Invalid Operation";
        break;
    }
   return 0;
}

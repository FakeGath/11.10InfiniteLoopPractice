//Library that provides basic commands in c++
#include <iostream>

int main(){

    char operation;
    double operand1;
    double operand2;
    bool end{false};

    std::cout<<"Welcome to Awesome Calculator"<<std::endl;
    

    while (end == false)
    {
        std::cout<<"--------------------------------------------------------"<<std::endl;
        std::cout <<"what operation do you want help with_ "<<std::endl;
        std::cout << "+,-,*,/ are Supported. Please choose one and type below"<<std::endl;
        std::cout<<"Your operation: ";
        std::cin>> operation;

        if ((operation != '+')&&(operation != '-')&&(operation != '/')&&(operation != '*'))
        {
           std::cout<<"Operation: "<<operation<<" Not supported!"<<std::endl;
           continue;
        }
        

        std::cout<<std::endl;
        std::cout<<"please enter the two operands separated by a spave and hit enter: ";
        std::cin>>operand1>>operand2;
        std::cout<<std::endl;

        switch (operation)
        {
        case '+':
            std::cout<< operand1 << " + " << operand2 <<" = " << operand1+operand2<<std::endl;
            break;
        case '-':
            std::cout<< operand1 << " - " << operand2 <<" = " << operand1-operand2<<std::endl;
            break;
        case '/':
            std::cout<< operand1 << " / " << operand2 <<" = " << operand1/operand2<<std::endl;
            break;
        case '*':
            std::cout<< operand1 << " * " << operand2 <<" = " << operand1*operand2<<std::endl;
            break;
        
        default:
            break;
        }

        std::cout<<"Continue Y|N: ";

        char go_on;
        std::cin>>go_on;

        end = ((go_on == 'Y') || (go_on == 'y'))? false : true;
    }
    
    std::cout<<"Done helping you!!! ";
}
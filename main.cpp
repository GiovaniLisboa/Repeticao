#include <stdlib.h>
#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char **argv)
{
    int bomba = 10;
    char teste;
    
    while (true)
    {
        cout << "Contagem regressiva para a explosao: ";
        cout << bomba;
        cout << "\n";
        
        if (bomba == 0)
            {
                cout << "Cabum! \n \n";
                break;
            }
            
        bomba--;
    }
    
    bomba = 10;
    
    do
    {
        cout << "Contagem regressiva para a explosao: " << bomba << "\n";
        
        if (bomba == 0)
        {
            cout << "Cabum!\n";
        }
        
        if (bomba == 1 && teste != 's' && teste != 'n')
        {
            while (teste != 's' && teste != 'n')
            {
                cout << "Deseja desarmar a bomba? (S/N) ";
                cin >> teste;
            }
            if (teste == 's')
            {
                cout << "Bomba desarmada.";
            }
            else
            {
                cout << "Bomba\n";
                bomba--;
                cout << bomba << '\n';
                //continue;
            }
        }
        
        if (teste == 'n')
            continue;
        
        bomba--;
        
    } while (bomba > 0);
    
    cout << "\n";
    return 0;
}

#include <iostream>

using namespace std;

int marks_scored;

int main()
{

    cout<<"Please enter your exams score\n ";
    cin>> marks_scored;

    switch( marks_scored)
    {
        case 100:
        case 99:
        case 98:
        case 97:
        case 96:
        case 95:
        case 94:
        case 93:
        case 92:
        case 91:
        case 90:
        case 89:
        case 88:
        case 87:
        case 86:
        case 85:
        case 84:
        case 83:
        case 82:
        case 81:
        case 80:
        cout<< "Grade A"<< " with GPT 12 \n";
        break;

        case 79:
        case 78:
        case 77:
        case 76:
        case 75:
        cout<<"Grade B+"<< " with GPT 10.5 \n";
        break;

        case 74:
        case 73:
        case 72:
        case 71:
        case 70:
        cout<<"Grade B"<< " with GPT 9 \n";
        break;

        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        cout<<"Grade C+"<<" with GPT 7.5 \n";
        break;

        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        cout <<"Grade C"<< " with GPT 6.0 \n";
        break;

        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        cout<<"Grade D+"<< " with GPT 4.5 \n ";
        break;

        case 54:
        case 53:
        case 52:
        case 51:
        case 50:
        cout<<"Grade D"<< " with GPT 3.0 \n";
        break;

        case 49:
        case 48:
        case 47:
        case 46:
        case 45:
        cout<<"Grade E"<< " with GPT 1.5 \n ";
        break;

        case 44:
        case 43:
        case 42:
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 35:
        case 34:
        case 33:
        case 32:
        case 31:
        case 30:
        case 29:
        case 28:
        case 27:
        case 26:
        case 25:
        case 24:
        case 23:
        case 22:
        case 21:
        case 20:
        case 19:
        case 18:
        case 17:
        case 16:
        case 15:
        case 14:
        case 13:
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
        cout<<"Grade F"<< " with GPT 0 \n ";
        break;

      default:
        cout<< "invalid \n ";



    }

    return 0;
}

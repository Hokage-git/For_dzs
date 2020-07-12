#include <iostream>

using namespace std;

class BOTTLE {
private:
    double lit;
    string producer;
    string material;
public:
    BOTTLE() {
        lit = 0;
    }

    BOTTLE(double _lit,string _producer,string _material) {
        lit = _lit;
        producer = _producer;
        material = _material;
    }
    
    BOTTLE(const BOTTLE& arg) {
        lit = arg.lit;
        producer = arg.producer;
        material = arg.material;
    }

    ~BOTTLE() {
        
    }

    BOTTLE operator+(const BOTTLE& arg) {
        if (material == arg.material) {
            BOTTLE tmp;
            tmp.lit = lit + arg.lit;
            tmp.material = material;
            tmp.producer = "You";
            return tmp;
        }
        else {
            BOTTLE v0id;
            cout << "\n\nERROR: MATERIALS ARE NOT THE SAME\n\n";
            return v0id;
        }
    }

    BOTTLE operator-(const BOTTLE& arg) {
        if (material == arg.material) {
            BOTTLE tmp;
            tmp.lit = (lit > arg.lit) ? lit - arg.lit : arg.lit - lit;
            return tmp;
        }
        else {
            BOTTLE v0id;
            cout << "\n\nERROR: MATERIALS ARE NOT THE SAME\n\n";
            return v0id;
        }
    }

    friend istream& operator>>(istream& stream, BOTTLE& arg) {
        printf("Material: ");
        stream >> arg.material;
        printf("Liter: ");
        stream >> arg.lit;
        printf("Producter: ");
        stream >> arg.producer;
        return stream;
    }

    friend ostream& operator<<(ostream& stream, const BOTTLE& arg) {
        stream << "Material: " << arg.material << endl;
        stream << "Liter: " << arg.lit << endl;
        stream << "Producter: " << arg.producer << endl;
        return stream;
    }

};

int main()
{
    BOTTLE first;
    BOTTLE sec{ 1.5,"Svjatoy Istochnik","Plastik" };
    BOTTLE third{ 2,"Bon Aqua","Plastik" };
    BOTTLE fourth = sec;

    BOTTLE fifth = sec + fourth;
    BOTTLE sixth = sec - third;

    cout << fifth;
    cin >> first;
}
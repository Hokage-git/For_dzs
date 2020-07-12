#include <iostream>

using namespace std;

class Box {
private:
    unsigned int length;
    unsigned int width;
    unsigned int height;
    unsigned int volume;
    string material;
public:
    Box() {
        length = 0;
        width = 0;
        height = 0;
        volume = 0;
       // cout << "def constuctor" << endl;
    }

    Box(int lenght, int width,int height,string material) {
        this->length = lenght;
        this->width = width;
        this->height = height;
        this->material = material;
        volume = find_volume();
       // cout << "user constuctor" << endl;
    }

    Box(Box& copy) {
        length = copy.length;
        width = copy.width;
        height = copy.height;
        material = copy.material;
        volume = copy.volume;
    }

    ~Box() { //cout << "destructor" << endl;
    }

    unsigned int find_volume() {
        return length * width * height;
    }

    friend ostream& operator<<(ostream& stream, const Box& arg) {
        stream << "Высота: " << arg.height << endl;
        stream << "Длина: " << arg.length << endl;
        stream << "Ширина: " << arg.width << endl;
        stream << "Материал: " << arg.material << endl;
        stream << "Объём: " << arg.volume;
        stream << endl << endl;
        return stream;
    }

    friend istream& operator>>(istream& stream, Box& arg) {
        printf("Высота: ");
        stream >> arg.height;
        printf("Длина: ");
        stream >> arg.length;
        printf("Ширина: ");
        stream >> arg.width;
        printf("Материал: ");
        stream >> arg.material;
        arg.volume = arg.find_volume();
        return stream;
    }

    Box operator+(const Box& arg) {
        if (material == arg.material) {
            Box temp;
            temp.height = height + arg.height;
            temp.width = width + arg.width;
            temp.length = length + arg.length;
            temp.material = material;
            temp.volume = temp.find_volume();
            return temp;
        }
        else {
            Box v0id;
            cout << "\n\nERROR: MATERIALS ARE NOT THE SAME\n\n";
            return v0id;
        }
    }

    Box operator-(const Box& arg) {
        if (material == arg.material) {
            Box temp;
            temp.height = (height > arg.height) ? height - arg.height : arg.height - height;
            temp.width = (width > arg.width) ? width - arg.width : arg.width - width;
            temp.length = (length > arg.length) ? length - arg.length : arg.length - length;
            temp.material = material;
            temp.volume = temp.find_volume();
            return temp;
        }
        else {
            Box v0id;
            cout << "\n\nERROR: MATERIALS ARE NOT THE SAME\n\n";
            return v0id;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "rus");
    Box first{ 3,3,4,"Картон"};
    Box sec{ 23,12,42,"Картон"};
    Box third;
    cout << first;
    cout << sec;
    third = first - sec;
    cout << third;
   //cin >> third;
   //cout << third;
}

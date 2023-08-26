#include <iostream>
#include <string>
#include <array>

using namespace std;

// function prototype
int sum(int a, int b);

// public class with method
class HelloWorld
{
public:
    void printHello()
    {
        std::cout << "Goodbye ";

        // we can remove std if 'using namespace std;' above
        cout << "world\n";
    }
};

int main()
{
    // create class instance or object and do the method
    HelloWorld objek;
    objek.printHello();

    // variable initialization
    int age = 0;
    int res;
    string address;
    string hobbies[5] = {"belajar"};

    // accept input from console
    printf("Input your second hobby: ");
    cin >> hobbies[1];
    cout << "Great, your new hobby " << hobbies[1] << "!" << endl;

    // accept input from console (2)
    printf("Input your age: ");
    res = scanf("%d", &age); // use the reference (&) to age

    if (res > 0)
    {
        printf("Your age is %d\n", age);
    }
    else
    {
        printf("wrong input");
    }

    // clean the newline from buffer
    getchar();

    // accept input from console (3)
    printf("Address: ");
    getline(cin, address);
    cout << "Your home is at " << address << endl;

    // print the array size byte
    cout << "Array size byte:" << sizeof(hobbies) << endl; // 160

    // print the array len items
    cout << "Array len:" << sizeof(hobbies) / sizeof(*hobbies) << endl; // 5

    // another way to declare array
    array<string, 5> names = {"Ali", "Abi", "Ami", "Mia", "Nia"};
    printf("There are %lu items: \n", names.size());
    for (int i = 0; i < names.size(); i++)
    {
        cout << i << ". " << names[i] << endl;
    }

    // call a function
    printf("The sum of 3 + 1 = ");
    printf("%d\n", sum(3, 1));

    // static variable
    // this var doesn't take effect the env block
    // end of this section output:
    // int    = 1
    // static = 10
    for (int i = 0; i < 10; i++)
    {
        int hitung = 0;
        static int s_hitung = 0;
        cout << "int    = " << ++hitung << endl;
        cout << "static = " << ++s_hitung << endl
             << endl;
    }

    return 0;
}

int sum(int c, int d)
{
    return c + d;
};

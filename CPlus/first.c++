//Hello Print
#include <iostream>
using namespace std;
int main() {
    cout<<"Hello!";
}

//Multiple line code
#include <iostream>
using namespace std;
int main() {
    cout<<"Kritika";
    cout<<"\n";
    cout<<"Meenu";
}

#include <iostream>
using namespace std;
int main() {
    cout<<"Hello!"<<endl<<"Hii!"
}

//Increment and Decrement
#include <iostream>
using namespace std;
int main() {
    int x;
    x = 4;
    x++;
    cout<<x<<endl; //5
    ++x;
    cout<<x;   //5
}

#include <iostream>
using namespace std;
int main() {
    int x;
    x = 4;
    x--;
    cout<<x<<endl; //3
    --x;
    cout<<x;   //3
}

#include <iostream>
using namespace std;
int main() {
    int x;
    x = 4;
    cout<<x++<<endl; //4
    cout<<++x;   //5
}

#include <iostream>
using namespace std;
int main() {
    int x;
    x = 4;
    cout<<x--<<endl; //4
    cout<<--x;   //3
}

//User Input
#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    cout<<x*x;
}
//Data Types
//Int dtype
#include <iostream>
using namespace std;
int main() {
    int x = 5, y = 2;
    cout<<x/y;   //2
}

//Float dtype
#include <iostream>
using namespace std;
int main() {
    float x = 5;
    float y = 2;
    cout<<x/y;   //2.5
}
//char dtype
#include <iostream>
using namespace std;
int main() {
    char ch = 'a';
    cout<<ch;
}

//ASCII
#include <iostream>
using namespace std;
int main() {
    char ch;
    cin>>ch;
    cout<<(int)ch;   //character to int
}

#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    cout<<(char)x;      //int to character
}               




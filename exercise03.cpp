#include <iostream>

using namespace std;
struct box{int Heigth, Width, Length;};

int volume(int Heigth, int Width, int Length);

int main() {
    
  box b1,b2;
  int totalVolume;
    
    cout << "Enter Box 1 Height : ";
    cin >> b1.Heigth;
    cout << "Enter Box 1 Width : ";
    cin >> b1.Width;
    cout << "Enter Box 1 Length : ";
    cin >> b1.Length;
    
    cout <<endl<<"Enter Box 2 Height : ";
    cin >> b2.Heigth;
    cout << "Enter Box 2 Width : ";
    cin >> b2.Width;
    cout << "Enter Box 2 Length : ";
    cin >> b2.Length;
    

    totalVolume = volume( b1.Heigth,b1.Width ,b1.Length )+volume( b2.Heigth,b2.Width ,b2.Length );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
int volume(int Heigth,int Width,int Length )
{
  return Heigth*Width*Length;
}


    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
int volume(int Height,int Wdith,int Length )
{
  return heigth*width*length;
}


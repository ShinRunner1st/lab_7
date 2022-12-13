#include<iostream>
#include<cmath>

using namespace std;

int adiff (int x, int y){
  int z;
  if(x > 360){
    while(x > 360){
      x -= 360;
    }
  }
  if(x < 0){
  while(x < 0){
    x += 360;
    }
  }
  if(y > 360){
    while(y > 360){
      y -= 360;
    }
  }
  if(y < 0){
    while(y < 0){
      y += 360;
    }
  }
  //ด้านล่างนี้โคตรมั่ว
  if(abs(x) - abs(y) > 180){
    z = 360 - abs(x - y);
  }else if(abs(y) - abs(x) > 180){
    z = 360 - abs(y - x);
  }else if(abs(y) > abs(x)){
    z = abs(y - x);
  }else{
    z = abs(x - y);
  }
  return z;
}

int main(){
  cout << adiff(180,270);
  cout << endl;
  cout << adiff(210,45);
  cout << endl;
  cout << adiff(0,360);
  cout << endl;
  cout << adiff(10,350);
  cout << endl;
  cout << adiff(95,260);
  cout << endl;
  cout << adiff(90,-90);
  cout << endl;
  cout << adiff(1000,280);
  cout << endl;
  cout << adiff(60,244);
}

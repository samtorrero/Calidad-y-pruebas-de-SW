#include<iostream>
using namespace std;

class Sort {
public:
  virtual int[] sort();
};

class Sort1 : public Sort {
public:
  int[] sort(){
    //declaring array
    int array[5] = {32, 12, 45, 2, 23};

    // Bubble Sort Starts Here
    int temp;
    for(int i2=0; i2<=4; i2++) {
      for(int j=0; j<4; j++) {
        //Swapping element in if statement
        if(array[j]>array[j+1]) {
          temp=array[j];
          array[j]=array[j+1];
          array[j+1]=temp;
        }
      }
    }
    // Displaying Sorted array
    cout<<"  Sorted Array is: "<<endl;
    for(int i3=0; i3<5; i3++) {
      cout<<"Value at "<<i3<<" Index: "<<array[i3]<<endl;
    }
    return 0;
  }
};

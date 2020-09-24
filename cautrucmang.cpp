#include <iostream>

using namespace std;

const int Max = 100;
typedef int item_type;
class list{
  private:
    item_type item[Max];
    int size;
  public:
    list(){
      size = 0;
    }
    void push_front(item_type newItem){
      if(size < Max){
        for(int i = size; i > 0; i--)
          item[i]=item[i-1];
          item[0]=newItem;
          size ++;
      }
      else 
        cout<<"full"<<endl;
    }
    void pop_front(){
      if(size > 0){
        for(int i=1;i<size;i++)
          item[i-1]=item[i];
          size--;
      }
      else{
        cout<<"list empty"<<endl;
      }
    }
    void push_back(item_type newItem){
      if(size < Max){
        item[size]=newItem;
        size++;
      }
      else {
        cout<<"list full"<<endl;
      }
    }
    void pop_back(){
      if(size > 0){
        size--;
      }
      else 
        cout<<"list empty"<<endl;
    }
    void insert(int index, item_type newItem){
      if(index < 0 || index > size){
        cout<<"index not available"<<endl;
      }
      else{
        for(int i=size;i>=index;i--){
          item[i]=item[i-1];
          item[index-1]=newItem;
          size++;
        }
      }
    }
    void remove(int index){
      if(index < 0||index>size){
        cout<<"index not available"<<endl;
      }
      else {
        if(size > 0){
          for(int i = index;i<size;i++)
            item[i-1]=item[i];
            size--;
        }
        else{
          cout<<"list empty"<<endl;
        }
      }
    }
    void printList(){
      for(int i=0;i<size;i++){
        cout<<item[i]<<" "<<endl;
      }
    }
    
};
int main(){
  list ds;
  ds.push_front(1);
  ds.push_back(2);
  ds.insert(2,1);
  ds.printList();



  return 0;
}


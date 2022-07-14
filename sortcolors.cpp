#include <iostream>
#include<list>

using namespace std;


void display(list<int> &lst){
    list<int> :: iterator iter;
    for(iter=lst.begin();iter!=lst.end();iter++){
     cout<<*iter<<" ";   
    }
    cout<<endl;
}

int main()
{
  int size,element;
  list<int>l1;
  cout<<"Enter the size:";
  cin>>size;
  for(int i=0;i<size;i++){
      cout<<"Enter the element";
      cin>>element;
      l1.push_back(element);
  }
  display(l1);
  l1.sort();
  display(l1);

    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
#include "Queue.h"

int main(int argc , char **argv) {
  Queue q;
   int i,x;
   

 for(i=1;i<argc;i++){
      int price,cash;
        if(strcmp(argv[i],"x")==0){
            price=q.dequeue();
            cout<<"You have to pay "<<price<<endl;
            /* 1.Ask the customer to pay*/

            cout<<"=============="<<endl;

        }
        else {

           /* 2.MODIFIED enqueue here to take in 2 info at a time*/
            q.enqueue(atoi(argv[i]));
         
           
        }
 }
  return 0;
}

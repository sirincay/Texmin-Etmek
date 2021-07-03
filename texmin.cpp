#include <iostream> // Kitabxanaları Daxil Edirik
#include <conio.h>
#include <stdlib.h>
#include <time.h>
 
using namespace std;
 
int main()
{
int randomreqem,istifadecireqem; // Deyerleri menimsedirik
srand(time(NULL));
randomreqem=rand()%100;
 
 
do{
cout<<"Aglimdaki Reqemi Texmin Et! ";  // Deyerleri yaziriq
cin>>istifadecireqem;
if(istifadecireqem>randomreqem)
cout<<"Biraz asagi"<<endl;
else if(istifadecireqem<randomreqem)
cout<<"Biraz yuxari"<<endl;
else
break;
}
while(randomreqem!=istifadecireqem);
 
cout<<"\n-_- Tebrikler Tapdiniz -_-";
 
return 0;
}

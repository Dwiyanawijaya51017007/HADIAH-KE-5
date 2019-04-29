#include <iostream.h>
#include <conio.h>

main(){
int nilai,jumlah,Y;
cout <<"Masukkan nilai = "; cin>>nilai;
jumlah=0;
	for(Y=1; Y<=nilai;Y++)
   if (nilai % Y == 0)

   jumlah++;
   if (jumlah == 2 )
   cout<<"nilai yang anda input bilangan prima \n";
   else
   cout<<"nilai yang anda input bukan bilangan prima \n";
getch();}

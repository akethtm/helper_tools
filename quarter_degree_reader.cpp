#include <iostream>
#include <fstream>
using namespace std;

int main () 
{
  int wet_data[240][360],i,j; //longitude and latitude
  //int count = 1;
  fstream infile;
  infile.open ("wet_data_c");
  for(i=0;i<240;i++)
   for(j=0;j<360;j++)
   {
           infile >> wet_data[i][j];
           //cout << wet_data[i][j];
           //cout << " " << count << endl;
           //count++;
   }
 
  for(i=170;i>141;i--)
  {
   for(j=181;j<212;j++)
    {
     if(wet_data[i][j] == 1) 
       { 
               cout << "o";
       }
     else
       {
               cout << ".";      
       }
    }
    cout << " " << i+1 << endl;
   }
  infile.close();
  return 0;
}

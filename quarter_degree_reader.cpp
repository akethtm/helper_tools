#include <iostream>
#include <fstream>
using namespace std;

int main () 
{
  int wet_data[240][360],i,j; //longitude and latitude
  int lat_start;
  int lat_end;
  int lon_start;
  int lon_end;
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

   while(1)
   {
          cout << endl;
          cout << "enter lat_start and lat_end" << endl;
          cin >> lat_start;
          cin >> lat_end;
  
          cout << "enter lon_start and lon_end" << endl;
          cin >> lon_start;
          cin >> lon_end;

          lat_start = lat_start - 1;
          lat_end = lat_end - 1;   

          lon_start = lon_start - 1;
          lon_end = lon_end - 1;
 
          for(i=lat_end;i>=lat_start;i--)
          {
              for(j=lon_start;j<=lon_end;j++)
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
          for(j=lon_start;j<=lon_end;j++) cout << (j+1)%10;

   }
  infile.close();
  return 0;
}

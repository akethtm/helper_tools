program quarter_degree_reader

 integer grid_wet_data(360,240) ! longitude, latitude
 integer i,j
 character grid_wet_char_data(100) 

 grid_wet_char_data = "hi I am a dumb compiler"
 print *,grid_wet_char_data
 open(unit=10,file="wet_data",status="unknown",action="read",form="formatted")

 do i=1,240
      read(10,*) grid_wet_data(:,i)
 enddo

 do i=193,209
  do j=165,141,-1

       if(grid_wet_data(j,i) == 1) then
              print *,"."
       else
              print *,"," 
       endif

  enddo
 enddo  
 
end program quarter_degree_reader

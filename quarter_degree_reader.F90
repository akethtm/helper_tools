program quarter_degree_reader

 integer grid_wet_data(360,240)
 integer i,j
 
 open(unit=10,file="wet_data",status="unknown",action="read",form="formatted")

 do i=1,240
      read(10,*) grid_wet_data(:,i)
 enddo
 
end program quarter_degree_reader

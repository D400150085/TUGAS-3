#include <stdio.h>
#include <math.h>

int main () {
     //deklarasi variable
     //float a, b, c, d, X1, X2;
     //langsung di inisialisasi
     float a=0, b=0, c=0, D=0, X1=0, X2=0;
     
     // masukan nilai variable
     a=1; b=4; c=3 ;
      
          //periksa apakah a bernilai NOL
          if (a==0) 
		  {
          	printf ("Nilai a tidak boleh NOL \n");
          	return 0;  //keluar program
		  }
		  
		   else 
		   {
		  	D= (b*b)-(4*a*c);
		  	//bentuk yang lebih simple
		  	D= pow (b,2)-(4*a*c);
		  	
		  	if (D<0) {
		  		printf ("determinan D tidak boleh MINUS \n");
		  		return 0;
				   //keluar
			  } 
			  
			  else
			   {
			  	//menghitung akar-akar persamaan kuadrat
			  	X1 = (-b + sqrt(D))/(2*a);
			  	X2 = (-b - sqrt (D))/(2*a);
				}
			  
			  	//OUTPUT
			  	
			  	{
			
				printf  ("a= %f, b= %f, c= %f ,\n",a,b,c);
				 		("D=%f\n, a, b, c, d");
				
				  // %4.1F : angka float dicetak sebanyak 4 digit
				  //dan 1 digit dibelakang koma
				  
				  printf ("Akar X1 = %f\n", X1);
				  printf ("akar X2 = %f\n", X2);
			}
				  
				  
				  		  }
				  		      return 0;
		  }



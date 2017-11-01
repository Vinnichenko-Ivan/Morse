#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include<conio.h> 
                      
using namespace std;
 
int main() {
cout<<char(152);//	ø
cout<<char(136);//è
cout<<char(148);//ô
cout<<char(144);//ð
cout<<char(142);//î
cout<<char(130);//â
cout<<char(128);//à
cout<<char(141);//í
cout<<char(136);//è
cout<<char(133);//å


cout<<char(00);// 
cout<<char(141);//í
cout<<char(133);//å
cout<<char(129);//á
cout<<char(142);//î
cout<<char(139);//ë
cout<<char(133);//å
cout<<char(133);//å
cout<<char(00);// 
cout<<char(53);// 1
cout<<char(48);//0
cout<<char(48);//0
cout<<char(00);//  
cout<<char(145);//ñ
cout<<char(136);//è
cout<<char(140);//ì
cout<<char(130);//â
cout<<char(142);//î
cout<<char(139);//ë
cout<<char(142);//î
cout<<char(130);//â
cout<<endl;// 
cout<<char(130);//â
cout<<char(130);//â
cout<<char(133);//å
cout<<char(132);//ä
cout<<char(136);//è
cout<<char(146);//ò
cout<<char(133);//å
cout<<char(00);// 
cout<<char(138);//ê
cout<<char(142);//î
cout<<char(139);//ë
cout<<char(95);//-
cout<<char(130);//â
cout<<char(142);//î
cout<<char(00);// 
cout<<char(145);//ñ
cout<<char(136);//è
cout<<char(140);//ì
cout<<char(130);//â
cout<<char(142);//î
cout<<char(139);//ë
cout<<char(142);//î
cout<<char(130);//â
cout<<char(00);// 
	 int count_simvol;	
	 cin>>	 count_simvol;
	 cout<<char(00);// 



  
	 int i=0;
	 char simbol [500]={0};
	 while(count_simvol>i){
	 					  
	 					   cin>>simbol[i];
 					       i=i+1;
 					       
	 					   }
	  int d=0;
	  
	 while(count_simvol>d){	
	 int a;
	 i=d;
	 a=	simbol[i];										   
	 if	(a==-128|a==65|a==-96|a==97){
	 cout<<char(46);Beep(2000, 200);//.
	 cout<<char(45);Beep(1000, 600);//-			   
	 				   }	 
		 if	(a==-127|a==66|a==-95|a==98){
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.			   
	 				   }
			 if	(a==-126|a==87|a==-94|a==119){

	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-
		cout<<char(45);Beep(1000, 600);//-			   
	 				   }
    if	(a==-125|a==71|a==103|a==-93){


	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.		   
	 		   }	
	 if	(a==-124|a==68|a==-92|a==100){


	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.			   
  	 				   }
	
     if	(a==-123|a==69|a==101|a==-91){
    cout<<char(46);Beep(2000, 200);//.		   
	 				   }	
	
	 if	(a==-122|a==86|a==-90|a==118){
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-			   
	 		    	   }		
	 if	(a==-121|a==90|a==112|a==-89){
	 cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.			   
	 				   }	
	 if	(a==-120|a==73|a==-88|a==105){

	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.			   
	 				   	   }	
	  if	(a==-119|a==74|a==106|a==-87){
	cout<<char(46);Beep(2000, 200);//.												
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-			   
	 				   }////////////////////////////////////////////////////////////////////////////
						
		  if	(a==-118|a==75|a==-86|a==107){
											
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.	
	cout<<char(45);Beep(1000, 600);//-			   
	 				   }
		  if	(a==-117|a==76|a==108|a==-85){
	cout<<char(46);Beep(2000, 200);//.												
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.		   
	 				   }
		  if	(a==-116|a==77|a==-84|a==109){
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-		   
	 				   }
		  if	(a==-115|a==78|a==-83|a==110){
												
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.		   
	 				   }
		  if	(a==-114|a==79|a==111|a==-82){												
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-			   
	 				   }					
    	 				   
		  if	(a==-113|a==80|a==-81|a==112)
		  {												
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.			   
	 				   }
    	 if	(a==-112|a==82|a==-32|a==114){												
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.			   
	 				   }
    	if	(a==-111|a==83|a==99115|a==-31){												
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.		   
	 				   }
       	if	(a==-110|a==84|a==-30|a==116){												
	cout<<char(45);Beep(1000, 600);//-		   
	 				   }
        	if	(a==-109|a==85|a==121|a==-29){												
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//- 		   
	 				   }///////////////////////////////////////////////////////////
	        	if	(a==-108|a==70|a==-28|a==102){												
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//- 
	cout<<char(46);Beep(2000, 200);//.			   
	 				   }
						        	if	(a==-107|a==72|a==104|a==-27){												
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//. 		   
	 				   }
						        	if	(a==-106|a==67|a==99|a==-26){
	cout<<char(45);Beep(1000, 600);//- 																						
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//- 	
	cout<<char(46);Beep(2000, 200);//.			   
	 				   }
						        	if	(a==-105|a==-25){												
	cout<<char(45);Beep(1000, 600);//- 
	cout<<char(45);Beep(1000, 600);//- 
	cout<<char(45);Beep(1000, 600);//- 
	cout<<char(46);Beep(2000, 200);//.			   
	 				   }
						        	if	(a==-104|a==-24){												
	cout<<char(45);Beep(1000, 600);//- 
	cout<<char(45);Beep(1000, 600);//- 
	cout<<char(45);Beep(1000, 600);//- 	
	cout<<char(45);Beep(1000, 600);//- 		   
	 				   }
						        	if	(a==-103|a==-23|a==81|a==113){												
	cout<<char(45);Beep(1000, 600);//- 
	cout<<char(45);Beep(1000, 600);//- 
	cout<<char(46);Beep(2000, 200);//.	
	cout<<char(45);Beep(1000, 600);//-  			   
	 				   }
						        	if	(a==-102|a==-20|a==88|a==120){												
	cout<<char(45);Beep(1000, 600);//- 
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.	
	cout<<char(45);Beep(1000, 600);//- 			   
	 				   }
						        	if	(a==-101|a==89|a==121|a==89){												
	cout<<char(45);Beep(1000, 600);//- 
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-	
	cout<<char(45);Beep(1000, 600);//- 			   
	 				   }

						        	if	(a==-99|a==-19){												
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//- 
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.			   
	 				   }
						        	if	(a==-98|a==-18){												
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//- 	
	cout<<char(45);Beep(1000, 600);//- 
	
			   
	 				   }
 						        	if	(a==-97|a==-17){												
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//- 
	cout<<char(46);Beep(2000, 200);//.	
	cout<<char(45);Beep(1000, 600);//- ;			   
	 				   }///////////////////////
 						        	if	(a==49){												
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
		   
	 				   }
 						        	if	(a==50){												
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-			   
	 				   }
 						        	if	(a==51){												
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-			   
	 				   }
 						        	if	(a==52){												
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.	
	cout<<char(45);Beep(1000, 600);//-		   
	 				   }
 						        	if	(a==53){												

	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.	
	cout<<char(46);Beep(2000, 200);//.			   
	 				   }
 						        	if	(a==54){												
		cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.	
		   
	 				   }
 						        	if	(a==55){												
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-		   
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.	
	cout<<char(46);Beep(2000, 200);//.

	 				   }
 						        	if	(a==56){												
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-		  
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.	
 
	 				   }
 						        	if	(a==57){												
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.


			   
	 				   }
 						        	if	(a==48){												
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-			   
	 				   }
 						        	if	(a==46){												

	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.	
	cout<<char(46);Beep(2000, 200);//.	
	cout<<char(46);Beep(2000, 200);//.		   
	 				   }
 						        	if	(a==44){												

	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-	
	cout<<char(46);Beep(2000, 200);//.	
	cout<<char(45);Beep(1000, 600);//-	   
	 				   }
  						        	if	(a==59){												

	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-	
	cout<<char(46);Beep(2000, 200);//.	
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.	   
	 				   }
 						        	if	(a==58){												
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.		   
	 				   }
  						        	if	(a==63){												
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.		   
	 				   }
  						        	if	(a==33){												
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-		   
	 				   }
  						        	if	(a==45){												
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-		   
	 				   }
	 				     						        	if	(a==34){												

	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-	
	cout<<char(46);Beep(2000, 200);//.
	   
	 				   }
	 				     						        	if	(a==40|a==41){												

	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-
	cout<<char(45);Beep(1000, 600);//-	
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-
	   
	 				   }
	 				     						        	if	(a==47|a==92){												

	cout<<char(45);Beep(1000, 600);//-
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(46);Beep(2000, 200);//.
	cout<<char(45);Beep(1000, 600);//-	
	cout<<char(46);Beep(2000, 200);//.
	   
	 				   }
cout<<char(00);// 													
	 d=d+1;						
	Beep(00, 300);					
						
						
																			  
	
	
	
	
	
}


///////////////////////////////////

	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 					

getch();

}

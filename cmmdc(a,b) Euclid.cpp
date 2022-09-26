Cmmdc(a,b) matematic

54| 2		54 = 2^1 * 3^3
27|3
9|3
3|3
1


72|2		72 = 2^3 * 3^2
36|2
18|2
9|3
3|3
1

cmmdc(54,72)=2^1*3^2=2*9=18

Met I - scaderi
x=a; y=b;
 while(a!=b){
   if(a<b)  b=b-a;
   else 
      if(a>b)  a=a-b;		
 }
cout<<a;

a=54
b=72

a=54
b=72-54=18

a=54-18=36
b=18

a=36-18=18
b=18

cmmdc(a,b)=18


Met II - resturi
x=a; y=b;
while(b!=0){
  r = a%b;
  a = b;
  b = r;
}
cout<<a;







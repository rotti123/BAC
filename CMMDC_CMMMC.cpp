CMMDC(a,b)
CMMMC(a,b)= a*b/ cmmdc(a,b)

1) Algoritmul lui Euclid prin scaderi repetate

a=50		b=20
a=50-20=30
a=30-20=10
		b=20-10=10
while(a!=b){
	if(a>b)	a=a-b;
	else	b=b-a;
}
cout<<a;

2) Algoritmul lui Euclid prin restul impartirii

a=20 	b=50

r=a%b=20%50=20

a=b	a=50
b=r	b=20

r=50%20=10

a=b=20
b=r=10

r=a%b=20%10=0
a=b=10
b=r=0

while(b!=0){
	r=a%b;
	a=b;
	b=r;
}

CMMMC(a,b)= a*b/ cmmdc(a,b)





































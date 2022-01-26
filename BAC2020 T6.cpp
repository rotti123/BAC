///SII ex 1
i=1 	x=0	y=1		nr=1

i=2	
j=1	r=-1	x=1	y=-1

i=3
j=1	r=-1	x=1	y=-1
j=2	r= 3	x=-1	y= 3	nr=2

i=4
j=1	r=-1	x=1	y=-1
j=2	r= 3	x=-1	y= 3
j=3	r=-5 	x=3	y=-5

i=5
j=1	r=-1	x=1	y=-1
j=2	r= 3	x=-1	y= 3
j=3	r=-5 	x=3	y=-5
j=4	r=11	x=-5	y=11	nr=3
...
i=7
j=1	r=-1	x=1	y=-1
j=2	r= 3	x=-1	y= 3
j=3	r=-5 	x=3	y=-5
j=4	r=11	x=-5	y=11	

				R: nr=4
          
 SII ex 2
          x1=6, x2=10
          
///SIII ex 1
void prodprim(int n,int &p){
    int d=2;
    p=1;
    while(n>1){
        if(n%d==0){
            p=p*d;
        }
        while(n%d==0){
            n=n/d;
        }
        d++;
    }
}

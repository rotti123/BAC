SIII ex3

void duplicare(int &n){
    int nr=0, p=1, c;
    while(n>0){
      c=n%10;
      n=n/10;
      if(c%2==0){
        nr=nr+p*c;
        p*=10;

      }
      nr=nr+p*c;
      p*=10;
    }
    n=nr;

  }

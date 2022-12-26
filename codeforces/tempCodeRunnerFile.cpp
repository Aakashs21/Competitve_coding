   for(int i=1;i<(n/2);i=i+2){
    int temp=v[i];
    v[i]=v[n-i];
    v[n-i]=temp;
   }
   int tempo1=v[(n/2)-1];
   int tempo2=v[(n/2)+1];
   v[(n/2)-1]=v[0];
   v[(n/2)+1]=v[n-1];
   v[0]=tempo1;
   v[n-1]=tempo2;
   
   
   
   f(i,0,v.size()){
    cout<<v[i]<<" ";
   }
   }}}
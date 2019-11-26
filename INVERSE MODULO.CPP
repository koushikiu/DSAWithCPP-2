ll inv(ll aa,ll mm)
{
    ll t,q,x0=0,x1=1,m1=mm;
    if(mm==1)return 1;
    while (aa > 1) {
    q=aa/mm;
    t=mm,mm=aa%mm,aa=t;
    t=x0,x0=x1-q*x0,x1=t;
   }
    if(x1<0)
    x1+=m1;
    return x1;
}

while(l<=r)
{
    int mid=(l+r)>>1;

    if(check())
    {
        r=mid-1;
    }
    else
    {
        l=mid+1;
    }
}


bool primo (int n, int i)
{
    while (i<=n)
    {
        if (n%i==0 && n==i)
        {
            return true;
        }
        else if (n%i==0 && n!=i)
        {
            return false;
        }
        else
        {
            i++;
        }


    }

}

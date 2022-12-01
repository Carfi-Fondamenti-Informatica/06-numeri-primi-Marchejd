
bool primo (int n, int i)
{

    while (i<n)
    {i++;
        if (n % i == 0 && n == i)
        {
            return true;
        }
        if (n % i == 0 && n != i )
        {
            return false;
        }
        if (n%i!=0)
        {
            primo (n, i);
        }
    }

    }

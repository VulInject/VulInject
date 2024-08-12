void FUN1(VAR1 **VAR2, VAR1 *VAR3)
{
    if (VAR2)
    {
        *VAR2 = VAR3;
    }
    else if (VAR3)
    {
        FUN2(VAR3);
    }
}
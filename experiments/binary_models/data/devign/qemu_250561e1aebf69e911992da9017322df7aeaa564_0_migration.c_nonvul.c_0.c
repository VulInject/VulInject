bool FUN1(VAR1 **VAR2)
{
    if (FUN2(VAR2))
    {
        return true;
    }
    if (VAR3)
    {
        FUN3(VAR2, FUN4(VAR3->VAR4));
        return true;
    }
    return false;
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    int VAR6 = 0;
    if (FUN2(VAR2, VAR7) || (FUN3(VAR2) && !FUN4(VAR2)))
    {
        VAR6 = FUN5(VAR4, VAR5);
        if (VAR6)
        {
            FUN6("");
        }
    }
    else if (FUN3(VAR2))
    {
        VAR6 = FUN7(VAR4, VAR5);
        if (VAR6)
        {
            FUN6("");
        }
    }
    return VAR6;
}
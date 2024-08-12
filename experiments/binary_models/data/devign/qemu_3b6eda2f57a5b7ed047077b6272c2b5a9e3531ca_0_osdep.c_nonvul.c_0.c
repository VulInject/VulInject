static int FUN1(int VAR1, int VAR2)
{
    int VAR3;
    int VAR4;
    int VAR5;
    VAR3 = FUN2(VAR1, VAR6, 0);
    VAR3 = FUN3(VAR1);
    if (VAR3 != -1)
    {
        FUN4(VAR3);
    }
    if (VAR3 == -1)
    {
        goto VAR7;
    }
    VAR5 = FUN2(VAR3, VAR8);
    if (VAR5 == -1)
    {
        goto VAR7;
    }
    if ((VAR2 & VAR9) != (VAR5 & VAR9))
    {
        VAR10 = VAR11;
        goto VAR7;
    }
    if (FUN2(VAR3, VAR12, VAR2) == -1)
    {
        goto VAR7;
    }
    if (VAR2 & VAR13 || ((VAR2 & (VAR14 | VAR15)) == (VAR14 | VAR15)))
    {
        if (FUN5(VAR3, 0) == -1)
        {
            goto VAR7;
        }
    }
    return VAR3;
VAR7:
    VAR4 = VAR10;
    if (VAR3 != -1)
    {
        close(VAR3);
    }
    VAR10 = VAR4;
    return -1;
}
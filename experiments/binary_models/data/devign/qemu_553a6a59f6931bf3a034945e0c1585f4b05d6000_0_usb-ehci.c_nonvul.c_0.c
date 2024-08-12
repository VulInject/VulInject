static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = 0;
    FUN2(VAR2);
    if (VAR2->VAR5 == VAR6)
    {
        goto VAR7;
    }
    if (VAR2->VAR5 == VAR8)
    {
        VAR4 = -1;
        goto VAR7;
    }
    if (!VAR3)
    {
        int VAR9 = FUN3(VAR2->VAR10.VAR11, VAR12);
        VAR9--;
        FUN4(&VAR2->VAR10.VAR11, VAR9, VAR12);
    }
    if (VAR2->VAR5 == VAR13)
    {
        FUN5(VAR2->VAR14, VAR3, VAR15);
    }
    else
    {
        FUN5(VAR2->VAR14, VAR3, VAR16);
    }
    VAR4 = 1;
VAR7:
    FUN6(VAR2);
    return VAR4;
}
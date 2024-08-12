static int FUN1(VAR1 *VAR2, int VAR3)
{
    if (VAR4 - bit VAR5)
    {
        FUN2(VAR6, VAR3, VAR7);
        goto VAR8;
    }
    if (((VAR2->VAR9.VAR10 & VAR11) != 0) && (FUN3(VAR2->VAR9.VAR12) == 0))
    {
        VAR2->VAR13 = VAR2->VAR9.VAR12;
        FUN2(VAR2->VAR6, VAR3, VAR14);
    }
    else if (FUN3(VAR2->VAR9.VAR15) == 0)
    {
        VAR2->VAR13 = VAR2->VAR9.VAR15;
        FUN2(VAR2->VAR6, VAR3, VAR14);
    }
    else
    {
        FUN2(VAR2->VAR6, VAR3, VAR7);
    }
    return 1;
}
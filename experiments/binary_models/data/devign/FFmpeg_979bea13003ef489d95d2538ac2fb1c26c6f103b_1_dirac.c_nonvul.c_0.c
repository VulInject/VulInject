int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    unsigned VAR7;
    unsigned VAR8, VAR9;
    VAR7 = FUN2(VAR4);
    FUN2(VAR4);
    VAR2->VAR10 = FUN2(VAR4);
    VAR2->VAR11 = FUN2(VAR4);
    VAR8 = FUN2(VAR4);
    if (VAR7 < 2)
        FUN3(VAR2, VAR12, "");
    else if (VAR7 > 2)
        FUN3(VAR2, VAR12, "");
    if (VAR8 > 20U)
        return -1;
    *VAR6 = VAR13[VAR8];
    if (FUN4(VAR2, VAR4, VAR6))
        return -1;
    if (FUN5(VAR6->VAR14, VAR6->VAR15, 0, VAR2))
        return -1;
    FUN6(VAR2, VAR6->VAR14, VAR6->VAR15);
    VAR9 = FUN2(VAR4);
    if (VAR9 != 0)
    {
        FUN3(VAR2, VAR16, "", VAR9);
        return -1;
    }
    return 0;
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9[VAR2->VAR8->VAR10 - 1];
    VAR11 *VAR12 = VAR7->VAR13;
    int VAR14 = FUN2(VAR4);
    int VAR15;
    if (VAR14 > 1)
        return -1;
    FUN3(VAR4);
    if (VAR14 == 1)
    {
        FUN4(VAR4);
        FUN4(VAR4);
    }
    else
    {
        FUN5(VAR4);
        FUN5(VAR4);
    }
    VAR12->VAR16 = FUN5(VAR4);
    VAR7->VAR17 = (VAR14 == 1) ? FUN4(VAR4) : FUN5(VAR4);
    VAR15 = FUN6(VAR4);
    FUN7(VAR15, VAR7->VAR18);
    FUN6(VAR4);
    return 0;
}
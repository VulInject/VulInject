static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR4;
    int VAR6;
    if (VAR2->VAR7 <= VAR8 && FUN2(VAR4, 7))
    {
        FUN3(VAR2->VAR5.VAR9, VAR10, "");
    }
    VAR6 = FUN2(VAR4, 5);
    if (VAR2->VAR11 == VAR12)
        VAR2->VAR13 = VAR14[0][VAR6];
    else
    {
        VAR2->VAR13 = VAR14[VAR2->VAR11 - 1][VAR6];
    }
    if (VAR6 < 9)
        VAR2->VAR15 = FUN2(VAR4, 1);
    if (VAR2->VAR11 == VAR16)
        VAR2->VAR17 = FUN2(VAR4, 1);
    FUN3(VAR2->VAR5.VAR9, VAR10, "", VAR2->VAR13, VAR2->VAR15);
    return 0;
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    unsigned int VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR6 = FUN2(VAR8);
    if (VAR6 != FUN3('', '', '', ''))
        return -1;
    FUN2(VAR8);
    VAR6 = FUN2(VAR8);
    if (VAR6 != FUN3('', '', '', ''))
        return -1;
    VAR5 = FUN4(VAR8, FUN3('', '', '', ''));
    if (VAR5 < 0)
        return -1;
    VAR10 = FUN5(VAR2, 0);
    if (!VAR10)
        return FUN6(VAR14);
    FUN7(VAR8, VAR10->VAR15, VAR5);
    VAR10->VAR16 = VAR17;
    FUN8(VAR10, 64, 1, VAR10->VAR15->VAR18);
    VAR5 = FUN4(VAR8, FUN3('', '', '', ''));
    if (VAR5 < 0)
        return -1;
    VAR12->VAR19 = FUN9(VAR8) + VAR5;
    return 0;
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    char VAR11[4] = {0};
    unsigned VAR12;
    if (VAR2->VAR13->VAR14 < 1)
        return 0;
    VAR7 = VAR2->VAR13->VAR15[VAR2->VAR13->VAR14 - 1];
    VAR9 = VAR7->VAR16;
    VAR10 = FUN2(VAR4);
    if (VAR10 > 1)
        return -1;
    FUN3(VAR4);
    if (VAR10 == 1)
    {
        FUN4(VAR4);
        FUN4(VAR4);
    }
    else
    {
        FUN5(VAR4);
        FUN5(VAR4);
    }
    VAR9->VAR17 = FUN5(VAR4);
    VAR7->VAR18 = (VAR10 == 1) ? FUN4(VAR4) : FUN5(VAR4);
    VAR12 = FUN6(VAR4);
    if (FUN7(VAR12, VAR11))
        FUN8(&VAR7->VAR19, "", VAR11);
    FUN6(VAR4);
    return 0;
}
static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    char VAR11[4] = {0};
    unsigned VAR12;
    int64_t VAR13;
    if (VAR2->VAR14->VAR15 < 1)
        return 0;
    VAR7 = VAR2->VAR14->VAR16[VAR2->VAR14->VAR15 - 1];
    VAR9 = VAR7->VAR17;
    if (VAR9->VAR18)
    {
        FUN2(VAR2->VAR14, VAR19, "");
        return VAR20;
    }
    VAR10 = FUN3(VAR4);
    if (VAR10 > 1)
    {
        FUN4(VAR2->VAR14, "", VAR10);
        return VAR21;
    }
    FUN5(VAR4);
    if (VAR10 == 1)
    {
        VAR13 = FUN6(VAR4);
        FUN6(VAR4);
    }
    else
    {
        VAR13 = FUN7(VAR4);
        FUN7(VAR4);
    }
    FUN8(&VAR7->VAR22, VAR13);
    VAR9->VAR18 = FUN7(VAR4);
    if (VAR9->VAR18 <= 0)
    {
        FUN2(VAR2->VAR14, VAR19, "", VAR9->VAR18);
        VAR9->VAR18 = 1;
    }
    VAR7->VAR23 = (VAR10 == 1) ? FUN6(VAR4) : FUN7(VAR4);
    VAR12 = FUN9(VAR4);
    if (FUN10(VAR12, VAR11))
        FUN11(&VAR7->VAR22, "", VAR11, 0);
    FUN9(VAR4);
    return 0;
}
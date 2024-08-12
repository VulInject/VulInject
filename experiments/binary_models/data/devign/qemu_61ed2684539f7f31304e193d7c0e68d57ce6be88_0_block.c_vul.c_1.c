int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    char VAR7[VAR8];
    int VAR9, VAR10;
    VAR11 *VAR12 = NULL;
    VAR5 *VAR13 = NULL;
    if (VAR2->VAR14 != NULL)
    {
        FUN2(VAR4);
        return 0;
    }
    if (VAR4 == NULL)
    {
        VAR4 = FUN3();
    }
    VAR2->VAR15 &= ~VAR16;
    if (FUN4(VAR4, ""))
    {
        VAR7[0] = '';
    }
    else if (VAR2->VAR17[0] == '' && FUN5(VAR4) == 0)
    {
        FUN2(VAR4);
        return 0;
    }
    else
    {
        FUN6(VAR2, VAR7, sizeof(VAR7));
    }
    VAR2->VAR14 = FUN7("");
    if (VAR2->VAR18[0] != '')
    {
        VAR12 = FUN8(VAR2->VAR18);
    }
    VAR9 = VAR2->VAR15 & ~(VAR19 | VAR20);
    VAR10 = FUN9(VAR2->VAR14, *VAR7 ? VAR7 : NULL, VAR4, VAR9, VAR12, &VAR13);
    FUN10(VAR2->VAR17, sizeof(VAR2->VAR17), VAR2->VAR14->VAR21->VAR22);
    if (VAR10 < 0)
    {
        FUN11(VAR2->VAR14);
        VAR2->VAR14 = NULL;
        VAR2->VAR15 |= VAR16;
        FUN12(VAR6, VAR13);
        return VAR10;
    }
    return 0;
}
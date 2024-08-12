static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    uint32_t VAR8;
    uint32_t av_unused VAR9;
    int64_t VAR10;
    char *VAR11;
    if (VAR2->VAR12->VAR13 < 1)
        return 0;
    VAR7 = VAR2->VAR12->VAR14[VAR2->VAR12->VAR13 - 1];
    FUN2(VAR4);
    FUN3(VAR4);
    VAR9 = FUN4(VAR4);
    VAR8 = FUN4(VAR4);
    FUN5(VAR2->VAR12, VAR15, "", (char *)&VAR9, VAR9);
    FUN5(VAR2->VAR12, VAR15, "", (char *)&VAR8);
    if (VAR8 == FUN6('', '', '', ''))
        VAR7->VAR16->VAR17 = VAR18;
    else if (VAR8 == FUN6('', '', '', ''))
        VAR7->VAR16->VAR17 = VAR19;
    else if (VAR8 == FUN6('', '', '', ''))
        VAR7->VAR16->VAR20 = VAR21;
    else if ((VAR8 == FUN6('', '', '', '')) || (VAR8 == FUN6('', '', '', '')))
        VAR7->VAR16->VAR17 = VAR22;
    FUN7(VAR4);
    FUN7(VAR4);
    FUN7(VAR4);
    VAR10 = VAR5.VAR23 - 24;
    if (VAR10 > 0)
    {
        VAR11 = FUN8(VAR10 + 1);
        if (!VAR11)
            return FUN9(VAR24);
        FUN10(VAR4, VAR11, VAR10);
        VAR11[VAR10] = 0;
        if (VAR11[0])
        {
            int VAR25 = (!VAR2->VAR26 && VAR11[0] == VAR10 - 1);
            FUN11(&VAR7->VAR27, "", VAR11 + VAR25, 0);
        }
        FUN12(&VAR11);
    }
    return 0;
}
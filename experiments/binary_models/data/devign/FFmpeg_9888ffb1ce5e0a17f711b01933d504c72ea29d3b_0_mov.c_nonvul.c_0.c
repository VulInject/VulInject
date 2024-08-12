static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    unsigned int VAR10, VAR11, VAR12, VAR13, VAR14;
    GetBitContext VAR15;
    unsigned char *VAR16;
    if (VAR2->VAR17->VAR18 < 1)
        return 0;
    VAR7 = VAR2->VAR17->VAR19[VAR2->VAR17->VAR18 - 1];
    VAR9 = VAR7->VAR20;
    FUN2(VAR4);
    FUN3(VAR4);
    if (VAR5.VAR21 == FUN4('', '', '', ''))
    {
        VAR12 = FUN5(VAR4);
        if (!VAR9->VAR12)
            VAR9->VAR12 = VAR12;
        VAR13 = 32;
    }
    else
    {
        VAR12 = 0;
        FUN3(VAR4);
        VAR13 = FUN2(VAR4);
    }
    VAR11 = FUN5(VAR4);
    FUN6(VAR2->VAR17, "", VAR9->VAR12, VAR11);
    VAR9->VAR22 = VAR11;
    if (VAR12)
        return 0;
    if (VAR13 != 4 && VAR13 != 8 && VAR13 != 16 && VAR13 != 32)
    {
        FUN7(VAR2->VAR17, VAR23, "", VAR13);
        return VAR24;
    }
    if (!VAR11)
        return 0;
    if (VAR11 >= VAR25 / sizeof(int) || VAR11 >= (VAR25 - 4) / VAR13)
        return VAR24;
    VAR9->VAR26 = FUN8(VAR11 * sizeof(int));
    if (!VAR9->VAR26)
        return FUN9(VAR27);
    VAR14 = (VAR11 * VAR13 + 4) >> 3;
    VAR16 = FUN8(VAR14 + VAR28);
    if (!VAR16)
    {
        FUN10(&VAR9->VAR26);
        return FUN9(VAR27);
    }
    if (FUN11(VAR4, VAR16, VAR14) < VAR14)
    {
        FUN10(&VAR9->VAR26);
        FUN12(VAR16);
        return VAR24;
    }
    FUN13(&VAR15, VAR16, 8 * VAR14);
    for (VAR10 = 0; VAR10 < VAR11 && !VAR4->VAR29; VAR10++)
    {
        VAR9->VAR26[VAR10] = FUN14(&VAR15, VAR13);
        VAR9->VAR30 += VAR9->VAR26[VAR10];
    }
    VAR9->VAR22 = VAR10;
    if (VAR4->VAR29)
        return VAR31;
    FUN12(VAR16);
    return 0;
}
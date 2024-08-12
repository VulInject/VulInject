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
    FUN6(VAR2->VAR17, VAR22, "", VAR9->VAR12, VAR11);
    VAR9->VAR23 = VAR11;
    if (VAR12)
        return 0;
    if (VAR13 != 4 && VAR13 != 8 && VAR13 != 16 && VAR13 != 32)
    {
        FUN6(VAR2->VAR17, VAR24, "", VAR13);
        return VAR25;
    }
    if (!VAR11)
        return 0;
    if (VAR11 >= VAR26 / sizeof(int) || VAR11 >= (VAR26 - 4) / VAR13)
        return VAR25;
    VAR9->VAR27 = FUN7(VAR11 * sizeof(int));
    if (!VAR9->VAR27)
        return FUN8(VAR28);
    VAR14 = (VAR11 * VAR13 + 4) >> 3;
    VAR16 = FUN7(VAR14 + VAR29);
    if (!VAR16)
    {
        FUN9(&VAR9->VAR27);
        return FUN8(VAR28);
    }
    if (FUN10(VAR4, VAR16, VAR14) < VAR14)
    {
        FUN9(&VAR9->VAR27);
        FUN11(VAR16);
        return VAR25;
    }
    FUN12(&VAR15, VAR16, 8 * VAR14);
    for (VAR10 = 0; VAR10 < VAR11 && !VAR4->VAR30; VAR10++)
    {
        VAR9->VAR27[VAR10] = FUN13(&VAR15, VAR13);
        VAR9->VAR31 += VAR9->VAR27[VAR10];
    }
    VAR9->VAR23 = VAR10;
    FUN11(VAR16);
    if (VAR4->VAR30)
        return VAR32;
    return 0;
}
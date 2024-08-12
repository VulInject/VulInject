static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = FUN2(VAR2->VAR9);
    VAR10 *VAR11 = VAR2->VAR12;
    const VAR13 *VAR14 = VAR6->VAR3;
    int VAR15 = VAR6->VAR16;
    int VAR17 = !VAR6->VAR14 || VAR11->VAR18 || VAR11->VAR19;
    int VAR20;
    VAR21 *VAR22 = VAR3;
    VAR23 *VAR24 = VAR3;
    VAR22->VAR25 = VAR26;
    VAR22->VAR27 = 1;
    VAR20 = FUN3(VAR2, VAR22);
    if (VAR20 < 0)
        return VAR20;
    if (VAR15 < VAR11->VAR28 - (VAR2->VAR9 == VAR29 ? VAR30 : 0))
        return -1;
    if (VAR17)
        VAR22->VAR14[0] = FUN4(VAR11->VAR28);
    else
        VAR22->VAR14[0] = FUN5(VAR6->VAR14);
    if (!VAR22->VAR14[0])
        return FUN6(VAR31);
    if (VAR11->VAR18)
    {
        int VAR32;
        VAR13 *VAR33 = VAR22->VAR14[0]->VAR3;
        VAR15 = VAR11->VAR28 - VAR30;
        if (VAR2->VAR34 == 4)
        {
            for (VAR32 = 0; 2 * VAR32 + 1 < VAR15; VAR32++)
            {
                VAR33[2 * VAR32 + 0] = VAR14[VAR32] >> 4;
                VAR33[2 * VAR32 + 1] = VAR14[VAR32] & 15;
            }
        }
        else
        {
            for (VAR32 = 0; 4 * VAR32 + 3 < VAR15; VAR32++)
            {
                VAR33[4 * VAR32 + 0] = VAR14[VAR32] >> 6;
                VAR33[4 * VAR32 + 1] = VAR14[VAR32] >> 4 & 3;
                VAR33[4 * VAR32 + 2] = VAR14[VAR32] >> 2 & 3;
                VAR33[4 * VAR32 + 3] = VAR14[VAR32] & 3;
            }
        }
        VAR14 = VAR33;
    }
    else if (VAR17)
    {
        memcpy(VAR22->VAR14[0]->VAR3, VAR14, FUN7(VAR15, VAR11->VAR28));
        VAR14 = VAR22->VAR14[0]->VAR3;
    }
    if (VAR2->VAR35 == FUN8('', '', '', '') || VAR2->VAR35 == FUN8('', '', '', ''))
        VAR14 += VAR15 - VAR11->VAR28;
    if ((VAR20 = FUN9(VAR24, VAR14, VAR2->VAR9, VAR2->VAR36, VAR2->VAR37)) < 0)
        return VAR20;
    if (VAR2->VAR9 == VAR29)
    {
        const VAR13 *VAR38 = FUN10(VAR6, VAR39, NULL);
        if (VAR38)
        {
            FUN11(&VAR11->VAR40);
            VAR11->VAR40 = FUN4(VAR30);
            if (!VAR11->VAR40)
                return FUN6(VAR31);
            memcpy(VAR11->VAR40->VAR3, VAR38, VAR30);
            VAR22->VAR41 = 1;
        }
    }
    if ((VAR2->VAR9 == VAR29 && VAR15 < VAR11->VAR28) || (VAR8->VAR42 & VAR43))
    {
        VAR22->VAR14[1] = FUN5(VAR11->VAR40);
        if (!VAR22->VAR14[1])
            return FUN6(VAR31);
        VAR22->VAR3[1] = VAR22->VAR14[1]->VAR3;
    }
    if (VAR2->VAR9 == VAR44 && ((VAR22->VAR45[0] + 3) & ~3) * VAR2->VAR37 <= VAR15)
        VAR22->VAR45[0] = (VAR22->VAR45[0] + 3) & ~3;
    if (VAR11->VAR46)
        FUN12(VAR2, VAR24);
    if (VAR2->VAR35 == FUN8('', '', '', '') || VAR2->VAR35 == FUN8('', '', '', '') || VAR2->VAR35 == FUN8('', '', '', '') || VAR2->VAR35 == FUN8('', '', '', ''))
        FUN13(VAR13 *, VAR24->VAR3[1], VAR24->VAR3[2]);
    if (VAR2->VAR35 == FUN14("") && VAR2->VAR9 == VAR47)
    {
        int VAR48, VAR49;
        VAR13 *VAR50 = VAR24->VAR3[0];
        for (VAR49 = 0; VAR49 < VAR2->VAR37; VAR49++)
        {
            for (VAR48 = 0; VAR48 < VAR2->VAR36; VAR48++)
                VAR50[2 * VAR48 + 1] ^= 0x80;
            VAR50 += VAR24->VAR45[0];
        }
    }
    *VAR4 = 1;
    return VAR15;
}
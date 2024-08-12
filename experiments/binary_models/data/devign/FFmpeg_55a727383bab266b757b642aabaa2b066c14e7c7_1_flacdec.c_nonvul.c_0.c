static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11 = 0, VAR12, VAR13 = 0, VAR14 = 0;
    VAR15 *VAR16 = VAR3;
    VAR17 *VAR18 = VAR3;
    int VAR19 = *VAR4;
    *VAR4 = 0;
    if (VAR9->VAR20 == 0)
    {
        VAR9->VAR20 = FUN2(4, VAR7);
        VAR9->VAR21 = FUN3(VAR9->VAR21, &VAR9->VAR22, VAR9->VAR20);
    }
    if (1 && VAR9->VAR20)
    {
        if (VAR9->VAR23 < 4 || FUN4(VAR9->VAR21) != FUN5('', '', '', ''))
            VAR7 = FUN6(VAR7, VAR9->VAR20 - FUN6(VAR9->VAR23, VAR9->VAR20));
        VAR14 = VAR7;
        if (VAR9->VAR23 + VAR7 < VAR7 || VAR9->VAR24 + VAR9->VAR23 + VAR7 < VAR9->VAR24)
            return -1;
        if (VAR9->VAR22 < VAR9->VAR23 + VAR7)
            VAR9->VAR21 = FUN3(VAR9->VAR21, &VAR9->VAR22, VAR9->VAR23 + VAR7);
        if (VAR9->VAR24 + VAR9->VAR23 + VAR7 > VAR9->VAR22)
        {
            memmove(VAR9->VAR21, &VAR9->VAR21[VAR9->VAR24], VAR9->VAR23);
            VAR9->VAR24 = 0;
        }
        memcpy(&VAR9->VAR21[VAR9->VAR24 + VAR9->VAR23], VAR6, VAR7);
        VAR6 = &VAR9->VAR21[VAR9->VAR24];
        VAR7 += VAR9->VAR23;
        VAR9->VAR23 = VAR7;
        if (VAR7 < VAR9->VAR20 && VAR14)
        {
            return VAR14;
        }
    }
    FUN7(&VAR9->VAR25, VAR6, VAR7 * 8);
    if (FUN8(&VAR9->VAR25, 32) == FUN9('', '', '', ''))
    {
        if (FUN10(VAR9))
        {
            FUN11(VAR9->VAR2, VAR26, "");
            return -1;
        }
        goto VAR27;
    }
    VAR11 = FUN12(&VAR9->VAR25, 16);
    if ((VAR11 & 0xFFFE) != 0xFFF8)
    {
        FUN11(VAR9->VAR2, VAR26, "");
        while (FUN13(&VAR9->VAR25) / 8 + 2 < VAR7 && (FUN12(&VAR9->VAR25, 16) & 0xFFFE) != 0xFFF8)
            FUN14(&VAR9->VAR25, 8);
        goto VAR27;
    }
    FUN14(&VAR9->VAR25, 16);
    if (FUN15(VAR9, VAR19) < 0)
    {
        FUN11(VAR9->VAR2, VAR26, "");
        VAR9->VAR23 = 0;
        VAR9->VAR24 = 0;
        return -1;
    }
    assert(VAR9->VAR28 == 2);
    for (VAR12 = 0; VAR12 < VAR9->VAR29; VAR12++)
    {
        int VAR30 = VAR9->VAR31[0][VAR12];
        int VAR32 = VAR9->VAR31[1][VAR12];
        if (VAR9->VAR33)
        {
            *VAR18++ = (VAR34) << VAR9->VAR35;
            *VAR18++ = (VAR36) << VAR9->VAR35;
        }
        else
        {
            *VAR16++ = (VAR34) << VAR9->VAR35;
            *VAR16++ = (VAR36) << VAR9->VAR35;
        }
    }
    break;
    switch (VAR9->VAR37)
    {
    case VAR38:
        for (VAR13 = 0; VAR13 < VAR9->VAR29; VAR13++)
        {
            for (VAR12 = 0; VAR12 < VAR9->VAR28; VAR12++)
            {
                if (VAR9->VAR33)
                    *VAR18++ = VAR9->VAR31[VAR12][VAR13] << VAR9->VAR35;
                else
                    *VAR16++ = VAR9->VAR31[VAR12][VAR13] << VAR9->VAR35;
            }
        }
        break;
    case VAR39:
        FUN16(VAR30, VAR30 - VAR32)
        case VAR40 : FUN16(VAR30 + VAR32, VAR32) case VAR41 : FUN16((VAR30 -= VAR32 >> 1) + VAR32, VAR30)
    }
    *VAR4 = VAR9->VAR29 * VAR9->VAR28 * (VAR9->VAR33 ? 4 : 2);
VAR27:
    VAR12 = (FUN13(&VAR9->VAR25) + 7) / 8;
    if (VAR12 > VAR7)
    {
        FUN11(VAR9->VAR2, VAR26, "", VAR12 - VAR7);
        VAR9->VAR23 = 0;
        VAR9->VAR24 = 0;
        return -1;
    }
    if (VAR9->VAR23)
    {
        VAR9->VAR24 += VAR12;
        VAR9->VAR23 -= VAR12;
        return VAR14;
    }
    else
        return VAR12;
}
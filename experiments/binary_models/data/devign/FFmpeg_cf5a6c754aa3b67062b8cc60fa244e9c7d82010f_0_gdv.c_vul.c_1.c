static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR11;
    VAR12 *VAR13 = &VAR8->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16, VAR17, VAR18;
    const VAR19 *VAR20 = FUN2(VAR6, VAR21, &VAR18);
    int VAR22;
    unsigned VAR23;
    VAR19 *VAR24;
    if ((VAR16 = FUN3(VAR2, VAR15, 0)) < 0)
        return VAR16;
    if (VAR20 && VAR18 == VAR25)
        memcpy(VAR8->VAR20, VAR20, VAR25);
    FUN4(VAR11, VAR6->VAR3, VAR6->VAR26);
    FUN5(VAR13, VAR8->VAR15, VAR8->VAR27);
    VAR23 = FUN6(VAR11);
    VAR22 = VAR23 & 0xF;
    FUN7(VAR8, VAR8->VAR15, VAR2->VAR28, VAR2->VAR29, !!(VAR23 & 0x10), !!(VAR23 & 0x20));
    switch (VAR22)
    {
    case 1:
        memset(VAR8->VAR15 + VAR30, 0, VAR8->VAR27 - VAR30);
    case 0:
        if (FUN8(VAR11) < 256 * 3)
            return VAR31;
        for (VAR17 = 0; VAR17 < 256; VAR17++)
        {
            unsigned VAR32 = FUN9(VAR11);
            unsigned VAR33 = FUN9(VAR11);
            unsigned VAR34 = FUN9(VAR11);
            VAR8->VAR20[VAR17] = 0xFFU << 24 | VAR32 << 18 | VAR33 << 10 | VAR34 << 2;
        }
        break;
    case 2:
        VAR16 = FUN10(VAR2);
        break;
    case 3:
        break;
    case 5:
        VAR16 = FUN11(VAR2, VAR23 >> 8);
        break;
    case 6:
        VAR16 = FUN12(VAR2, VAR23 >> 8, 0);
        break;
    case 8:
        VAR16 = FUN12(VAR2, VAR23 >> 8, 1);
        break;
    default:
        return VAR31;
    }
    memcpy(VAR15->VAR3[1], VAR8->VAR20, VAR25);
    VAR24 = VAR15->VAR3[0];
    if (!VAR8->VAR35 && !VAR8->VAR36)
    {
        int VAR37 = VAR30, VAR38 = 0;
        int VAR39, VAR40;
        for (VAR39 = 0; VAR39 < VAR2->VAR29; VAR39++)
        {
            for (VAR40 = 0; VAR40 < VAR2->VAR28; VAR40++)
            {
                VAR24[VAR40 + VAR38] = VAR8->VAR15[VAR40 + VAR37];
            }
            VAR37 += VAR2->VAR28;
            VAR38 += VAR15->VAR41[0];
        }
    }
    else
    {
        int VAR37 = VAR30, VAR38 = 0;
        int VAR39, VAR40;
        for (VAR39 = 0; VAR39 < VAR2->VAR29; VAR39++)
        {
            if (!VAR8->VAR35)
            {
                for (VAR40 = 0; VAR40 < VAR2->VAR28; VAR40++)
                {
                    VAR24[VAR38 + VAR40] = VAR8->VAR15[VAR37 + VAR40];
                }
            }
            else
            {
                for (VAR40 = 0; VAR40 < VAR2->VAR28; VAR40++)
                {
                    VAR24[VAR38 + VAR40] = VAR8->VAR15[VAR37 + VAR40 / 2];
                }
            }
            if (!VAR8->VAR36 || ((VAR39 & 1) == 1))
            {
                VAR37 += !VAR8->VAR35 ? VAR2->VAR28 : VAR2->VAR28 / 2;
            }
            VAR38 += VAR15->VAR41[0];
        }
    }
    *VAR4 = 1;
    return VAR16 < 0 ? VAR16 : VAR6->VAR26;
}
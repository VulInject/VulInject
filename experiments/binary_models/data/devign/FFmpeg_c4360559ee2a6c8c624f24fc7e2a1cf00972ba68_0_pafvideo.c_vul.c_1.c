static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    uint8_t VAR10, *VAR11, *VAR12;
    int VAR13, VAR14, VAR15;
    if (VAR6->VAR16 < 2)
        return VAR17;
    FUN2(&VAR8->VAR18, VAR6->VAR3, VAR6->VAR16);
    VAR10 = FUN3(&VAR8->VAR18);
    if ((VAR10 & 0xF) > 4)
    {
        FUN4(VAR2, "");
        return VAR17;
    }
    if ((VAR15 = FUN5(VAR2, VAR8->VAR19)) < 0)
        return VAR15;
    if (VAR10 & 0x20)
    {
        for (VAR13 = 0; VAR13 < 4; VAR13++)
            memset(VAR8->VAR14[VAR13], 0, VAR8->VAR20);
        memset(VAR8->VAR19->VAR3[1], 0, VAR21);
        VAR8->VAR22 = 0;
        VAR8->VAR19->VAR23 = 1;
        VAR8->VAR19->VAR24 = VAR25;
    }
    else
    {
        VAR8->VAR19->VAR23 = 0;
        VAR8->VAR19->VAR24 = VAR26;
    }
    if (VAR10 & 0x40)
    {
        VAR27 *VAR28 = (VAR27 *)VAR8->VAR19->VAR3[1];
        int VAR29, VAR30;
        VAR29 = FUN3(&VAR8->VAR18);
        VAR30 = FUN3(&VAR8->VAR18) + 1;
        if (VAR29 + VAR30 > 256)
            return VAR17;
        if (FUN6(&VAR8->VAR18) < 3 * VAR30)
            return VAR17;
        VAR28 += VAR29;
        for (VAR13 = 0; VAR13 < VAR30; VAR13++)
        {
            unsigned VAR31, VAR32, VAR33;
            VAR31 = FUN7(&VAR8->VAR18);
            VAR31 = VAR31 << 2 | VAR31 >> 4;
            VAR32 = FUN7(&VAR8->VAR18);
            VAR32 = VAR32 << 2 | VAR32 >> 4;
            VAR33 = FUN7(&VAR8->VAR18);
            VAR33 = VAR33 << 2 | VAR33 >> 4;
            *VAR28++ = (0xFFU << 24) | (VAR31 << 16) | (VAR32 << 8) | VAR33;
        }
        VAR8->VAR19->VAR34 = 1;
    }
    switch (VAR10 & 0x0F)
    {
    case 0:
        if ((VAR15 = FUN8(VAR8, VAR6->VAR3, VAR10)) < 0)
            return VAR15;
        break;
    case 1:
        VAR11 = VAR8->VAR14[VAR8->VAR22];
        FUN9(&VAR8->VAR18, 2);
        if (FUN6(&VAR8->VAR18) < VAR8->VAR35)
            return VAR17;
        FUN10(&VAR8->VAR18, VAR11, VAR8->VAR35);
        break;
    case 2:
        VAR14 = FUN3(&VAR8->VAR18);
        if (VAR14 > 3)
            return VAR17;
        if (VAR14 != VAR8->VAR22)
            memcpy(VAR8->VAR14[VAR8->VAR22], VAR8->VAR14[VAR14], VAR8->VAR20);
        break;
    case 4:
        VAR11 = VAR8->VAR14[VAR8->VAR22];
        VAR12 = VAR11 + VAR8->VAR35;
        FUN9(&VAR8->VAR18, 2);
        while (VAR11 < VAR12)
        {
            int8_t VAR10;
            int VAR30;
            if (FUN6(&VAR8->VAR18) < 2)
                return VAR17;
            VAR10 = FUN7(&VAR8->VAR18);
            VAR30 = FUN11(VAR10) + 1;
            if (VAR11 + VAR30 > VAR12)
                return VAR17;
            if (VAR10 < 0)
                memset(VAR11, FUN7(&VAR8->VAR18), VAR30);
            else
                FUN12(&VAR8->VAR18, VAR11, VAR30);
            VAR11 += VAR30;
        }
        break;
    default:
        FUN13(0);
    }
    FUN14(VAR8->VAR19->VAR3[0], VAR8->VAR19->VAR36[0], VAR8->VAR14[VAR8->VAR22], VAR8->VAR37, VAR8->VAR37, VAR8->VAR38);
    VAR8->VAR22 = (VAR8->VAR22 + 1) & 3;
    if ((VAR15 = FUN15(VAR3, VAR8->VAR19)) < 0)
        return VAR15;
    *VAR4 = 1;
    return VAR6->VAR16;
}
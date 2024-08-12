static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    VAR9 *const VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = VAR3;
    VAR12 *const VAR14 = &VAR10->VAR13;
    unsigned int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25;
    VAR7 *VAR26;
    const VAR7 *VAR27 = VAR8;
    if (FUN2(VAR8) != 0x59a66a95)
    {
        FUN3(VAR2, VAR28, "");
        return -1;
    }
    VAR15 = FUN2(VAR8 + 4);
    VAR16 = FUN2(VAR8 + 8);
    VAR17 = FUN2(VAR8 + 12);
    VAR18 = FUN2(VAR8 + 20);
    VAR19 = FUN2(VAR8 + 24);
    VAR20 = FUN2(VAR8 + 28);
    if (VAR18 == VAR29 || VAR18 == VAR30)
    {
        FUN3(VAR2, VAR28, "");
        return -1;
    }
    if (VAR18 > VAR30)
    {
        FUN3(VAR2, VAR28, "");
        return -1;
    }
    if (VAR19 & ~1)
    {
        FUN3(VAR2, VAR28, "");
        return -1;
    }
    VAR8 += 32;
    switch (VAR17)
    {
    case 1:
        VAR2->VAR31 = VAR32;
        break;
    case 8:
        VAR2->VAR31 = VAR33;
        break;
    case 24:
        VAR2->VAR31 = (VAR18 == VAR34) ? VAR35 : VAR36;
        break;
    default:
        FUN3(VAR2, VAR28, "");
        return -1;
    }
    if (VAR14->VAR3[0])
        VAR2->FUN4(VAR2, VAR14);
    if (FUN5(VAR15, VAR16, 0, VAR2))
        return -1;
    if (VAR15 != VAR2->VAR37 || VAR16 != VAR2->VAR38)
        FUN6(VAR2, VAR15, VAR16);
    if (VAR2->FUN7(VAR2, VAR14) < 0)
    {
        FUN3(VAR2, VAR28, "");
        return -1;
    }
    VAR14->VAR39 = VAR40;
    if (VAR17 != 8 && VAR20)
    {
        FUN3(VAR2, VAR41, "");
    }
    else if (VAR17 == 8)
    {
        unsigned int VAR24 = VAR20 / 3;
        if (!VAR20)
        {
            FUN3(VAR2, VAR28, "");
            return -1;
        }
        if (VAR20 % 3 || VAR20 > 768)
        {
            FUN3(VAR2, VAR41, "");
            return -1;
        }
        VAR26 = VAR14->VAR3[1];
        for (VAR22 = 0; VAR22 < VAR24; VAR22++, VAR26 += 4)
            *(VAR42 *)VAR26 = (VAR8[VAR22] << 16) + (VAR8[VAR24 + VAR22] << 8) + VAR8[VAR24 + VAR24 + VAR22];
    }
    VAR8 += VAR20;
    VAR26 = VAR14->VAR3[0];
    VAR21 = VAR14->VAR43[0];
    VAR24 = (VAR17 * VAR15 + 7) >> 3;
    VAR25 = VAR24 + (VAR24 & 1);
    if (VAR18 == VAR44)
    {
        int VAR45, VAR46;
        VAR7 *VAR47 = VAR26 + VAR16 * VAR21;
        VAR22 = 0;
        while (VAR26 != VAR47)
        {
            VAR46 = 1;
            if ((VAR45 = *VAR8++) == 0x80)
            {
                VAR46 = *VAR8++ + 1;
                if (VAR46 != 1)
                    VAR45 = *VAR8++;
            }
            while (VAR46--)
            {
                if (VAR22 < VAR24)
                    VAR26[VAR22] = VAR45;
                if (++VAR22 >= VAR25)
                {
                    VAR22 = 0;
                    VAR26 += VAR21;
                    if (VAR26 == VAR47)
                        break;
                }
            }
        }
    }
    else
    {
        for (VAR23 = 0; VAR23 < VAR16; VAR23++)
        {
            memcpy(VAR26, VAR8, VAR24);
            VAR26 += VAR21;
            VAR8 += VAR25;
        }
    }
    *VAR13 = VAR10->VAR13;
    *VAR4 = sizeof(VAR12);
    return VAR8 - VAR27;
}
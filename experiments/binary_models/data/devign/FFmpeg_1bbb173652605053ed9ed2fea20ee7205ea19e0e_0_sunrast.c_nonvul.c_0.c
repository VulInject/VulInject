static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    const VAR7 *VAR9 = VAR6->VAR3 + VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    VAR14 *const VAR16 = &VAR12->VAR15;
    unsigned int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27;
    VAR7 *VAR28;
    const VAR7 *VAR29 = VAR8;
    if (VAR6->VAR10 < 32)
        return VAR30;
    if (FUN2(VAR8) != 0x59a66a95)
    {
        FUN3(VAR2, VAR31, "");
        return -1;
    }
    VAR17 = FUN2(VAR8 + 4);
    VAR18 = FUN2(VAR8 + 8);
    VAR19 = FUN2(VAR8 + 12);
    VAR20 = FUN2(VAR8 + 20);
    VAR21 = FUN2(VAR8 + 24);
    VAR22 = FUN2(VAR8 + 28);
    VAR8 += 32;
    if (VAR20 == VAR32 || VAR20 == VAR33 || VAR20 == VAR34)
    {
        FUN3(VAR2, VAR31, "");
        return -1;
    }
    if (VAR20 < VAR35 || VAR20 > VAR33)
    {
        FUN3(VAR2, VAR31, "");
        return -1;
    }
    if (FUN4(VAR17, VAR18, 0, VAR2))
    {
        FUN3(VAR2, VAR31, "");
        return -1;
    }
    if (VAR21 & ~1)
    {
        FUN3(VAR2, VAR31, "");
        return -1;
    }
    switch (VAR19)
    {
    case 1:
        VAR2->VAR36 = VAR37;
        break;
    case 8:
        VAR2->VAR36 = VAR38;
        break;
    case 24:
        VAR2->VAR36 = (VAR20 == VAR39) ? VAR40 : VAR41;
        break;
    default:
        FUN3(VAR2, VAR31, "");
        return -1;
    }
    if (VAR16->VAR3[0])
        VAR2->FUN5(VAR2, VAR16);
    if (VAR17 != VAR2->VAR42 || VAR18 != VAR2->VAR43)
        FUN6(VAR2, VAR17, VAR18);
    if (VAR2->FUN7(VAR2, VAR16) < 0)
    {
        FUN3(VAR2, VAR31, "");
        return -1;
    }
    VAR16->VAR44 = VAR45;
    if (VAR9 - VAR8 < VAR22)
        return VAR30;
    if (VAR19 != 8 && VAR22)
    {
        FUN3(VAR2, VAR46, "");
    }
    else if (VAR19 == 8)
    {
        unsigned int VAR26 = VAR22 / 3;
        if (!VAR22)
        {
            FUN3(VAR2, VAR31, "");
            return -1;
        }
        if (VAR22 % 3 || VAR22 > 768)
        {
            FUN3(VAR2, VAR46, "");
            return -1;
        }
        VAR28 = VAR16->VAR3[1];
        for (VAR24 = 0; VAR24 < VAR26; VAR24++, VAR28 += 4)
            *(VAR47 *)VAR28 = (VAR8[VAR24] << 16) + (VAR8[VAR26 + VAR24] << 8) + VAR8[VAR26 + VAR26 + VAR24];
    }
    VAR8 += VAR22;
    VAR28 = VAR16->VAR3[0];
    VAR23 = VAR16->VAR48[0];
    VAR26 = (VAR19 * VAR17 + 7) >> 3;
    VAR27 = VAR26 + (VAR26 & 1);
    if (VAR20 == VAR49)
    {
        int VAR50, VAR51;
        VAR7 *VAR52 = VAR28 + VAR18 * VAR23;
        VAR24 = 0;
        while (VAR28 != VAR52 && VAR8 < VAR9)
        {
            VAR51 = 1;
            if (VAR9 - VAR8 < 1)
                return VAR30;
            if ((VAR50 = *VAR8++) == 0x80)
            {
                VAR51 = *VAR8++ + 1;
                if (VAR51 != 1)
                    VAR50 = *VAR8++;
            }
            while (VAR51--)
            {
                if (VAR24 < VAR26)
                    VAR28[VAR24] = VAR50;
                if (++VAR24 >= VAR27)
                {
                    VAR24 = 0;
                    VAR28 += VAR23;
                    if (VAR28 == VAR52)
                        break;
                }
            }
        }
    }
    else
    {
        for (VAR25 = 0; VAR25 < VAR18; VAR25++)
        {
            if (VAR9 - VAR8 < VAR26)
                break;
            memcpy(VAR28, VAR8, VAR26);
            VAR28 += VAR23;
            VAR8 += VAR27;
        }
    }
    *VAR15 = VAR12->VAR15;
    *VAR4 = sizeof(VAR14);
    return VAR8 - VAR29;
}
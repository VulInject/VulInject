static int FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR3 *VAR5, const VAR6 *VAR7, const VAR3 *VAR8, const int VAR9, VAR10 *VAR11)
{
    VAR12 *VAR13 = VAR2->VAR14;
    int VAR15 = 0, VAR16 = VAR2->VAR16, VAR17 = VAR2->VAR17, VAR18, VAR19;
    int VAR20 = 0, VAR21 = 0, VAR22 = VAR13->VAR23;
    int VAR24 = (VAR13->VAR25 & VAR26) && VAR13->VAR27;
    const VAR3 *VAR28;
    if ((VAR13->VAR25 & VAR29) && VAR13->VAR27 && !VAR7)
    {
        const VAR3 *VAR30 = VAR13->VAR27->VAR31[0];
        const int VAR32 = VAR13->VAR27->VAR9[0];
        int VAR33 = VAR2->VAR17 - 1, VAR34 = VAR2->VAR16 - 1;
        while (VAR21 < VAR34)
        {
            if (memcmp(VAR30 + VAR21 * VAR32, VAR8 + VAR21 * VAR9, VAR17))
                break;
            VAR21++;
        }
        while (VAR34 > VAR21)
        {
            if (memcmp(VAR30 + VAR34 * VAR32, VAR8 + VAR34 * VAR9, VAR17))
                break;
            VAR34--;
        }
        VAR16 = VAR34 + 1 - VAR21;
        while (VAR20 < VAR33)
        {
            int VAR35 = 1;
            for (VAR19 = VAR21; VAR19 <= VAR34; VAR19++)
            {
                if (VAR30[VAR19 * VAR32 + VAR20] != VAR8[VAR19 * VAR9 + VAR20])
                {
                    VAR35 = 0;
                    break;
                }
            }
            if (!VAR35)
                break;
            VAR20++;
        }
        while (VAR33 > VAR20)
        {
            int VAR35 = 1;
            for (VAR19 = VAR21; VAR19 <= VAR34; VAR19++)
            {
                if (VAR30[VAR19 * VAR32 + VAR33] != VAR8[VAR19 * VAR9 + VAR33])
                {
                    VAR35 = 0;
                    break;
                }
            }
            if (!VAR35)
                break;
            VAR33--;
        }
        VAR17 = VAR33 + 1 - VAR20;
        FUN2(VAR2, VAR36, "", VAR17, VAR16, VAR20, VAR21, VAR2->VAR17, VAR2->VAR16);
    }
    FUN3(VAR4, VAR37);
    FUN4(VAR4, VAR20);
    FUN4(VAR4, VAR21);
    FUN4(VAR4, VAR17);
    FUN4(VAR4, VAR16);
    if (!VAR7)
    {
        FUN3(VAR4, 0x00);
    }
    else
    {
        unsigned VAR38;
        FUN3(VAR4, 1 << 7 | 0x7);
        for (VAR38 = 0; VAR38 < VAR39; VAR38++)
        {
            const uint32_t VAR40 = VAR7[VAR38];
            FUN5(VAR4, VAR40);
        }
    }
    if (VAR24 && VAR22 < 0)
    {
        VAR22 = FUN6(VAR8 + VAR21 * VAR9 + VAR20, VAR9, VAR17, VAR16);
        if (VAR22 < 0)
        {
            FUN2(VAR2, VAR36, "");
        }
        else
        {
            VAR3 *VAR41 = VAR13->VAR41;
            if (!VAR41)
                VAR41 = FUN7(VAR11, VAR42, VAR43);
            if (!VAR41)
                return FUN8(VAR44);
            memcpy(VAR41, VAR13->VAR7, VAR43);
            VAR41[VAR22 * 4 + 3 * !VAR45] = 0x00;
        }
    }
    if (VAR22 < 0)
        VAR24 = 0;
    FUN3(VAR4, 0x08);
    FUN9(VAR13->VAR46, VAR13->VAR8, VAR13->VAR47, 12, VAR48, VAR49);
    VAR28 = VAR8 + VAR21 * VAR9 + VAR20;
    if (VAR24)
    {
        const int VAR32 = VAR13->VAR27->VAR9[0];
        const VAR3 *VAR30 = VAR13->VAR27->VAR31[0] + VAR21 * VAR32 + VAR20;
        for (VAR19 = 0; VAR19 < VAR16; VAR19++)
        {
            memcpy(VAR13->VAR50, VAR28, VAR17);
            for (VAR18 = 0; VAR18 < VAR17; VAR18++)
                if (VAR30[VAR18] == VAR28[VAR18])
                    VAR13->VAR50[VAR18] = VAR22;
            VAR15 += FUN10(VAR13->VAR46, VAR13->VAR50, VAR17);
            VAR28 += VAR9;
            VAR30 += VAR32;
        }
    }
    else
    {
        for (VAR19 = 0; VAR19 < VAR16; VAR19++)
        {
            VAR15 += FUN10(VAR13->VAR46, VAR28, VAR17);
            VAR28 += VAR9;
        }
    }
    VAR15 += FUN11(VAR13->VAR46, VAR51);
    VAR28 = VAR13->VAR8;
    while (VAR15 > 0)
    {
        int VAR52 = FUN12(255, VAR15);
        FUN3(VAR4, VAR52);
        if (VAR5 - *VAR4 < VAR52)
            return -1;
        FUN13(VAR4, VAR28, VAR52);
        VAR28 += VAR52;
        VAR15 -= VAR52;
    }
    FUN3(VAR4, 0x00);
    return 0;
}
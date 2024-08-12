static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 *const VAR11 = (VAR5 *)&VAR9->VAR12;
    int VAR13;
    int VAR14, VAR15;
    int VAR16;
    int VAR17;
    int VAR18, VAR19;
    VAR20 *VAR21;
    int *VAR22 = VAR9->VAR23;
    VAR20 *VAR24 = VAR9->VAR25;
    VAR20 *VAR26 = VAR9->VAR27;
    int *VAR28 = VAR9->VAR29;
    int *VAR30 = VAR9->VAR31;
    int VAR32 = 0x800 * (VAR33 + 1);
    int VAR34 = 0x100 * VAR9->VAR35;
    int VAR36;
    if (VAR37)
    {
        VAR16 = FUN2(VAR2->VAR38, VAR39) >> 3;
        VAR17 = FUN2(VAR2->VAR40, VAR41) >> 3;
        VAR36 = VAR17 * VAR16;
    }
    else
    {
        VAR16 = VAR39 >> 3;
        VAR17 = VAR41 >> 3;
        VAR36 = 0x400;
    }
    if (!VAR6)
    {
        if (!VAR9->VAR42)
            return 0;
        if (!VAR9->VAR43)
        {
            VAR9->VAR42 = 0;
        }
        else
            VAR9->VAR42 = VAR9->VAR43;
    }
    else
    {
        if (VAR9->VAR43 < VAR9->VAR42)
        {
            *VAR11 = *VAR6;
            VAR11->VAR44 = VAR45;
            VAR11->VAR46 = 1;
            FUN3(VAR2, VAR11, VAR28 + 32000 * VAR9->VAR43);
            VAR9->VAR43++;
            if (VAR9->VAR47 == VAR48)
                VAR9->VAR47 = VAR6->VAR49;
            return 0;
        }
    }
    if (VAR9->VAR43 == VAR9->VAR42)
    {
        VAR18 = 0;
        if (VAR9->VAR42)
        {
            VAR18 = VAR32 + VAR9->VAR42 * (VAR36 + VAR34);
            if ((VAR19 = FUN4(VAR4, VAR18)) < 0)
            {
                FUN5(VAR2, VAR50, "", VAR18);
                return VAR19;
            }
            VAR21 = VAR4->VAR51;
            FUN6(VAR28, 32, 1000 * VAR9->VAR42, VAR30, VAR52, 50, VAR22, &VAR9->VAR53);
            FUN7(VAR28, 32, 1000 * VAR9->VAR42, VAR30, VAR52, 50, VAR22, &VAR9->VAR53);
            FUN8(VAR2, VAR26, VAR24);
            memcpy(VAR21, VAR26, VAR32);
            VAR21 += VAR32;
            VAR26 += VAR32;
        }
        for (VAR13 = 0; VAR13 < VAR9->VAR42; VAR13++)
        {
            for (VAR15 = 0; VAR15 < VAR16; VAR15++)
            {
                for (VAR14 = 0; VAR14 < VAR17; VAR14++)
                {
                    VAR21[VAR15 * VAR17 + VAR14] = VAR22[VAR15 * VAR17 + VAR14];
                }
            }
            VAR21 += VAR36;
            VAR18 += VAR36;
            if (VAR9->VAR35)
            {
                FUN9(VAR21, VAR22, VAR24);
                VAR21 += VAR34;
                VAR18 += VAR34;
            }
            VAR22 += 1000;
        }
        FUN10(VAR2->VAR54 + 4, VAR9->VAR43);
        FUN10(VAR2->VAR54 + 8, VAR32);
        FUN10(VAR2->VAR54 + 12, VAR36 + VAR34);
        VAR9->VAR43 = 0;
        VAR4->VAR49 = VAR4->VAR55 = VAR9->VAR47;
        VAR9->VAR47 = VAR48;
        VAR4->VAR56 = VAR18;
        VAR4->VAR57 |= VAR58;
        *VAR7 = !!VAR18;
    }
    return 0;
}
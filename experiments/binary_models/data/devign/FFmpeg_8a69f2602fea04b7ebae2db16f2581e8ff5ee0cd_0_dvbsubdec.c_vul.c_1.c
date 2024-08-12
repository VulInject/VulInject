static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    const VAR3 *VAR9 = VAR4 + VAR5;
    int VAR10, VAR11;
    int VAR12;
    VAR13 *VAR14;
    int VAR15, VAR16, VAR17;
    int VAR18, VAR19, VAR20, VAR21;
    int VAR22, VAR23, VAR24, VAR25, VAR26, VAR27;
    FUN2(VAR2, "");
    for (VAR10 = 0; VAR10 < VAR5; VAR10++)
    {
        FUN2(VAR2, "", VAR4[VAR10]);
        if (VAR10 % 16 == 15)
            FUN2(VAR2, "");
    }
    if (VAR10 % 16)
        FUN2(VAR2, "");
    VAR11 = *VAR4++;
    VAR12 = ((*VAR4) >> 4) & 15;
    VAR4 += 1;
    VAR14 = FUN3(VAR7, VAR11);
    if (!VAR14)
    {
        VAR14 = FUN4(sizeof(VAR13));
        if (!VAR14)
            return FUN5(VAR28);
        memcpy(VAR14, &VAR29, sizeof(VAR13));
        VAR14->VAR30 = VAR11;
        VAR14->VAR12 = -1;
        VAR14->VAR31 = VAR7->VAR32;
        VAR7->VAR32 = VAR14;
    }
    if (VAR14->VAR12 != VAR12)
    {
        VAR14->VAR12 = VAR12;
        while (VAR4 + 4 < VAR9)
        {
            VAR15 = *VAR4++;
            VAR16 = (*VAR4) & 0xe0;
            if (VAR16 == 0)
            {
                FUN6(VAR2, VAR33, "", *VAR4);
            }
            VAR17 = (*VAR4++) & 1;
            if (VAR17)
            {
                VAR18 = *VAR4++;
                VAR19 = *VAR4++;
                VAR20 = *VAR4++;
                VAR21 = *VAR4++;
            }
            else
            {
                VAR18 = VAR4[0] & 0xfc;
                VAR19 = (((VAR4[0] & 3) << 2) | ((VAR4[1] >> 6) & 3)) << 4;
                VAR20 = (VAR4[1] << 2) & 0xf0;
                VAR21 = (VAR4[1] << 6) & 0xc0;
                VAR4 += 2;
            }
            if (VAR18 == 0)
                VAR21 = 0xff;
            FUN7(VAR20, VAR19);
            FUN8(VAR22, VAR23, VAR24, VAR18);
            FUN2(VAR2, "", VAR15, VAR22, VAR23, VAR24, VAR21);
            if (!!(VAR16 & 0x80) + !!(VAR16 & 0x40) + !!(VAR16 & 0x20) > 1)
            {
                FUN2(VAR2, "", VAR16);
                if (VAR2->VAR34 > VAR35)
                    return VAR36;
            }
            if (VAR16 & 0x80)
                VAR14->VAR37[VAR15] = FUN9(VAR22, VAR23, VAR24, 255 - VAR21);
            else if (VAR16 & 0x40)
                VAR14->VAR38[VAR15] = FUN9(VAR22, VAR23, VAR24, 255 - VAR21);
            else if (VAR16 & 0x20)
                VAR14->VAR39[VAR15] = FUN9(VAR22, VAR23, VAR24, 255 - VAR21);
        }
    }
    return 0;
}
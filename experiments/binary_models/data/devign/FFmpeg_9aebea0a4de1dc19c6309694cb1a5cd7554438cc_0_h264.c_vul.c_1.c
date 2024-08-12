static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16 = 0;
    VAR17 *VAR18;
    int VAR19, VAR20;
    int VAR21;
    VAR12->VAR22 = VAR2->VAR22;
    VAR12->VAR23 = 0;
    if (VAR12->VAR24 != -1)
    {
        VAR2->VAR25 = VAR12->VAR24;
        VAR12->VAR24 = -1;
    }
    if (VAR12->VAR26 != -1)
    {
        VAR2->VAR27 = VAR12->VAR26;
        VAR12->VAR26 = -1;
    }
    if (VAR12->VAR28 != VAR29)
    {
        VAR2->VAR30 = VAR12->VAR28;
        VAR12->VAR28 = VAR29;
    }
    FUN2(VAR12, &VAR12->VAR31);
    if (VAR9 == 0)
    {
    VAR18:
        VAR12->VAR32 = NULL;
        VAR12->VAR33 = 0;
        VAR18 = VAR12->VAR34[0];
        VAR20 = 0;
        for (VAR19 = 1; VAR12->VAR34[VAR19] && !VAR12->VAR34[VAR19]->VAR35->VAR36 && !VAR12->VAR34[VAR19]->VAR37; VAR19++)
            if (VAR12->VAR34[VAR19]->VAR38 < VAR18->VAR38)
            {
                VAR18 = VAR12->VAR34[VAR19];
                VAR20 = VAR19;
            }
        for (VAR19 = VAR20; VAR12->VAR34[VAR19]; VAR19++)
            VAR12->VAR34[VAR19] = VAR12->VAR34[VAR19 + 1];
        if (VAR18)
        {
            VAR18->VAR39 &= ~VAR40;
            VAR21 = FUN3(VAR12, VAR15, VAR18);
            if (VAR21 < 0)
                return VAR21;
            *VAR4 = 1;
        }
        return VAR16;
    }
    if (VAR12->VAR41 && FUN4(VAR6, VAR42, NULL))
    {
        int VAR43;
        VAR7 *VAR44 = FUN4(VAR6, VAR42, &VAR43);
        if (FUN5(VAR44, VAR43))
            FUN6(VAR12, VAR44, VAR43);
    }
    if (VAR12->VAR41 && VAR9 >= 9 && VAR8[0] == 1 && VAR8[2] == 0 && (VAR8[4] & 0xFC) == 0xFC && (VAR8[5] & 0x1F) && VAR8[8] == 0x67)
    {
        if (FUN5(VAR8, VAR9))
            return FUN6(VAR12, VAR8, VAR9);
    }
    VAR16 = FUN7(VAR12, VAR8, VAR9, 0);
    if (VAR16 < 0)
        return VAR45;
    if (!VAR12->VAR32 && VAR12->VAR46 == VAR47)
    {
        FUN8(VAR16 <= VAR9);
        goto VAR18;
    }
    if (!(VAR2->VAR48 & VAR49) && !VAR12->VAR32)
    {
        if (VAR2->VAR50 >= VAR51 || VAR9 >= 4 && !memcmp("", VAR8, 4))
            return VAR9;
        FUN9(VAR2, VAR52, "");
        return VAR45;
    }
    if (!(VAR2->VAR48 & VAR49) || (VAR12->VAR53 >= VAR12->VAR54 && VAR12->VAR54))
    {
        if (VAR2->VAR48 & VAR49)
            FUN10(VAR12, 1);
        if ((VAR21 = FUN11(VAR12, &VAR12->VAR55[0], 0)) < 0)
            return VAR21;
        *VAR4 = 0;
        if (VAR12->VAR56 && (VAR12->VAR56->VAR57))
        {
            if (!VAR12->VAR56->VAR57)
                VAR12->VAR56->VAR35->VAR22 |= VAR58;
            if (!VAR12->VAR2->VAR59 && (VAR12->VAR56->VAR60[0] == VAR61 || VAR12->VAR56->VAR60[1] == VAR61))
            {
                int VAR62;
                VAR14 *VAR35 = VAR12->VAR56->VAR35;
                int VAR63 = VAR12->VAR56->VAR60[0] == VAR61;
                VAR7 *VAR64[4];
                int VAR65[4];
                const VAR7 *VAR66[4];
                FUN9(VAR12->VAR2, VAR67, "", VAR63);
                for (VAR62 = 0; VAR62 < 4; VAR62++)
                {
                    VAR64[VAR62] = VAR35->VAR3[VAR62] + (VAR63 ^ 1) * VAR35->VAR68[VAR62];
                    VAR66[VAR62] = VAR35->VAR3[VAR62] + VAR63 * VAR35->VAR68[VAR62];
                    VAR65[VAR62] = 2 * VAR35->VAR68[VAR62];
                }
                FUN12(VAR64, VAR65, VAR66, VAR65, VAR35->VAR69, VAR35->VAR25, VAR35->VAR27 >> 1);
            }
            VAR21 = FUN3(VAR12, VAR15, VAR12->VAR56);
            if (VAR21 < 0)
                return VAR21;
            *VAR4 = 1;
            if (VAR70)
            {
                FUN13(VAR12->VAR2, VAR15, NULL, VAR12->VAR56->VAR71, VAR12->VAR56->VAR72, VAR12->VAR56->VAR73, &VAR12->VAR74, VAR12->VAR75, VAR12->VAR54, VAR12->VAR76, 1);
            }
        }
    }
    FUN8(VAR15->VAR8[0] || !*VAR4);
    FUN2(VAR12, &VAR12->VAR31);
    return FUN14(VAR16, VAR9);
}
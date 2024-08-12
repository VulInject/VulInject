int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    VAR2->VAR12 = (VAR2->VAR13 + 15) / 16;
    if (VAR2->VAR14->VAR15 > VAR16 || (VAR2->VAR14->VAR15 > VAR2->VAR12 && VAR2->VAR12))
    {
        FUN2(VAR2->VAR14, VAR17, "");
        return -1;
    }
    if ((VAR2->VAR18 || VAR2->VAR13) && FUN3(VAR2->VAR14, VAR2->VAR18, VAR2->VAR13))
        return -1;
    FUN4(&VAR2->VAR19, VAR2->VAR14);
    FUN5(VAR2);
    VAR2->VAR20 = VAR2->VAR14->VAR20;
    VAR2->VAR21 = VAR2->VAR14->VAR21;
    VAR2->VAR22 = (VAR2->VAR18 + 15) / 16;
    VAR2->VAR23 = VAR2->VAR22 + 1;
    VAR2->VAR24 = VAR2->VAR22 * 2 + 1;
    VAR2->VAR25 = VAR2->VAR22 * 4 + 1;
    VAR7 = VAR2->VAR12 * VAR2->VAR23;
    VAR8 = (VAR2->VAR12 + 2) * VAR2->VAR23 + 1;
    FUN6(VAR2->VAR14->VAR26, &(VAR2->VAR27), &(VAR2->VAR28));
    VAR2->VAR29 = VAR2->VAR22 * 16;
    VAR2->VAR30 = VAR2->VAR12 * 16;
    VAR2->VAR31 = VAR2->VAR22 * VAR2->VAR12;
    VAR2->VAR32[0] = VAR2->VAR32[1] = VAR2->VAR32[2] = VAR2->VAR32[3] = VAR2->VAR24;
    VAR2->VAR32[4] = VAR2->VAR32[5] = VAR2->VAR23;
    VAR3 = VAR2->VAR24 * (2 * VAR2->VAR12 + 1);
    VAR4 = VAR2->VAR23 * (VAR2->VAR12 + 1);
    VAR5 = VAR3 + 2 * VAR4;
    VAR2->VAR33 = FUN7(VAR2->VAR14->VAR33 & 0xFF) + (FUN7((VAR2->VAR14->VAR33 >> 8) & 0xFF) << 8) + (FUN7((VAR2->VAR14->VAR33 >> 16) & 0xFF) << 16) + (FUN7((VAR2->VAR14->VAR33 >> 24) & 0xFF) << 24);
    VAR2->VAR34 = FUN7(VAR2->VAR14->VAR34 & 0xFF) + (FUN7((VAR2->VAR14->VAR34 >> 8) & 0xFF) << 8) + (FUN7((VAR2->VAR14->VAR34 >> 16) & 0xFF) << 16) + (FUN7((VAR2->VAR14->VAR34 >> 24) & 0xFF) << 24);
    VAR2->VAR14->VAR35 = (VAR36 *)&VAR2->VAR37;
    FUN8(VAR2->VAR38, (VAR2->VAR31 + 1) * sizeof(int))
    for (VAR10 = 0; VAR10 < VAR2->VAR12; VAR10++)
    {
        for (VAR9 = 0; VAR9 < VAR2->VAR22; VAR9++)
        {
            VAR2->VAR38[VAR9 + VAR10 * VAR2->VAR22] = VAR9 + VAR10 * VAR2->VAR23;
        }
    }
    VAR2->VAR38[VAR2->VAR12 * VAR2->VAR22] = (VAR2->VAR12 - 1) * VAR2->VAR23 + VAR2->VAR22;
    if (VAR2->VAR39)
    {
        FUN8(VAR2->VAR40, VAR8 * 2 * sizeof(VAR41))
        FUN8(VAR2->VAR42, VAR8 * 2 * sizeof(VAR41)) FUN8(VAR2->VAR43, VAR8 * 2 * sizeof(VAR41)) FUN8(VAR2->VAR44, VAR8 * 2 * sizeof(VAR41)) FUN8(VAR2->VAR45, VAR8 * 2 * sizeof(VAR41)) FUN8(VAR2->VAR46, VAR8 * 2 * sizeof(VAR41)) VAR2->VAR47 = VAR2->VAR40 + VAR2->VAR23 + 1;
        VAR2->VAR48 = VAR2->VAR42 + VAR2->VAR23 + 1;
        VAR2->VAR49 = VAR2->VAR43 + VAR2->VAR23 + 1;
        VAR2->VAR50 = VAR2->VAR44 + VAR2->VAR23 + 1;
        VAR2->VAR51 = VAR2->VAR45 + VAR2->VAR23 + 1;
        VAR2->VAR52 = VAR2->VAR46 + VAR2->VAR23 + 1;
        if (VAR2->VAR53)
        {
            FUN8(VAR2->VAR54, 2 * 2 * (VAR55 + 1) * (VAR56 + 1) * 2 * sizeof(int));
        }
        FUN8(VAR2->VAR14->VAR57, 256);
        FUN8(VAR2->VAR58, VAR7 * sizeof(VAR59))
        FUN8(VAR2->VAR60, VAR7 * sizeof(int)) FUN8(VAR2->VAR61, 64 * 32 * sizeof(int)) FUN8(VAR2->VAR62, 64 * 32 * sizeof(int)) FUN8(VAR2->VAR63, 64 * 32 * 2 * sizeof(VAR59)) FUN8(VAR2->VAR64, 64 * 32 * 2 * sizeof(VAR59)) FUN8(VAR2->VAR65, VAR66 * sizeof(VAR67 *)) FUN8(VAR2->VAR68, VAR66 * sizeof(VAR67 *)) if (VAR2->VAR14->VAR69) { FUN8(VAR2->VAR70, 2 * 64 * sizeof(VAR59)) }
    }
    FUN8(VAR2->VAR71, VAR66 * sizeof(VAR67))
    FUN8(VAR2->VAR72, VAR7 * sizeof(VAR73)) if (VAR2->VAR74 == VAR75 || (VAR2->VAR20 & VAR76))
    {
        for (VAR6 = 0; VAR6 < 2; VAR6++)
        {
            int VAR77, VAR78;
            for (VAR77 = 0; VAR77 < 2; VAR77++)
            {
                for (VAR78 = 0; VAR78 < 2; VAR78++)
                {
                    FUN8(VAR2->VAR79[VAR6][VAR77][VAR78], VAR8 * 2 * sizeof(VAR41))
                    VAR2->VAR80[VAR6][VAR77][VAR78] = VAR2->VAR79[VAR6][VAR77][VAR78] + VAR2->VAR23 + 1;
                }
                FUN8(VAR2->VAR81[VAR6][VAR77], VAR7 * 2 * sizeof(VAR73))
                FUN8(VAR2->VAR82[VAR6][VAR77], VAR8 * 2 * sizeof(VAR41)) VAR2->VAR83[VAR6][VAR77] = VAR2->VAR82[VAR6][VAR77] + VAR2->VAR23 + 1;
            }
            FUN8(VAR2->VAR84[VAR6], VAR7 * 2 * sizeof(VAR73))
        }
    }
    if (VAR2->VAR85 == VAR86)
    {
        FUN8(VAR2->VAR87, VAR5 * sizeof(VAR41) * 16);
        VAR2->VAR88[0] = VAR2->VAR87 + VAR2->VAR24 + 1;
        VAR2->VAR88[1] = VAR2->VAR87 + VAR3 + VAR2->VAR23 + 1;
        VAR2->VAR88[2] = VAR2->VAR88[1] + VAR4;
        FUN8(VAR2->VAR89, VAR3);
        VAR2->VAR90 = VAR2->VAR89 + VAR2->VAR24 + 1;
        FUN8(VAR2->VAR91, VAR7 * sizeof(VAR73))
        FUN8(VAR2->VAR92, VAR7 * sizeof(VAR73))
    }
    if (VAR2->VAR93 || VAR2->VAR94 || !VAR2->VAR39)
    {
        FUN8(VAR2->VAR95, VAR5 * sizeof(VAR41));
        VAR2->VAR96[0] = VAR2->VAR95 + VAR2->VAR24 + 1;
        VAR2->VAR96[1] = VAR2->VAR95 + VAR3 + VAR2->VAR23 + 1;
        VAR2->VAR96[2] = VAR2->VAR96[1] + VAR4;
        for (VAR6 = 0; VAR6 < VAR5; VAR6++)
            VAR2->VAR95[VAR6] = 1024;
    }
    FUN8(VAR2->VAR97, VAR7);
    memset(VAR2->VAR97, 1, VAR7);
    FUN8(VAR2->VAR98, VAR7 + 2);
    FUN8(VAR2->VAR99, VAR100);
    VAR2->VAR101.VAR102 = -1;
    if ((VAR2->VAR14->VAR103 & (VAR104 | VAR105)) || (VAR2->VAR14->VAR106))
    {
        VAR2->VAR107[0] = FUN9((VAR2->VAR22 * 16 + 2 * VAR108) * VAR2->VAR12 * 16 + 2 * VAR108);
        VAR2->VAR107[1] = FUN9((VAR2->VAR22 * 8 + VAR108) * VAR2->VAR12 * 8 + VAR108);
        VAR2->VAR107[2] = FUN9((VAR2->VAR22 * 8 + VAR108) * VAR2->VAR12 * 8 + VAR108);
    }
    VAR2->VAR109 = 1;
    VAR2->VAR110[0] = VAR2;
    VAR11 = VAR2->VAR74 == VAR111 ? 1 : VAR2->VAR14->VAR15;
    for (VAR6 = 1; VAR6 < VAR11; VAR6++)
    {
        VAR2->VAR110[VAR6] = FUN9(sizeof(VAR1));
        memcpy(VAR2->VAR110[VAR6], VAR2, sizeof(VAR1));
    }
    for (VAR6 = 0; VAR6 < VAR11; VAR6++)
    {
        if (FUN10(VAR2->VAR110[VAR6], VAR2) < 0)
            goto VAR112;
        VAR2->VAR110[VAR6]->VAR113 = (VAR2->VAR12 * (VAR6) + VAR2->VAR14->VAR15 / 2) / VAR2->VAR14->VAR15;
        VAR2->VAR110[VAR6]->VAR114 = (VAR2->VAR12 * (VAR6 + 1) + VAR2->VAR14->VAR15 / 2) / VAR2->VAR14->VAR15;
    }
    return 0;
VAR112:
    FUN11(VAR2);
    return -1;
}
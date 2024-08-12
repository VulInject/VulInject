static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    enum AVDiscard VAR16;
    VAR17 *FUN2(VAR18), *VAR19;
    FUN3(VAR8, 0);
    if ((VAR10 = FUN4(VAR8, VAR6->VAR3, VAR6->VAR20)) < 0)
        return VAR10;
    VAR19 = VAR8->VAR21[VAR22];
    VAR15 = VAR8->VAR23 || VAR8->VAR24 == VAR22 || VAR8->VAR25 == VAR22;
    VAR16 = !VAR15 ? VAR26 : !VAR8->VAR27 ? VAR28
                                                                : VAR29;
    if (VAR2->VAR30 >= VAR16)
    {
        VAR8->VAR31 = 1;
        goto VAR32;
    }
    VAR8->VAR33 = VAR8->VAR34.VAR35 && VAR2->VAR36 < VAR16;
    for (VAR13 = 0; VAR13 < 5; VAR13++)
        if (VAR8->VAR37[VAR13].VAR3[0] && &VAR8->VAR37[VAR13] != VAR19 && &VAR8->VAR37[VAR13] != VAR8->VAR21[VAR38] && &VAR8->VAR37[VAR13] != VAR8->VAR21[VAR39] && &VAR8->VAR37[VAR13] != VAR8->VAR21[VAR40])
            FUN5(VAR8, &VAR8->VAR37[VAR13], 1, 0);
    for (VAR13 = 0; VAR13 < 5; VAR13++)
        if (&VAR8->VAR37[VAR13] != VAR19 && &VAR8->VAR37[VAR13] != VAR8->VAR21[VAR38] && &VAR8->VAR37[VAR13] != VAR8->VAR21[VAR39] && &VAR8->VAR37[VAR13] != VAR8->VAR21[VAR40])
        {
            VAR18 = VAR8->VAR21[VAR22] = &VAR8->VAR37[VAR13];
            break;
        }
    if (VAR13 == 5)
    {
        FUN6(VAR2, VAR41, "");
        FUN7();
    }
    if (VAR18->VAR3[0])
        FUN5(VAR8, VAR18, 1, 0);
    VAR18->VAR42 = VAR8->VAR27;
    VAR18->VAR43 = VAR8->VAR27 ? VAR44 : VAR45;
    VAR18->VAR46 = VAR15 ? 3 : 0;
    if ((VAR10 = FUN8(VAR8, VAR18)))
    {
        FUN6(VAR2, VAR47, "");
        return VAR10;
    }
    if (VAR8->VAR25 != VAR48)
    {
        VAR8->VAR49[VAR40] = VAR8->VAR21[VAR8->VAR25];
    }
    else
    {
        VAR8->VAR49[VAR40] = VAR8->VAR21[VAR40];
    }
    if (VAR8->VAR24 != VAR48)
    {
        VAR8->VAR49[VAR39] = VAR8->VAR21[VAR8->VAR24];
    }
    else
    {
        VAR8->VAR49[VAR39] = VAR8->VAR21[VAR39];
    }
    if (VAR8->VAR23)
    {
        VAR8->VAR49[VAR38] = VAR18;
    }
    else
    {
        VAR8->VAR49[VAR38] = VAR8->VAR21[VAR38];
    }
    VAR8->VAR49[VAR22] = VAR18;
    FUN9(VAR2);
    if (!VAR8->VAR27 && (!VAR8->VAR21[VAR38] || !VAR8->VAR21[VAR39] || !VAR8->VAR21[VAR40]))
    {
        FUN6(VAR2, VAR50, "");
        return VAR51;
    }
    VAR8->VAR52 = VAR18->VAR52[0];
    VAR8->VAR53 = VAR18->VAR52[1];
    if (!VAR8->VAR54)
        VAR8->VAR54 = FUN10(21 * VAR8->VAR52);
    memset(VAR8->VAR55, 0, VAR8->VAR56 * sizeof(*VAR8->VAR55));
    memset(VAR8->VAR57 + VAR8->VAR58 * 2 - 1, 0, (VAR8->VAR56 + 1) * sizeof(*VAR8->VAR57));
    if (!(VAR2->VAR59 & VAR60))
    {
        VAR8->VAR61[0][15] = VAR8->VAR61[0][23] = 127;
        memset(VAR8->VAR61[1] - 1, 127, VAR8->VAR56 * sizeof(*VAR8->VAR61) + 1);
    }
    memset(VAR8->VAR62, 0, sizeof(VAR8->VAR62));
    if (VAR8->VAR27)
        memset(VAR8->VAR63, VAR64, VAR8->VAR56 * 4);
    VAR8->VAR65.VAR14 = -VAR66;
    VAR8->VAR67.VAR14 = ((VAR8->VAR58 - 1) << 6) + VAR66;
    for (VAR12 = 0; VAR12 < VAR8->VAR58; VAR12++)
    {
        VAR68 *VAR69 = &VAR8->VAR70[VAR12 & (VAR8->VAR71 - 1)];
        VAR72 *VAR73 = VAR8->VAR57 + (VAR8->VAR58 - VAR12 - 1) * 2;
        int VAR74 = VAR12 * VAR8->VAR56;
        VAR75 *VAR76[3] = {VAR18->VAR3[0] + 16 * VAR12 * VAR8->VAR52, VAR18->VAR3[1] + 8 * VAR12 * VAR8->VAR53, VAR18->VAR3[2] + 8 * VAR12 * VAR8->VAR53};
        memset(VAR73 - 1, 0, sizeof(*VAR73));
        memset(VAR8->VAR77, 0, sizeof(VAR8->VAR77));
        FUN11(VAR8->VAR78, VAR64 * 0x01010101);
        if (!(VAR2->VAR59 & VAR60))
        {
            for (VAR13 = 0; VAR13 < 3; VAR13++)
                for (VAR14 = 0; VAR14 < 16 >> !!VAR13; VAR14++)
                    VAR76[VAR13][VAR14 * VAR18->VAR52[VAR13] - 1] = 129;
            if (VAR12 == 1)
                VAR8->VAR61[0][15] = VAR8->VAR61[0][23] = VAR8->VAR61[0][31] = 129;
        }
        VAR8->VAR65.VAR79 = -VAR66;
        VAR8->VAR67.VAR79 = ((VAR8->VAR56 - 1) << 6) + VAR66;
        if (VAR19 && VAR8->VAR80.VAR81 && !VAR8->VAR80.VAR82)
            FUN12(VAR19, VAR12, 0);
        for (VAR11 = 0; VAR11 < VAR8->VAR56; VAR11++, VAR74++, VAR73++)
        {
            VAR8->VAR83.FUN13(VAR76[0] + (VAR11 & 3) * 4 * VAR8->VAR52 + 64, VAR8->VAR52, 4);
            VAR8->VAR83.FUN13(VAR76[1] + (VAR11 & 7) * VAR8->VAR53 + 64, VAR76[2] - VAR76[1], 2);
            FUN14(VAR8, VAR73, VAR11, VAR12, VAR18->VAR84[0] + VAR74, VAR19 && VAR19->VAR84[0] ? VAR19->VAR84[0] + VAR74 : NULL);
            FUN15(VAR8, VAR73, VAR11, VAR12, VAR74, VAR38);
            if (!VAR73->VAR85)
                FUN16(VAR8, VAR69, VAR73, VAR8->VAR55[VAR11], VAR8->VAR77);
            if (VAR73->VAR86 <= VAR87)
                FUN17(VAR8, VAR76, VAR73, VAR11, VAR12);
            else
                FUN18(VAR8, VAR76, VAR73, VAR11, VAR12);
            FUN15(VAR8, VAR73, VAR11, VAR12, VAR74, VAR39);
            if (!VAR73->VAR85)
            {
                FUN19(VAR8, VAR76, VAR73);
            }
            else
            {
                FUN20(VAR8->VAR77);
                FUN21(VAR8->VAR55[VAR11], 0);
                if (VAR73->VAR86 != VAR87 && VAR73->VAR86 != VAR88)
                {
                    VAR8->VAR77[8] = 0;
                    VAR8->VAR55[VAR11][8] = 0;
                }
            }
            if (VAR8->VAR33)
                FUN22(VAR8, VAR73, &VAR8->VAR89[VAR11]);
            FUN15(VAR8, VAR73, VAR11, VAR12, VAR74, VAR40);
            VAR76[0] += 16;
            VAR76[1] += 8;
            VAR76[2] += 8;
            VAR8->VAR65.VAR79 -= 64;
            VAR8->VAR67.VAR79 -= 64;
        }
        if (VAR8->VAR33)
        {
            if (VAR8->VAR34.VAR90)
                FUN23(VAR8, VAR18, VAR12);
            else
                FUN24(VAR8, VAR18, VAR12);
        }
        VAR8->VAR65.VAR14 -= 64;
        VAR8->VAR67.VAR14 -= 64;
        FUN25(VAR18, VAR12, 0);
    }
    FUN25(VAR18, VAR91, 0);
VAR32:
    if (!VAR8->VAR92)
        VAR8->VAR93[0] = VAR8->VAR93[1];
    memcpy(&VAR8->VAR21[0], &VAR8->VAR49[0], sizeof(VAR8->VAR21[0]) * 4);
    if (!VAR8->VAR31)
    {
        *(VAR17 *)VAR3 = *VAR18;
        *VAR4 = sizeof(VAR17);
    }
    return VAR6->VAR20;
}
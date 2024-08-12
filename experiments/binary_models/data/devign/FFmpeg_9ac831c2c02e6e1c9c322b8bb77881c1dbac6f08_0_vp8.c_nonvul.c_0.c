static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    enum AVDiscard VAR16;
    VAR17 *VAR18;
    if ((VAR10 = FUN2(VAR8, VAR6->VAR3, VAR6->VAR19)) < 0)
        return VAR10;
    VAR15 = VAR8->VAR20 || VAR8->VAR21 == VAR22 || VAR8->VAR23 == VAR22;
    VAR16 = !VAR15 ? VAR24 : !VAR8->VAR25 ? VAR26
                                                                : VAR27;
    if (VAR2->VAR28 >= VAR16)
    {
        VAR8->VAR29 = 1;
        goto VAR30;
    }
    VAR8->VAR31 = VAR8->VAR32.VAR33 && VAR2->VAR34 < VAR16;
    for (VAR13 = 0; VAR13 < 4; VAR13++)
        if (&VAR8->VAR35[VAR13] != VAR8->VAR36[VAR37] && &VAR8->VAR35[VAR13] != VAR8->VAR36[VAR38] && &VAR8->VAR35[VAR13] != VAR8->VAR36[VAR39])
        {
            VAR18 = VAR8->VAR36[VAR22] = &VAR8->VAR35[VAR13];
            break;
        }
    if (VAR18->VAR3[0])
        VAR2->FUN3(VAR2, VAR18);
    VAR18->VAR40 = VAR8->VAR25;
    VAR18->VAR41 = VAR8->VAR25 ? VAR42 : VAR43;
    VAR18->VAR44 = VAR15 ? 3 : 0;
    if ((VAR10 = VAR2->FUN4(VAR2, VAR18)))
    {
        FUN5(VAR2, VAR45, "");
        return VAR10;
    }
    if (!VAR8->VAR25 && (!VAR8->VAR36[VAR37] || !VAR8->VAR36[VAR38] || !VAR8->VAR36[VAR39]))
    {
        FUN5(VAR2, VAR46, "");
        return VAR47;
    }
    VAR8->VAR48 = VAR18->VAR48[0];
    VAR8->VAR49 = VAR18->VAR48[1];
    if (!VAR8->VAR50)
        VAR8->VAR50 = FUN6(21 * VAR8->VAR48);
    memset(VAR8->VAR51, 0, VAR8->VAR52 * sizeof(*VAR8->VAR51));
    memset(VAR8->VAR53, 127, (VAR8->VAR52 + 1) * sizeof(*VAR8->VAR53));
    for (VAR12 = 0; VAR12 < VAR8->VAR54; VAR12++)
    {
        VAR55 *VAR56 = &VAR8->VAR57[VAR12 & (VAR8->VAR58 - 1)];
        VAR59 *VAR60 = VAR8->VAR61 + VAR12 * VAR8->VAR62;
        VAR63 *VAR64 = VAR8->VAR65 + 4 * VAR12 * VAR8->VAR66;
        VAR63 *VAR67[3] = {VAR18->VAR3[0] + 16 * VAR12 * VAR8->VAR48, VAR18->VAR3[1] + 8 * VAR12 * VAR8->VAR49, VAR18->VAR3[2] + 8 * VAR12 * VAR8->VAR49};
        memset(VAR8->VAR68, 0, sizeof(VAR8->VAR68));
        if (!(VAR2->VAR69 & VAR70))
            for (VAR13 = 0; VAR13 < 3; VAR13++)
                for (VAR14 = 0; VAR14 < 16 >> !!VAR13; VAR14++)
                    VAR67[VAR13][VAR14 * VAR18->VAR48[VAR13] - 1] = 129;
        if (VAR12)
            memset(VAR8->VAR53, 129, sizeof(*VAR8->VAR53));
        for (VAR11 = 0; VAR11 < VAR8->VAR52; VAR11++)
        {
            FUN7(VAR8, VAR60, VAR11, VAR12, VAR64 + 4 * VAR11);
            if (!VAR60->VAR71)
                FUN8(VAR8, VAR56, VAR60, VAR8->VAR51[VAR11], VAR8->VAR68);
            else
            {
                FUN9(VAR8->VAR72);
                FUN10(VAR8->VAR72[4]);
            }
            if (VAR60->VAR73 <= VAR74)
            {
                FUN11(VAR8, VAR67, VAR60, VAR64 + 4 * VAR11, VAR11, VAR12);
                memset(VAR60->VAR75, 0, sizeof(VAR60->VAR75));
            }
            else
            {
                FUN12(VAR8, VAR67, VAR60, VAR11, VAR12);
            }
            if (!VAR60->VAR71)
            {
                FUN13(VAR8, VAR67[0], VAR67[1], VAR67[2], VAR60);
            }
            else
            {
                FUN10(VAR8->VAR68);
                FUN14(VAR8->VAR51[VAR11], 0);
                if (VAR60->VAR73 != VAR74 && VAR60->VAR73 != VAR76)
                {
                    VAR8->VAR68[8] = 0;
                    VAR8->VAR51[VAR11][8] = 0;
                }
            }
            VAR67[0] += 16;
            VAR67[1] += 8;
            VAR67[2] += 8;
            VAR60++;
        }
        if (VAR8->VAR31)
        {
            if (VAR8->VAR32.VAR77)
                FUN15(VAR8, VAR12);
            else
                FUN16(VAR8, VAR12);
        }
    }
VAR30:
    if (!VAR8->VAR78)
        VAR8->VAR79[0] = VAR8->VAR79[1];
    if (VAR8->VAR23 == VAR38 && VAR8->VAR21 == VAR39)
        FUN17(VAR17 *, VAR8->VAR36[VAR38], VAR8->VAR36[VAR39]);
    else
    {
        if (VAR8->VAR23 != VAR80)
            VAR8->VAR36[VAR39] = VAR8->VAR36[VAR8->VAR23];
        if (VAR8->VAR21 != VAR80)
            VAR8->VAR36[VAR38] = VAR8->VAR36[VAR8->VAR21];
    }
    if (VAR8->VAR20)
        VAR8->VAR36[VAR37] = VAR8->VAR36[VAR22];
    for (VAR13 = 0; VAR13 < 4; VAR13++)
        if (VAR8->VAR35[VAR13].VAR3[0] && &VAR8->VAR35[VAR13] != VAR8->VAR36[VAR22] && &VAR8->VAR35[VAR13] != VAR8->VAR36[VAR37] && &VAR8->VAR35[VAR13] != VAR8->VAR36[VAR38] && &VAR8->VAR35[VAR13] != VAR8->VAR36[VAR39])
            VAR2->FUN3(VAR2, &VAR8->VAR35[VAR13]);
    if (!VAR8->VAR29)
    {
        *(VAR17 *)VAR3 = *VAR8->VAR36[VAR22];
        *VAR4 = sizeof(VAR17);
    }
    return VAR6->VAR19;
}
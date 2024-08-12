int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    enum AVDiscard VAR14;
    VAR15 *FUN2(VAR16), *VAR17;
    if ((VAR10 = FUN3(VAR8, VAR6->VAR3, VAR6->VAR18)) < 0)
        goto VAR19;
    VAR17 = VAR8->VAR20[VAR21];
    VAR12 = VAR8->VAR22 || VAR8->VAR23 == VAR21 || VAR8->VAR24 == VAR21;
    VAR14 = !VAR12 ? VAR25 : !VAR8->VAR26 ? VAR27
                                                                : VAR28;
    if (VAR2->VAR29 >= VAR14)
    {
        VAR8->VAR30 = 1;
        memcpy(&VAR8->VAR31[0], &VAR8->VAR20[0], sizeof(VAR8->VAR20[0]) * 4);
        goto VAR32;
    }
    VAR8->VAR33 = VAR8->VAR34.VAR35 && VAR2->VAR36 < VAR14;
    for (VAR11 = 0; VAR11 < 5; VAR11++)
        if (VAR8->VAR37[VAR11].VAR38.VAR39->VAR3[0] && &VAR8->VAR37[VAR11] != VAR17 && &VAR8->VAR37[VAR11] != VAR8->VAR20[VAR40] && &VAR8->VAR37[VAR11] != VAR8->VAR20[VAR41] && &VAR8->VAR37[VAR11] != VAR8->VAR20[VAR42])
            FUN4(VAR8, &VAR8->VAR37[VAR11]);
    for (VAR11 = 0; VAR11 < 5; VAR11++)
        if (&VAR8->VAR37[VAR11] != VAR17 && &VAR8->VAR37[VAR11] != VAR8->VAR20[VAR40] && &VAR8->VAR37[VAR11] != VAR8->VAR20[VAR41] && &VAR8->VAR37[VAR11] != VAR8->VAR20[VAR42])
        {
            VAR16 = VAR8->VAR20[VAR21] = &VAR8->VAR37[VAR11];
            break;
        }
    if (VAR11 == 5)
    {
        FUN5(VAR2, VAR43, "");
        FUN6();
    }
    if (VAR16->VAR38.VAR39->VAR3[0])
        FUN4(VAR8, VAR16);
    if (!VAR8->VAR26 && (!VAR8->VAR20[VAR40] || !VAR8->VAR20[VAR41] || !VAR8->VAR20[VAR42]))
    {
        FUN5(VAR2, VAR44, "");
        VAR10 = VAR45;
        goto VAR19;
    }
    VAR16->VAR38.VAR39->VAR46 = VAR8->VAR26;
    VAR16->VAR38.VAR39->VAR47 = VAR8->VAR26 ? VAR48 : VAR49;
    if ((VAR10 = FUN7(VAR8, VAR16, VAR12)))
    {
        FUN5(VAR2, VAR50, "");
        goto VAR19;
    }
    if (VAR8->VAR24 != VAR51)
        VAR8->VAR31[VAR42] = VAR8->VAR20[VAR8->VAR24];
    else
        VAR8->VAR31[VAR42] = VAR8->VAR20[VAR42];
    if (VAR8->VAR23 != VAR51)
        VAR8->VAR31[VAR41] = VAR8->VAR20[VAR8->VAR23];
    else
        VAR8->VAR31[VAR41] = VAR8->VAR20[VAR41];
    if (VAR8->VAR22)
        VAR8->VAR31[VAR40] = VAR16;
    else
        VAR8->VAR31[VAR40] = VAR8->VAR20[VAR40];
    VAR8->VAR31[VAR21] = VAR16;
    FUN8(VAR2);
    VAR8->VAR52 = VAR16->VAR38.VAR39->VAR52[0];
    VAR8->VAR53 = VAR16->VAR38.VAR39->VAR52[1];
    memset(VAR8->VAR54, 0, VAR8->VAR55 * sizeof(*VAR8->VAR54));
    if (!VAR8->VAR56)
        memset(VAR8->VAR57 + VAR8->VAR58 * 2 - 1, 0, (VAR8->VAR55 + 1) * sizeof(*VAR8->VAR57));
    if (!VAR8->VAR56 && VAR8->VAR26)
        memset(VAR8->VAR59, VAR60, VAR8->VAR55 * 4);
    memset(VAR8->VAR61, 0, sizeof(VAR8->VAR61));
    if (VAR8->VAR56 == 1)
    {
        if (VAR17 && VAR8->VAR62.VAR63 && !VAR8->VAR62.VAR64)
            FUN9(&VAR17->VAR38, 1, 0);
        FUN10(VAR2, VAR16, VAR17);
    }
    if (VAR2->VAR65 == VAR66)
        VAR13 = 1;
    else
        VAR13 = FUN11(VAR8->VAR67, VAR2->VAR68);
    VAR8->VAR13 = VAR13;
    VAR8->VAR16 = VAR16;
    VAR8->VAR17 = VAR17;
    VAR8->VAR69.VAR70 = -VAR71;
    VAR8->VAR72.VAR70 = ((VAR8->VAR58 - 1) << 6) + VAR71;
    for (VAR11 = 0; VAR11 < VAR73; VAR11++)
    {
        VAR8->VAR74[VAR11].VAR75 = 0;
        VAR8->VAR74[VAR11].VAR76 = VAR77;
    }
    VAR2->FUN12(VAR2, VAR78, VAR8->VAR74, NULL, VAR13);
    FUN13(&VAR16->VAR38, VAR77, 0);
    memcpy(&VAR8->VAR20[0], &VAR8->VAR31[0], sizeof(VAR8->VAR20[0]) * 4);
VAR32:
    if (!VAR8->VAR79)
        VAR8->VAR80[0] = VAR8->VAR80[1];
    if (!VAR8->VAR30)
    {
        if ((VAR10 = FUN14(VAR3, VAR16->VAR38.VAR39)) < 0)
            return VAR10;
        *VAR4 = 1;
    }
    return VAR6->VAR18;
VAR19:
    memcpy(&VAR8->VAR31[0], &VAR8->VAR20[0], sizeof(VAR8->VAR20[0]) * 4);
    return VAR10;
}
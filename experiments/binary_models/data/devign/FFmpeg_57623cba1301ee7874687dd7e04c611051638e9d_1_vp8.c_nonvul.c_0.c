int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    enum AVDiscard VAR15;
    VAR16 *FUN2(VAR17), *VAR18;
    if (VAR7)
        VAR11 = FUN3(VAR9, VAR6->VAR3, VAR6->VAR19);
    else
        VAR11 = FUN4(VAR9, VAR6->VAR3, VAR6->VAR19);
    if (VAR11 < 0)
        goto VAR20;
    if (VAR9->VAR21)
    {
    }
    else if (!VAR7 && VAR9->VAR22 == VAR23)
    {
        enum AVPixelFormat VAR24[] = {
            VAR25,
            VAR26,
            VAR23,
        };
        VAR9->VAR22 = FUN5(VAR9->VAR2, VAR24);
        if (VAR9->VAR22 < 0)
        {
            VAR11 = FUN6(VAR27);
            goto VAR20;
        }
        VAR2->VAR22 = VAR9->VAR22;
    }
    VAR18 = VAR9->VAR28[VAR29];
    VAR13 = VAR9->VAR30 || VAR9->VAR31 == VAR29 || VAR9->VAR32 == VAR29;
    VAR15 = !VAR13 ? VAR33 : !VAR9->VAR34 ? VAR35
                                                                : VAR36;
    if (VAR2->VAR37 >= VAR15)
    {
        VAR9->VAR38 = 1;
        memcpy(&VAR9->VAR39[0], &VAR9->VAR28[0], sizeof(VAR9->VAR28[0]) * 4);
        goto VAR40;
    }
    VAR9->VAR41 = VAR9->VAR42.VAR43 && VAR2->VAR44 < VAR15;
    for (VAR12 = 0; VAR12 < 5; VAR12++)
        if (VAR9->VAR45[VAR12].VAR46.VAR47->VAR3[0] && &VAR9->VAR45[VAR12] != VAR18 && &VAR9->VAR45[VAR12] != VAR9->VAR28[VAR48] && &VAR9->VAR45[VAR12] != VAR9->VAR28[VAR49] && &VAR9->VAR45[VAR12] != VAR9->VAR28[VAR50])
            FUN7(VAR9, &VAR9->VAR45[VAR12]);
    VAR17 = VAR9->VAR28[VAR29] = FUN8(VAR9);
    if (!VAR9->VAR51)
        VAR2->VAR51 = VAR52;
    if (VAR9->VAR53)
        VAR2->VAR54 = VAR55;
    else
        VAR2->VAR54 = VAR56;
    if (!VAR9->VAR34 && (!VAR9->VAR28[VAR48] || !VAR9->VAR28[VAR49] || !VAR9->VAR28[VAR50]))
    {
        FUN9(VAR2, VAR57, "");
        VAR11 = VAR58;
        goto VAR20;
    }
    VAR17->VAR46.VAR47->VAR59 = VAR9->VAR34;
    VAR17->VAR46.VAR47->VAR60 = VAR9->VAR34 ? VAR61 : VAR62;
    if ((VAR11 = FUN10(VAR9, VAR17, VAR13)))
    {
        FUN9(VAR2, VAR63, "");
        goto VAR20;
    }
    if (VAR9->VAR32 != VAR64)
        VAR9->VAR39[VAR50] = VAR9->VAR28[VAR9->VAR32];
    else
        VAR9->VAR39[VAR50] = VAR9->VAR28[VAR50];
    if (VAR9->VAR31 != VAR64)
        VAR9->VAR39[VAR49] = VAR9->VAR28[VAR9->VAR31];
    else
        VAR9->VAR39[VAR49] = VAR9->VAR28[VAR49];
    if (VAR9->VAR30)
        VAR9->VAR39[VAR48] = VAR17;
    else
        VAR9->VAR39[VAR48] = VAR9->VAR28[VAR48];
    VAR9->VAR39[VAR29] = VAR17;
    FUN11(VAR2);
    if (VAR2->VAR65)
    {
        VAR11 = VAR2->VAR65->FUN12(VAR2, VAR6->VAR3, VAR6->VAR19);
        if (VAR11 < 0)
            goto VAR20;
        VAR11 = VAR2->VAR65->FUN13(VAR2, VAR6->VAR3, VAR6->VAR19);
        if (VAR11 < 0)
            goto VAR20;
        VAR11 = VAR2->VAR65->FUN14(VAR2);
        if (VAR11 < 0)
            goto VAR20;
    }
    else
    {
        VAR9->VAR66 = VAR17->VAR46.VAR47->VAR66[0];
        VAR9->VAR67 = VAR17->VAR46.VAR47->VAR66[1];
        memset(VAR9->VAR68, 0, VAR9->VAR69 * sizeof(*VAR9->VAR68));
        if (!VAR9->VAR70)
            memset(VAR9->VAR71 + VAR9->VAR72 * 2 - 1, 0, (VAR9->VAR69 + 1) * sizeof(*VAR9->VAR71));
        if (!VAR9->VAR70 && VAR9->VAR34)
            memset(VAR9->VAR73, VAR74, VAR9->VAR69 * 4);
        memset(VAR9->VAR75, 0, sizeof(VAR9->VAR75));
        if (VAR9->VAR70 == 1)
        {
            if (VAR18 && VAR9->VAR76.VAR77 && !VAR9->VAR76.VAR78)
                FUN15(&VAR18->VAR46, 1, 0);
            if (VAR7)
                FUN16(VAR2, VAR17, VAR18);
            else
                FUN17(VAR2, VAR17, VAR18);
        }
        if (VAR2->VAR79 == VAR80)
            VAR14 = 1;
        else
            VAR14 = FUN18(VAR9->VAR81, VAR2->VAR82);
        VAR9->VAR14 = VAR14;
        VAR9->VAR17 = VAR17;
        VAR9->VAR18 = VAR18;
        VAR9->VAR83.VAR84 = -VAR85;
        VAR9->VAR86.VAR84 = ((VAR9->VAR72 - 1) << 6) + VAR85;
        for (VAR12 = 0; VAR12 < VAR87; VAR12++)
        {
            VAR9->VAR88[VAR12].VAR89 = 0;
            VAR9->VAR88[VAR12].VAR90 = VAR91;
        }
        if (VAR7)
            VAR2->FUN19(VAR2, VAR92, VAR9->VAR88, NULL, VAR14);
        else
            VAR2->FUN19(VAR2, VAR93, VAR9->VAR88, NULL, VAR14);
    }
    FUN20(&VAR17->VAR46, VAR91, 0);
    memcpy(&VAR9->VAR28[0], &VAR9->VAR39[0], sizeof(VAR9->VAR28[0]) * 4);
VAR40:
    if (!VAR9->VAR94)
        VAR9->VAR95[0] = VAR9->VAR95[1];
    if (!VAR9->VAR38)
    {
        if ((VAR11 = FUN21(VAR3, VAR17->VAR46.VAR47)) < 0)
            return VAR11;
        *VAR4 = 1;
    }
    return VAR6->VAR19;
VAR20:
    memcpy(&VAR9->VAR39[0], &VAR9->VAR28[0], sizeof(VAR9->VAR28[0]) * 4);
    return VAR11;
}
static int FUN1(VAR1 *VAR2)
{
    void *VAR3 = (VAR2->VAR4 & VAR5) ? NULL : VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10 = 0, VAR11;
    int VAR12 = 0;
    VAR8->VAR13 = VAR2;
    VAR8->VAR14 = &VAR2->VAR14;
    VAR8->VAR15 = VAR2->VAR15;
    VAR8->VAR16 = 1;
    VAR8->VAR17 = VAR18;
    VAR8->VAR19 = VAR18;
    if (VAR3)
    {
        FUN2(&VAR8->VAR20, "", VAR3);
        FUN2(&VAR8->VAR21, "", VAR3);
        FUN2(&VAR8->VAR22, "", VAR3);
        FUN2(&VAR8->VAR23, "", VAR3);
    }
    if ((VAR10 = FUN3(VAR8, VAR2->VAR24, NULL, VAR2->VAR6)) < 0)
        goto VAR25;
    if ((VAR10 = FUN4(VAR2)) < 0)
        goto VAR25;
    FUN5(&VAR8->VAR26, "", "", 0);
    if (VAR8->VAR27 == 0)
    {
        FUN6(NULL, VAR28, "");
        VAR10 = VAR29;
        goto VAR25;
    }
    if (VAR8->VAR30 > 1 || VAR8->VAR31[0]->VAR32 == 0)
    {
        for (VAR11 = 0; VAR11 < VAR8->VAR30; VAR11++)
        {
            struct VAR33 *VAR34 = VAR8->VAR31[VAR11];
            if ((VAR10 = FUN3(VAR8, VAR34->VAR35, VAR34, NULL)) < 0)
                goto VAR25;
        }
    }
    if (VAR8->VAR36[0]->VAR31[0]->VAR32 == 0)
    {
        FUN6(NULL, VAR28, "");
        VAR10 = VAR29;
        goto VAR25;
    }
    if (VAR8->VAR36[0]->VAR31[0]->VAR37)
    {
        int64_t VAR38 = 0;
        for (VAR11 = 0; VAR11 < VAR8->VAR36[0]->VAR31[0]->VAR32; VAR11++)
            VAR38 += VAR8->VAR36[0]->VAR31[0]->VAR39[VAR11]->VAR38;
        VAR2->VAR38 = VAR38;
    }
    for (VAR11 = 0; VAR11 < VAR8->VAR27; VAR11++)
    {
        struct VAR40 *VAR41 = VAR8->VAR36[VAR11];
        if (VAR41->VAR42[0])
            FUN7(VAR8, VAR41, VAR43, VAR41->VAR42);
        if (VAR41->VAR44[0])
            FUN7(VAR8, VAR41, VAR45, VAR41->VAR44);
        if (VAR41->VAR46[0])
            FUN7(VAR8, VAR41, VAR47, VAR41->VAR46);
    }
    for (VAR11 = 0; VAR11 < VAR8->VAR27; VAR11++)
    {
        struct VAR40 *VAR48 = VAR8->VAR36[VAR11];
        VAR49 *VAR50;
        VAR50 = FUN8(VAR2, VAR11);
        if (!VAR50)
            goto VAR25;
        FUN9(&VAR50->VAR51, "", VAR48->VAR52, 0);
    }
    for (VAR11 = 0; VAR11 < VAR8->VAR30; VAR11++)
    {
        struct VAR33 *VAR34 = VAR8->VAR31[VAR11];
        if (VAR34->VAR32 == 0)
            continue;
        VAR34->VAR53 = FUN10(VAR8, VAR34);
        VAR12 = FUN11(VAR12, VAR34->VAR53);
    }
    for (VAR11 = 0; VAR11 < VAR8->VAR30; VAR11++)
    {
        struct VAR33 *VAR34 = VAR8->VAR31[VAR11];
        VAR54 *VAR55 = NULL;
        if (!(VAR34->VAR13 = FUN12()))
        {
            VAR10 = FUN13(VAR56);
            goto VAR25;
        }
        if (VAR34->VAR32 == 0)
            continue;
        VAR34->VAR57 = VAR11;
        VAR34->VAR58 = 1;
        VAR34->VAR59 = VAR2;
        if (!VAR34->VAR37 && VAR34->VAR53 == VAR12 - 1 && VAR12 < VAR34->VAR60 + VAR34->VAR32)
        {
            VAR34->VAR53 = VAR12;
        }
        VAR34->VAR61 = FUN14(VAR62);
        if (!VAR34->VAR61)
        {
            VAR10 = FUN13(VAR56);
            FUN15(VAR34->VAR13);
            VAR34->VAR13 = NULL;
            goto VAR25;
        }
        FUN16(&VAR34->VAR6, VAR34->VAR61, VAR62, 0, VAR34, VAR63, NULL, NULL);
        VAR34->VAR6.VAR64 = 0;
        VAR10 = FUN17(&VAR34->VAR6, &VAR55, VAR34->VAR39[0]->VAR35, NULL, 0, 0);
        if (VAR10 < 0)
        {
            FUN6(VAR2, VAR65, "", VAR34->VAR39[0]->VAR35);
            FUN15(VAR34->VAR13);
            VAR34->VAR13 = NULL;
            goto VAR25;
        }
        VAR34->VAR13->VAR6 = &VAR34->VAR6;
        VAR34->VAR13->VAR66 = VAR67;
        if ((VAR10 = FUN18(VAR34->VAR13, VAR2)) < 0)
            goto VAR25;
        VAR10 = FUN19(&VAR34->VAR13, VAR34->VAR39[0]->VAR35, VAR55, NULL);
        if (VAR10 < 0)
            goto VAR25;
        if (VAR34->VAR68 && VAR34->VAR13->VAR69 == 1)
        {
            FUN20(VAR34->VAR13, &VAR34->VAR68);
            FUN21(VAR34->VAR13);
            FUN22(&VAR34->VAR68);
            VAR34->VAR68 = NULL;
        }
        if (VAR34->VAR70 == -1)
            FUN6(VAR2, VAR28, "");
        if (VAR34->VAR70)
        {
            VAR10 = FUN23(VAR34->VAR13, NULL);
            if (VAR10 < 0)
                goto VAR25;
        }
        VAR34->VAR71 = !!(VAR34->VAR13->VAR72 & VAR73);
        VAR10 = FUN24(VAR2, VAR34);
        if (VAR10 < 0)
            goto VAR25;
        FUN25(VAR2, VAR34, VAR43);
        FUN25(VAR2, VAR34, VAR45);
        FUN25(VAR2, VAR34, VAR47);
    }
    FUN26(VAR2);
    return 0;
VAR25:
    FUN27(VAR8);
    FUN28(VAR8);
    FUN29(VAR8);
    return VAR10;
}
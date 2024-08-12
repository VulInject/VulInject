static int FUN1(int argc, char **argv)
{
    int VAR1 = 0;
    char *VAR2 = NULL;
    char *VAR3;
    VAR4 *VAR5 = NULL, *VAR6 = NULL;
    VAR7 *VAR8 = NULL, *VAR9 = NULL;
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13 = NULL;
    VAR14 *VAR15 = NULL;
    bool VAR16 = false;
    int VAR17, VAR18;
    const char *VAR19 = "";
    const char *VAR20 = NULL;
    int64_t VAR21 = 0;
    int64_t VAR22 = 0, VAR23, VAR24;
    struct DdInfo VAR25 = {
        .VAR26 = 0,
        .VAR27 = 0,
    };
    struct DdIo VAR28 = {.VAR29 = 512, .VAR30 = NULL, .VAR31 = NULL, .VAR32 = 0};
    struct DdIo VAR33 = {.VAR29 = 512, .VAR30 = NULL, .VAR31 = NULL, .VAR32 = 0};
    const struct DdOpts VAR34[] = {{"", VAR35, VAR36}, {"", VAR37, VAR38}, {"", VAR39, VAR40}, {"", VAR41, VAR42}, {"", VAR43, VAR44}, {NULL, NULL, 0}};
    const struct option VAR45[] = {{"", VAR46, 0, ''}, {"", VAR46, 0, VAR47}, {0, 0, 0, 0}};
    while ((VAR17 = getopt_long(argc, argv, "", VAR45, NULL)))
    {
        if (VAR17 == VAR48)
        {
            break;
        }
        switch (VAR17)
        {
        case '':
            VAR19 = VAR49;
            break;
        case '':
            VAR20 = VAR49;
            break;
        case '':
            FUN2("");
            VAR1 = -1;
            goto VAR33;
        case '':
            FUN3();
            break;
        case VAR47:
            VAR16 = true;
            break;
        }
    }
    for (VAR18 = VAR50; VAR18 < argc; VAR18++)
    {
        int VAR51;
        VAR2 = FUN4(argv[VAR18]);
        VAR3 = strchr(VAR2, '');
        if (VAR3 == NULL)
        {
            FUN2("", VAR2);
            VAR1 = -1;
            goto VAR33;
        }
        *VAR3++ = '';
        for (VAR51 = 0; VAR34[VAR51].VAR52 != NULL; VAR51++)
        {
            if (!strcmp(VAR2, VAR34[VAR51].VAR52))
            {
                break;
            }
        }
        if (VAR34[VAR51].VAR52 == NULL)
        {
            FUN2("", VAR2);
            VAR1 = -1;
            goto VAR33;
        }
        if (VAR34[VAR51].FUN5(VAR3, &VAR28, &VAR33, &VAR25) != 0)
        {
            VAR1 = -1;
            goto VAR33;
        }
        VAR25.VAR26 |= VAR34[VAR51].VAR53;
        FUN6(VAR2);
        VAR2 = NULL;
    }
    if (!(VAR25.VAR26 & VAR40 && VAR25.VAR26 & VAR42))
    {
        FUN2("");
        VAR1 = -1;
        goto VAR33;
    }
    VAR8 = FUN7(VAR16, VAR28.VAR30, VAR20, 0, false, false);
    if (!VAR8)
    {
        VAR1 = -1;
        goto VAR33;
    }
    VAR5 = FUN8(VAR19);
    if (!VAR5)
    {
        FUN2("");
        VAR1 = -1;
        goto VAR33;
    }
    VAR6 = FUN9(VAR33.VAR30, true, &VAR15);
    if (!VAR6)
    {
        FUN10(VAR15);
        VAR1 = -1;
        goto VAR33;
    }
    if (!VAR5->VAR13)
    {
        FUN2("", VAR5->VAR54);
        VAR1 = -1;
        goto VAR33;
    }
    if (!VAR6->VAR13)
    {
        FUN2("", VAR6->VAR54);
        VAR1 = -1;
        goto VAR33;
    }
    VAR13 = FUN11(VAR13, VAR5->VAR13);
    VAR13 = FUN11(VAR13, VAR6->VAR13);
    VAR11 = FUN12(VAR13, NULL, 0, &VAR55);
    VAR21 = FUN13(VAR8);
    if (VAR21 < 0)
    {
        FUN2("", VAR28.VAR30);
        VAR1 = -1;
        goto VAR33;
    }
    if (VAR25.VAR26 & VAR38 && VAR25.VAR27 <= VAR56 / VAR28.VAR29 && VAR25.VAR27 * VAR28.VAR29 < VAR21)
    {
        VAR21 = VAR25.VAR27 * VAR28.VAR29;
    }
    if (VAR25.VAR26 & VAR44 && (VAR28.VAR32 > VAR56 / VAR28.VAR29 || VAR21 < VAR28.VAR29 * VAR28.VAR32))
    {
        FUN14(VAR11, VAR57, 0, &VAR55);
    }
    else
    {
        FUN14(VAR11, VAR57, VAR21 - VAR28.VAR29 * VAR28.VAR32, &VAR55);
    }
    VAR1 = FUN15(VAR5, VAR33.VAR30, VAR11, &VAR15);
    if (VAR1 < 0)
    {
        FUN16(VAR15, "", VAR33.VAR30);
        VAR1 = -1;
        goto VAR33;
    }
    VAR9 = FUN7(VAR16, VAR33.VAR30, VAR19, VAR58, false, false);
    if (!VAR9)
    {
        VAR1 = -1;
        goto VAR33;
    }
    if (VAR25.VAR26 & VAR44 && (VAR28.VAR32 > VAR56 / VAR28.VAR29 || VAR21 < VAR28.VAR32 * VAR28.VAR29))
    {
        FUN2("", VAR28.VAR30);
        VAR24 = VAR21;
    }
    else
    {
        VAR24 = VAR28.VAR32 * VAR28.VAR29;
    }
    VAR28.VAR31 = FUN17(VAR59, VAR28.VAR29);
    for (VAR23 = 0; VAR24 < VAR21; VAR22++)
    {
        int VAR60, VAR61;
        if (VAR24 + VAR28.VAR29 > VAR21)
        {
            VAR60 = FUN18(VAR8, VAR24, VAR28.VAR31, VAR21 - VAR24);
        }
        else
        {
            VAR60 = FUN18(VAR8, VAR24, VAR28.VAR31, VAR28.VAR29);
        }
        if (VAR60 < 0)
        {
            FUN2("", strerror(-VAR60));
            VAR1 = -1;
            goto VAR33;
        }
        VAR24 += VAR60;
        VAR61 = FUN19(VAR9, VAR23, VAR28.VAR31, VAR60, 0);
        if (VAR61 < 0)
        {
            FUN2("", strerror(-VAR61));
            VAR1 = -1;
            goto VAR33;
        }
        VAR23 += VAR61;
    }
VAR33:
    FUN6(VAR2);
    FUN20(VAR11);
    FUN21(VAR13);
    FUN22(VAR8);
    FUN22(VAR9);
    FUN6(VAR28.VAR30);
    FUN6(VAR33.VAR30);
    FUN6(VAR28.VAR31);
    FUN6(VAR33.VAR31);
    if (VAR1)
    {
        return 1;
    }
    return 0;
}
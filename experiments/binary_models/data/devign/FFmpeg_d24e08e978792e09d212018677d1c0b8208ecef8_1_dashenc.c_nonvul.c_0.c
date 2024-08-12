static int FUN1(VAR1 *VAR2, int final)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    char VAR8[1024];
    int VAR9, VAR10;
    const char *VAR11 = FUN2(VAR2->VAR12);
    int VAR13 = VAR11 && !strcmp(VAR11, "");
    static unsigned int VAR14 = 0;
    VAR15 *VAR16 = FUN3(VAR2->VAR17, "", NULL, 0);
    VAR18 *VAR19 = NULL;
    if (!VAR13 && !VAR14++)
        FUN4(VAR2, VAR20, "");
    snprintf(VAR8, sizeof(VAR8), VAR13 ? "" : "", VAR2->VAR12);
    FUN5(&VAR19, VAR4);
    VAR9 = VAR2->FUN6(VAR2, &VAR7, VAR8, VAR21, &VAR19);
    if (VAR9 < 0)
    {
        FUN4(VAR2, VAR20, "", VAR8);
        return VAR9;
    }
    FUN7(&VAR19);
    FUN8(VAR7, ""1.0\""VAR22-8\"");
    FUN8(VAR7, ""VAR23: ""VAR24:VAR25:VAR26:VAR27:VAR28:2011\""
                                                        ""VAR23: "\VAR29
                : VAR30 =\""\VAR31 =\""\VAR32"
                                                                                      ""%VAR2\"",
                  final ? "" : "");
    if (final)
    {
        FUN8(VAR7, """);
        FUN9(VAR7, VAR4->VAR33);
        FUN8(VAR7, ""\VAR32");
    }
    else
    {
        int64_t VAR34 = VAR4->VAR35 / VAR36;
        char VAR37[100];
        if (VAR4->VAR38 && !VAR4->VAR39)
            VAR34 = 500;
        FUN8(VAR7, ""VAR40%""VAR41\"", VAR34);
        FUN8(VAR7, ""VAR40%""VAR41\"", VAR4->VAR35 / VAR36);
        if (!VAR4->VAR42[0] && VAR2->VAR43 > 0 && VAR4->VAR44[0].VAR45 > 0)
        {
            FUN10(VAR4->VAR42, sizeof(VAR4->VAR42));
        }
        if (VAR4->VAR42[0])
            FUN8(VAR7, ""%VAR2\"", VAR4->VAR42);
        FUN10(VAR37, sizeof(VAR37));
        if (VAR37[0])
            FUN8(VAR7, ""%VAR2\"", VAR37);
        if (VAR4->VAR46 && VAR4->VAR38)
        {
            FUN8(VAR7, """);
            FUN9(VAR7, VAR4->VAR35 * VAR4->VAR46);
            FUN8(VAR7, ""\VAR32");
        }
    }
    FUN8(VAR7, """);
    FUN9(VAR7, VAR4->VAR35 * 2);
    FUN8(VAR7, "">\VAR32");
    FUN8(VAR7, "");
    if (VAR16)
    {
        char *VAR47 = FUN11(VAR16->VAR48);
        FUN8(VAR7, "", VAR47);
        FUN12(VAR47);
    }
    FUN8(VAR7, "");
    if (VAR4->VAR46 && VAR2->VAR43 > 0 && VAR4->VAR44[0].VAR45 > 0 && !VAR4->VAR38)
    {
        VAR49 *VAR50 = &VAR4->VAR44[0];
        int VAR51 = FUN13(VAR50->VAR45 - VAR4->VAR46, 0);
        int64_t VAR52 = FUN14(VAR50->VAR53[VAR51]->VAR54, VAR2->VAR44[0]->VAR55, VAR56);
        FUN8(VAR7, ""0\""");
        FUN9(VAR7, VAR52);
        FUN8(VAR7, "">\VAR32");
    }
    else
    {
        FUN8(VAR7, ""0\""VAR57.0S\"");
    }
    for (VAR10 = 0; VAR10 < VAR4->VAR58; VAR10++)
    {
        if ((VAR9 = FUN15(VAR2, VAR7, VAR10)) < 0)
            return VAR9;
    }
    FUN8(VAR7, "");
    if (VAR4->VAR59)
        FUN8(VAR7, ""VAR24:VAR25:VAR26:VAR60:VAR23-VAR61:2014\""%VAR2\"", VAR4->VAR59);
    FUN8(VAR7, "");
    FUN16(VAR7);
    FUN17(VAR2, &VAR7);
    if (VAR13)
        return FUN18(VAR8, VAR2->VAR12);
    return 0;
}
static int FUN1(VAR1 *VAR2, int final)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    char VAR8[1024];
    int VAR9, VAR10;
    VAR11 *VAR12 = FUN2(VAR2->VAR13, "", NULL, 0);
    snprintf(VAR8, sizeof(VAR8), "", VAR2->VAR14);
    VAR9 = FUN3(&VAR7, VAR8, VAR15, &VAR2->VAR16, NULL);
    if (VAR9 < 0)
    {
        FUN4(VAR2, VAR17, "", VAR8);
        return VAR9;
    }
    FUN5(VAR7, ""1.0\""VAR18-8\"");
    FUN5(VAR7, ""VAR19: ""VAR20:VAR21:VAR22:VAR23:VAR24:2011\""
                                                        ""VAR19: "\VAR25
                : VAR26 =\""\VAR27 =\""\VAR28"
                                                                                      ""%VAR2\"",
                  final ? "" : "");
    if (final)
    {
        FUN5(VAR7, """);
        FUN6(VAR7, VAR4->VAR29);
        FUN5(VAR7, ""\VAR28");
    }
    else
    {
        int VAR30 = VAR4->VAR31 / VAR32;
        if (VAR4->VAR33 && !VAR4->VAR34)
            VAR30 = 500;
        FUN5(VAR7, ""VAR35%VAR36\"", VAR30);
        FUN5(VAR7, ""VAR35%VAR36\"", VAR4->VAR31 / VAR32);
        if (!VAR4->VAR37[0] && VAR2->VAR38 > 0 && VAR4->VAR39[0].VAR40 > 0)
        {
            time_t VAR41 = FUN7(NULL);
            struct VAR42 *VAR43, VAR44;
            VAR43 = FUN8(&VAR41, &VAR44);
            if (VAR43)
            {
                if (!FUN9(VAR4->VAR37, sizeof(VAR4->VAR37), "", VAR43))
                    VAR4->VAR37[0] = '';
            }
        }
        if (VAR4->VAR37[0])
            FUN5(VAR7, ""%VAR2\"", VAR4->VAR37);
        if (VAR4->VAR45 && VAR4->VAR33)
        {
            FUN5(VAR7, """);
            FUN6(VAR7, VAR4->VAR31 * VAR4->VAR45);
            FUN5(VAR7, ""\VAR28");
        }
    }
    FUN5(VAR7, """);
    FUN6(VAR7, VAR4->VAR31);
    FUN5(VAR7, "">\VAR28");
    FUN5(VAR7, "");
    if (VAR12)
    {
        char *VAR46 = FUN10(VAR12->VAR47);
        FUN5(VAR7, "", VAR46);
        FUN11(VAR46);
    }
    FUN5(VAR7, "");
    if (VAR4->VAR45 && VAR2->VAR38 > 0 && VAR4->VAR39[0].VAR40 > 0 && !VAR4->VAR33)
    {
        VAR48 *VAR49 = &VAR4->VAR39[0];
        int VAR50 = FUN12(VAR49->VAR40 - VAR4->VAR45, 0);
        int64_t VAR51 = FUN13(VAR49->VAR52[VAR50]->VAR53, VAR2->VAR39[0]->VAR54, VAR55);
        FUN5(VAR7, """);
        FUN6(VAR7, VAR51);
        FUN5(VAR7, "">\VAR28");
    }
    else
    {
        FUN5(VAR7, ""VAR56.0S\"");
    }
    if (VAR4->VAR57)
    {
        FUN5(VAR7, ""VAR58\""true\""true\"");
        for (VAR10 = 0; VAR10 < VAR2->VAR38; VAR10++)
        {
            VAR59 *VAR60 = VAR2->VAR39[VAR10];
            VAR48 *VAR49 = &VAR4->VAR39[VAR10];
            if (VAR2->VAR39[VAR10]->VAR61->VAR62 != VAR63)
                continue;
            FUN5(VAR7, ""%VAR64\""VAR58/VAR65\""%VAR2\""%VAR64\""%VAR64\"", VAR10, VAR49->VAR66, VAR49->VAR67, VAR60->VAR61->VAR68, VAR60->VAR61->VAR69);
            FUN14(&VAR4->VAR39[VAR10], VAR7, VAR4);
            FUN5(VAR7, "");
        }
        FUN5(VAR7, "");
    }
    if (VAR4->VAR70)
    {
        FUN5(VAR7, ""VAR71\""true\""true\"");
        for (VAR10 = 0; VAR10 < VAR2->VAR38; VAR10++)
        {
            VAR59 *VAR60 = VAR2->VAR39[VAR10];
            VAR48 *VAR49 = &VAR4->VAR39[VAR10];
            if (VAR2->VAR39[VAR10]->VAR61->VAR62 != VAR72)
                continue;
            FUN5(VAR7, ""%VAR64\""VAR71/VAR65\""%VAR2\""%VAR64\"", VAR10, VAR49->VAR66, VAR49->VAR67, VAR60->VAR61->VAR73);
            FUN5(VAR7, ""VAR20:VAR21:VAR22:23003:3:VAR74:2011\""%VAR64\"", VAR60->VAR61->VAR75);
            FUN14(&VAR4->VAR39[VAR10], VAR7, VAR4);
            FUN5(VAR7, "");
        }
        FUN5(VAR7, "");
    }
    FUN5(VAR7, "");
    FUN5(VAR7, "");
    FUN15(VAR7);
    FUN16(VAR7);
    return FUN17(VAR8, VAR2->VAR14, VAR2);
}
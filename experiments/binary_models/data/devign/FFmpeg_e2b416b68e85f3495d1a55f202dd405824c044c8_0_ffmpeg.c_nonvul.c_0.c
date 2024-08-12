static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    VAR6 *VAR7, *VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12, VAR13, VAR14 = 0, VAR15;
    AVRational VAR16;
    if (!VAR2->VAR7 && !(VAR2->VAR7 = FUN2()))
        return FUN3(VAR17);
    if (!VAR2->VAR18 && !(VAR2->VAR18 = FUN2()))
        return FUN3(VAR17);
    VAR7 = VAR2->VAR7;
    FUN4(NULL);
    VAR13 = FUN5(VAR10, VAR7, VAR5, VAR4);
    FUN4("", VAR2->VAR19, VAR2->VAR20->VAR21);
    if (VAR13 >= 0 && VAR10->VAR22 <= 0)
    {
        FUN6(VAR10, VAR23, "", VAR10->VAR22);
        VAR13 = VAR24;
    }
    FUN7(VAR5, VAR13);
    if (!*VAR5 || VAR13 < 0)
        return VAR13;
    VAR2->VAR25 += VAR7->VAR26;
    VAR2->VAR27++;
    VAR2->VAR28 += ((VAR29)VAR30 * VAR7->VAR26) / VAR10->VAR22;
    VAR2->VAR31 += ((VAR29)VAR30 * VAR7->VAR26) / VAR10->VAR22;
    VAR15 = VAR2->VAR32 != VAR7->VAR33 || VAR2->VAR34 != VAR10->VAR35 || VAR2->VAR36 != VAR7->VAR37 || VAR2->VAR38 != VAR7->VAR22;
    if (VAR15)
    {
        char VAR39[64], VAR40[64];
        if (!FUN8(VAR2))
        {
            FUN6(NULL, VAR41, ""
                                       "",
                   VAR2->VAR19, VAR2->VAR20->VAR21);
            FUN9(1);
        }
        VAR7->VAR37 = VAR10->VAR37;
        FUN10(VAR39, sizeof(VAR39), VAR2->VAR34, VAR2->VAR36);
        FUN10(VAR40, sizeof(VAR40), VAR10->VAR35, VAR7->VAR37);
        FUN6(NULL, VAR42, "", VAR2->VAR19, VAR2->VAR20->VAR21, VAR2->VAR38, FUN11(VAR2->VAR32), VAR2->VAR34, VAR39, VAR7->VAR22, FUN11(VAR7->VAR33), VAR10->VAR35, VAR40);
        VAR2->VAR32 = VAR7->VAR33;
        VAR2->VAR38 = VAR7->VAR22;
        VAR2->VAR36 = VAR7->VAR37;
        VAR2->VAR34 = VAR10->VAR35;
        for (VAR12 = 0; VAR12 < VAR43; VAR12++)
            if (FUN12(VAR44[VAR12], VAR2))
            {
                VAR45 *VAR46 = VAR44[VAR12];
                if (FUN13(VAR46) < 0)
                {
                    FUN6(NULL, VAR41, "");
                    FUN9(1);
                }
            }
    }
    if (VAR7->VAR47 != VAR48)
    {
        VAR2->VAR49 = VAR2->VAR31 = VAR2->VAR47 = VAR2->VAR28 = FUN14(VAR7->VAR47, VAR10->VAR50, VAR51);
        VAR16 = VAR10->VAR50;
    }
    else if (VAR7->VAR52 != VAR48)
    {
        VAR7->VAR47 = VAR7->VAR52;
        VAR16 = VAR2->VAR20->VAR50;
    }
    else if (VAR4->VAR47 != VAR48)
    {
        VAR7->VAR47 = VAR4->VAR47;
        VAR16 = VAR2->VAR20->VAR50;
    }
    else
    {
        VAR7->VAR47 = VAR2->VAR49;
        VAR16 = VAR51;
    }
    VAR4->VAR47 = VAR48;
    if (VAR7->VAR47 != VAR48)
        VAR7->VAR47 = FUN15(VAR16, VAR7->VAR47, (VAR53){1, VAR10->VAR22}, VAR7->VAR26, &VAR2->VAR54, (VAR53){1, VAR10->VAR22});
    VAR2->VAR26 = VAR7->VAR26;
    for (VAR12 = 0; VAR12 < VAR2->VAR55; VAR12++)
    {
        if (VAR12 < VAR2->VAR55 - 1)
        {
            VAR8 = VAR2->VAR18;
            VAR14 = FUN16(VAR8, VAR7);
            if (VAR14 < 0)
                break;
        }
        else
            VAR8 = VAR7;
        VAR14 = FUN17(VAR2->VAR56[VAR12]->VAR57, VAR8, VAR58);
        if (VAR14 == VAR59)
            VAR14 = 0;
        if (VAR14 < 0)
            break;
    }
    VAR7->VAR47 = VAR48;
    FUN18(VAR2->VAR18);
    FUN18(VAR7);
    return VAR14 < 0 ? VAR14 : VAR13;
}
VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10;
    static int VAR11;
    VAR12 *VAR13;
    if (!VAR5->VAR14.VAR15)
    {
        FUN2("");
        return NULL;
    }
    if (!FUN3(VAR5->VAR14.VAR15))
    {
        FUN2("");
        return NULL;
    }
    if (!VAR5->VAR16)
    {
        VAR13 = FUN4(VAR5->VAR14.VAR15);
        if (*VAR13->VAR16)
        {
            VAR5->VAR16 = strdup(VAR13->VAR16);
        }
    }
    VAR7 = (VAR6 *)FUN5("", VAR17, sizeof(struct VAR18), sizeof(VAR6));
    VAR7->VAR19.VAR20 = VAR21;
    VAR7->VAR19.VAR22 = VAR23;
    VAR7->VAR19.VAR24 = VAR25;
    VAR7->VAR15 = VAR5->VAR14.VAR15;
    VAR7->VAR14 = &VAR5->VAR14;
    VAR7->VAR5 = VAR5;
    VAR7->VAR26 = NULL;
    VAR7->VAR27 = (VAR7->VAR14->VAR28 / VAR29) - 1;
    FUN6(VAR7->VAR15, &VAR8, &VAR9, &VAR10);
    VAR7->VAR30 = FUN7(&VAR7->VAR19, 128, VAR31);
    FUN8(VAR32, VAR7);
    VAR7->VAR33 = VAR3;
    FUN9(VAR3, "", VAR11++, 2, VAR34, VAR35, VAR7);
    FUN10(VAR7->VAR15, &VAR36, VAR7);
    FUN11(VAR7->VAR15, VAR7->VAR14->VAR28);
    FUN12(VAR7->VAR15);
    FUN13(VAR7->VAR14->VAR37, VAR3, "");
    return &VAR7->VAR19;
}
VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, char **VAR6)
{
    VAR7 *VAR8;
    int VAR9, VAR10, VAR11;
    static int VAR12;
    VAR13 *VAR14;
    if (!VAR5->VAR15)
    {
        FUN2("");
        return NULL;
    }
    if (!FUN3(VAR5->VAR15))
    {
        FUN2("");
        return NULL;
    }
    if (!*VAR6)
    {
        VAR14 = FUN4(VAR5->VAR15);
        if (*VAR14->VAR6)
        {
            *VAR6 = strdup(VAR14->VAR6);
        }
    }
    VAR8 = (VAR7 *)FUN5("", VAR16, sizeof(struct VAR17), sizeof(VAR7));
    VAR8->VAR18.VAR19 = VAR20;
    VAR8->VAR18.VAR21 = VAR22;
    VAR8->VAR18.VAR23 = VAR24;
    VAR8->VAR15 = VAR5->VAR15;
    VAR8->VAR5 = VAR5;
    VAR8->VAR6 = *VAR6;
    VAR8->VAR25 = NULL;
    VAR8->VAR26 = (VAR8->VAR5->VAR27 / VAR28) - 1;
    FUN6(VAR8->VAR15, &VAR9, &VAR10, &VAR11);
    VAR8->VAR29 = FUN7(&VAR8->VAR18, 128, VAR30);
    FUN8(VAR31, VAR8);
    VAR8->VAR32 = VAR3;
    FUN9(VAR3, "", VAR12++, 2, VAR33, VAR34, VAR8);
    FUN10(VAR8->VAR15, &VAR35, VAR8);
    FUN11(VAR8->VAR15, VAR5->VAR27);
    FUN12(VAR8->VAR15);
    FUN13(VAR5->VAR36, VAR3, "");
    return &VAR8->VAR18;
}
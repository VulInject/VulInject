VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    static int VAR8;
    if (!VAR5->VAR9.VAR10)
    {
        FUN2("");
        return NULL;
    }
    if (!FUN3(VAR5->VAR9.VAR10))
    {
        FUN2("");
        return NULL;
    }
    FUN4(&VAR5->VAR9, &VAR5->VAR11);
    if (FUN5(&VAR5->VAR9, NULL, 65535, 255, 255) < 0)
    {
        return NULL;
    }
    VAR7 = (VAR6 *)FUN6("", VAR12, sizeof(struct VAR13), sizeof(VAR6));
    VAR7->VAR14.VAR15 = VAR16;
    VAR7->VAR14.VAR17 = VAR18;
    VAR7->VAR14.VAR19 = VAR20;
    VAR7->VAR14.VAR21 = VAR22;
    VAR7->VAR14.VAR23 = VAR24;
    VAR7->VAR10 = VAR5->VAR9.VAR10;
    VAR7->VAR9 = &VAR5->VAR9;
    VAR7->VAR5 = VAR5;
    VAR7->VAR25 = NULL;
    VAR7->VAR26 = (VAR7->VAR9->VAR27 / VAR28) - 1;
    VAR7->VAR29 = FUN7(&VAR7->VAR14, 128, VAR30);
    if (!FUN8(&VAR7->VAR14, VAR5, &VAR7->VAR31))
    {
        FUN9(&VAR7->VAR14);
        return NULL;
    }
    FUN10(VAR32, VAR7);
    VAR7->VAR33 = VAR3;
    FUN11(VAR3, "", VAR8++, 2, VAR34, VAR35, VAR7);
    FUN12(VAR7->VAR10, &VAR36, VAR7);
    FUN13(VAR7->VAR10, VAR7->VAR9->VAR27);
    FUN14(VAR7->VAR10);
    FUN15(VAR7->VAR9->VAR37, VAR3, "");
    return &VAR7->VAR14;
}
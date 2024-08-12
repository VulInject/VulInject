VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10;
    static int VAR11;
    char *VAR12 = (char *)FUN2(VAR5->VAR13);
    size_t VAR14 = strlen(VAR12) ? sizeof(struct VAR15) : FUN3(struct VAR15, VAR16);
    VAR7 = (VAR6 *)FUN4("", VAR17, VAR14, sizeof(VAR6));
    VAR7->VAR18 = VAR14;
    VAR7->VAR19.VAR20 = VAR21;
    VAR7->VAR19.VAR22 = VAR23;
    VAR7->VAR19.VAR24 = VAR25;
    VAR7->VAR26 = VAR5->VAR13;
    VAR7->VAR27 = NULL;
    if (strlen(VAR12))
        strncpy(VAR7->VAR28, VAR12, sizeof(VAR7->VAR28));
    else
        snprintf(VAR7->VAR28, sizeof(VAR7->VAR28), "");
    VAR7->VAR26->private = VAR3;
    FUN5(VAR7->VAR26, &VAR8, &VAR9, &VAR10);
    FUN6(VAR7->VAR26, VAR8, VAR9, VAR10);
    VAR7->VAR29 = FUN7(&VAR7->VAR19, 128, VAR30);
    FUN8(VAR31, VAR7);
    FUN9("", VAR11++, 2, VAR32, VAR33, VAR7);
    return &VAR7->VAR19;
}
VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10;
    static int VAR11;
    VAR12 *VAR13;
    if (!VAR5->VAR14)
    {
        FUN2("");
        VAR7 = (VAR6 *)FUN3("", VAR15, sizeof(struct VAR16), sizeof(VAR6));
        VAR7->VAR17.VAR18 = VAR19;
        VAR7->VAR17.VAR20 = VAR21;
        VAR7->VAR17.VAR22 = VAR23;
        VAR7->VAR14 = VAR5->VAR14;
        VAR7->VAR5 = VAR5;
        VAR7->VAR24 = NULL;
        VAR7->VAR25 = (VAR7->VAR5->VAR26 / VAR27) - 1;
        FUN4(VAR7->VAR14, &VAR8, &VAR9, &VAR10);
        VAR13 = FUN5(VAR7->VAR14);
        strncpy(VAR7->VAR28, VAR13->VAR29, sizeof(VAR7->VAR28));
        VAR7->VAR30 = FUN6(&VAR7->VAR17, 128, VAR31);
        FUN7(VAR32, VAR7);
        FUN8(VAR3, "", VAR11++, 2, VAR33, VAR34, VAR7);
        FUN9(VAR7->VAR14, 0);
        return &VAR7->VAR17;
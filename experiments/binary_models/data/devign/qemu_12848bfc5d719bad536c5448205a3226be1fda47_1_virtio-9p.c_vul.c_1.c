VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9;
    struct stat VAR10;
    VAR11 *VAR12;
    VAR7 = (VAR6 *)FUN2("", VAR13, sizeof(struct VAR14) + VAR15, sizeof(VAR6));
    FUN3(&VAR7->VAR16);
    for (VAR8 = 0; VAR8 < (VAR17 - 1); VAR8++)
    {
        FUN4(&VAR7->VAR16, &VAR7->VAR18[VAR8], VAR19);
    }
    VAR7->VAR20 = FUN5(&VAR7->VAR21, VAR17, VAR22);
    VAR12 = FUN6(VAR5->VAR23);
    if (!VAR12)
    {
        fprintf(VAR24, ""
                        "",
                VAR5->VAR23);
        FUN7(1);
    }
    if (!VAR12->VAR25 || !VAR5->VAR26)
    {
        fprintf(VAR24, ""
                        "",
                VAR5->VAR23);
        FUN7(1);
    }
    if (!strcmp(VAR12->VAR27, ""))
    {
        VAR7->VAR28.VAR29 = VAR30;
    }
    else if (!strcmp(VAR12->VAR27, ""))
    {
        VAR7->VAR28.VAR29 = VAR31;
    }
    else
    {
        fprintf(VAR24, ""
                        ""
                        "");
        return NULL;
    }
    if (FUN8(VAR12->VAR25, &VAR10))
    {
        fprintf(VAR24, "", VAR12->VAR25);
        FUN7(1);
    }
    else if (!FUN9(VAR10.VAR32))
    {
        fprintf(VAR24, "", VAR12->VAR25);
        FUN7(1);
    }
    VAR7->VAR28.VAR33 = FUN10(VAR12->VAR25);
    VAR9 = strlen(VAR5->VAR26);
    if (VAR9 > VAR15)
    {
        VAR9 = VAR15;
    }
    VAR7->VAR26 = FUN11(VAR9);
    memcpy(VAR7->VAR26, VAR5->VAR26, VAR9);
    VAR7->VAR34 = VAR9;
    VAR7->VAR28.VAR35 = -1;
    VAR7->VAR36 = VAR12->VAR36;
    VAR7->VAR21.VAR37 = VAR38;
    VAR7->VAR39 = sizeof(struct VAR14) + VAR7->VAR34;
    VAR7->VAR21.VAR40 = VAR41;
    return &VAR7->VAR21;
}
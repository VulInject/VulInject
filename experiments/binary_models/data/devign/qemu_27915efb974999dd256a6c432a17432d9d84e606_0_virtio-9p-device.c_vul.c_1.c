static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5, VAR6;
    struct stat VAR7;
    VAR8 *VAR9;
    V9fsPath VAR10;
    FUN3(FUN4(VAR4), "", VAR11, sizeof(struct VAR12) + VAR13);
    FUN5(&VAR4->VAR14);
    FUN5(&VAR4->VAR15);
    for (VAR5 = 0; VAR5 < (VAR16 - 1); VAR5++)
    {
        FUN6(&VAR4->VAR14, &VAR4->VAR17[VAR5], VAR18);
    }
    VAR4->VAR19 = FUN7(VAR2, VAR16, VAR20);
    VAR9 = FUN8(VAR4->VAR21.VAR22);
    if (!VAR9)
    {
        fprintf(VAR23, ""
                        "",
                VAR4->VAR21.VAR22 ? VAR4->VAR21.VAR22 : "");
        goto VAR24;
    }
    if (!VAR4->VAR21.VAR25)
    {
        fprintf(VAR23, "", VAR4->VAR21.VAR22);
        goto VAR24;
    }
    VAR4->VAR26.VAR27 = VAR9->VAR27;
    VAR4->VAR26.VAR28 = FUN9(VAR9->VAR10);
    VAR4->VAR26.VAR29.VAR30 = NULL;
    VAR6 = strlen(VAR4->VAR21.VAR25);
    if (VAR6 > VAR13 - 1)
    {
        fprintf(VAR23, ""
                        "",
                VAR4->VAR21.VAR25, VAR6, VAR13 - 1);
        goto VAR24;
    }
    VAR4->VAR25 = FUN9(VAR4->VAR21.VAR25);
    VAR4->VAR26.VAR31 = -1;
    VAR4->VAR32 = VAR9->VAR32;
    VAR4->VAR33 = sizeof(struct VAR12) + VAR6;
    VAR4->VAR34 = NULL;
    FUN10(&VAR4->VAR35);
    if (VAR4->VAR32->FUN11(&VAR4->VAR26) < 0)
    {
        fprintf(VAR23, ""
                        "",
                VAR4->VAR21.VAR22, VAR4->VAR26.VAR28);
        goto VAR24;
    }
    if (FUN12() < 0)
    {
        fprintf(VAR23, "");
        goto VAR24;
    }
    FUN13(&VAR10);
    if (VAR4->VAR32->FUN14(&VAR4->VAR26, NULL, "", &VAR10) < 0)
    {
        fprintf(VAR23, "", strerror(VAR36));
        goto VAR24;
    }
    if (VAR4->VAR32->FUN15(&VAR4->VAR26, &VAR10, &VAR7))
    {
        fprintf(VAR23, "", VAR9->VAR10);
        goto VAR24;
    }
    else if (!FUN16(VAR7.VAR37))
    {
        fprintf(VAR23, "", VAR9->VAR10);
        goto VAR24;
    }
    FUN17(&VAR10);
    return 0;
VAR24:
    FUN18(VAR4->VAR26.VAR28);
    FUN18(VAR4->VAR25);
    FUN19(VAR2);
    FUN17(&VAR10);
    return -1;
}
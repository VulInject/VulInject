static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR3 *VAR5;
    VAR6 *VAR7;
    struct termios VAR8;
    int VAR9, VAR10;
    char VAR11[VAR12];
    char *VAR11 = NULL;
    VAR5 = FUN2(sizeof(VAR3));
    VAR7 = FUN2(sizeof(VAR6));
    if (FUN3(&VAR7->VAR13, &VAR9, VAR11, NULL, NULL) < 0)
    {
        return -VAR14;
    }
    FUN4(VAR9, &VAR8);
    FUN5(&VAR8);
    FUN6(VAR9, VAR15, &VAR8);
    close(VAR9);
    VAR10 = strlen(FUN7(VAR7->VAR13)) + 5;
    VAR5->VAR16 = FUN8(VAR10);
    snprintf(VAR5->VAR16, VAR10, "", FUN7(VAR7->VAR13));
    FUN9(VAR2, "", FUN7(VAR7->VAR13));
    fprintf(VAR17, "", FUN7(VAR7->VAR13));
    VAR5->VAR18 = VAR7;
    VAR5->VAR19 = VAR20;
    VAR5->VAR21 = VAR22;
    VAR5->VAR23 = VAR24;
    VAR7->VAR25 = FUN10(VAR26, VAR27, VAR5);
    *VAR4 = VAR5;
    return 0;
}
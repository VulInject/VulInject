static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4;
    VAR5 *VAR6;
    struct termios VAR7;
    int VAR8, VAR9, VAR10;
    char VAR11[VAR12];
    char *VAR11 = NULL;
    if (FUN2(&VAR8, &VAR9, VAR11, NULL, NULL) < 0)
    {
        return NULL;
    }
    FUN3(VAR9, &VAR7);
    FUN4(&VAR7);
    FUN5(VAR9, VAR13, &VAR7);
    close(VAR9);
    VAR4 = FUN6(sizeof(VAR1));
    VAR10 = strlen(FUN7(VAR8)) + 5;
    VAR4->VAR14 = FUN8(VAR10);
    snprintf(VAR4->VAR14, VAR10, "", FUN7(VAR8));
    FUN9(VAR3, "", FUN7(VAR8));
    fprintf(VAR15, "", FUN7(VAR8));
    VAR6 = FUN6(sizeof(VAR5));
    VAR4->VAR16 = VAR6;
    VAR4->VAR17 = VAR18;
    VAR4->VAR19 = VAR20;
    VAR4->VAR21 = VAR22;
    VAR6->VAR23 = VAR8;
    VAR6->VAR24 = FUN10(VAR25, VAR26, VAR4);
    return VAR4;
}
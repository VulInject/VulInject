static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4)
{
    VAR1 *VAR5;
    VAR6 *VAR7;
    int VAR8, VAR9;
    char VAR10[VAR11];
    VAR8 = FUN2(&VAR9, VAR10);
    if (VAR8 < 0)
    {
        return NULL;
    }
    close(VAR9);
    FUN3(VAR8);
    VAR5 = FUN4();
    VAR5->VAR12 = FUN5("", VAR10);
    VAR4->VAR13 = FUN6(VAR10);
    VAR4->VAR14 = true;
    fprintf(VAR15, "", VAR10, VAR2);
    VAR7 = FUN7(sizeof(VAR6));
    VAR5->VAR16 = VAR7;
    VAR5->VAR17 = VAR18;
    VAR5->VAR19 = VAR20;
    VAR5->VAR21 = VAR22;
    VAR5->VAR23 = VAR24;
    VAR5->VAR25 = true;
    VAR7->VAR26 = FUN8(VAR8);
    VAR7->VAR27 = 0;
    return VAR5;
}
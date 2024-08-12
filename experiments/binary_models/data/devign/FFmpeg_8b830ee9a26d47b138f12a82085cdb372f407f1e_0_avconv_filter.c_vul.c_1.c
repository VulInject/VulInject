int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5, *VAR6;
    int VAR7, VAR8, VAR9 = !VAR2->VAR10;
    const char *VAR10 = VAR9 ? VAR2->VAR5[0]->VAR11->VAR12 : VAR2->VAR10;
    FUN2(&VAR2->VAR13);
    if (!(VAR2->VAR13 = FUN3()))
        return FUN4(VAR14);
    if (VAR9)
    {
        VAR15 *VAR11 = VAR2->VAR5[0]->VAR11;
        char VAR16[512];
        VAR17 *VAR18 = NULL;
        snprintf(VAR16, sizeof(VAR16), "", (unsigned)VAR11->VAR19);
        VAR2->VAR13->VAR20 = FUN5(VAR16);
        VAR16[0] = '';
        while ((VAR18 = FUN6(VAR2->VAR5[0]->VAR11->VAR21, "", VAR18, VAR22)))
        {
            FUN7(VAR16, sizeof(VAR16), "", VAR18->VAR23, VAR18->VAR24);
        }
        if (strlen(VAR16))
            VAR16[strlen(VAR16) - 1] = '';
        VAR2->VAR13->VAR25 = FUN5(VAR16);
    }
    if ((VAR7 = FUN8(VAR2->VAR13, VAR10, &VAR4, &VAR5)) < 0)
        return VAR7;
    if (VAR9 && (!VAR4 || VAR4->VAR26 || !VAR5 || VAR5->VAR26))
    {
        FUN9(NULL, VAR27, ""
                                   "",
               VAR10);
        return FUN4(VAR28);
    }
    for (VAR6 = VAR4, VAR8 = 0; VAR6; VAR6 = VAR6->VAR26, VAR8++)
        if ((VAR7 = FUN10(VAR2, VAR2->VAR4[VAR8], VAR6)) < 0)
            return VAR7;
    FUN11(&VAR4);
    for (VAR6 = VAR5, VAR8 = 0; VAR6; VAR6 = VAR6->VAR26, VAR8++)
        FUN12(VAR2, VAR2->VAR5[VAR8], VAR6);
    FUN11(&VAR5);
    if ((VAR7 = FUN13(VAR2->VAR13, NULL)) < 0)
        return VAR7;
    return 0;
}
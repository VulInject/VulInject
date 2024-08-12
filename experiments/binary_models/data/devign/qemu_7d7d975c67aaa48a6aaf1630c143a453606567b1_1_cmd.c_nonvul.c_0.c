FUN1(void)
{
    int VAR1, VAR2, VAR3 = 0, VAR4 = 0, VAR5 = 0, VAR6 = 0;
    char *VAR7;
    char **VAR8;
    const VAR9 *VAR10;
    for (VAR2 = 0; !VAR4 && VAR2 < VAR11; VAR2++)
    {
        VAR7 = strdup(VAR12[VAR2]);
        if (!VAR7)
        {
            fprintf(VAR13, FUN2(""), VAR12[VAR2], strerror(VAR14));
            FUN3(1);
        }
        VAR8 = FUN4(VAR7, &VAR1);
        if (VAR1)
        {
            VAR10 = FUN5(VAR8[0]);
            if (VAR10)
            {
                if (VAR10->VAR15 & VAR16)
                    VAR4 = FUN6(VAR10, VAR1, VAR8);
                else
                {
                    VAR3 = 0;
                    while (!VAR4 && (VAR3 = FUN7(VAR3)))
                        VAR4 = FUN6(VAR10, VAR1, VAR8);
                }
            }
            else
                fprintf(VAR13, FUN2(""%VAR17\""), VAR8[0]);
        }
        FUN8(VAR7, VAR8);
    }
    if (VAR12)
    {
        free(VAR12);
        return;
    }
    while (!VAR4)
    {
        if (!VAR6)
        {
            FUN9("", FUN10());
            FUN11(VAR18);
            FUN12(VAR19, VAR20, NULL, NULL, NULL, &VAR5);
            VAR6 = 1;
        }
        FUN13();
        if (!VAR5)
        {
            continue;
        }
        if ((VAR7 = FUN14()) == NULL)
            break;
        VAR8 = FUN4(VAR7, &VAR1);
        if (VAR1)
        {
            VAR10 = FUN5(VAR8[0]);
            if (VAR10)
                VAR4 = FUN6(VAR10, VAR1, VAR8);
            else
                fprintf(VAR13, FUN2(""%VAR17\""), VAR8[0]);
        }
        FUN8(VAR7, VAR8);
        VAR6 = 0;
        VAR5 = 0;
    }
    FUN12(VAR19, NULL, NULL, NULL, NULL, NULL);
}
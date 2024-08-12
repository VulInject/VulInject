int FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5)
{
    const char *VAR6;
    const char *VAR7;
    int VAR8;
    VAR7 = FUN2(VAR2, "");
    if (!VAR7)
    {
        FUN3(VAR5, VAR9, "");
        return -1;
    }
    if (VAR3)
    {
        if (strcmp(VAR7, "") != 0 && strcmp(VAR7, "") != 0 && strcmp(VAR7, "") != 0 && strcmp(VAR7, "") != 0 && strcmp(VAR7, "") != 0)
        {
            FUN3(VAR5, VAR10, "", "");
            return -1;
        }
        if (FUN2(VAR2, ""))
        {
            FUN3(VAR5, VAR11, "");
            return -1;
        }
        if (FUN2(VAR2, ""))
        {
            FUN3(VAR5, VAR11, "");
            return -1;
        }
        if (!FUN4(VAR2))
        {
            FUN3(VAR5, VAR9, "");
            return -1;
        }
    }
    VAR6 = FUN4(VAR2);
    if (!VAR6)
    {
        VAR6 = FUN2(VAR2, "");
    }
    for (VAR8 = 0; VAR8 < VAR12; VAR8++)
    {
        if (VAR13[VAR8].VAR7 != NULL && !strcmp(VAR13[VAR8].VAR7, VAR7))
        {
            VAR4 *VAR14 = NULL;
            VAR15 *VAR16 = NULL;
            int VAR17;
            FUN5(VAR2, &VAR13[VAR8].VAR18[0], &VAR14);
            if (FUN6(&VAR14))
            {
                FUN7(VAR5, VAR14);
                return -1;
            }
            if (!(VAR3 || (strcmp(VAR7, "") == 0 && FUN2(VAR2, ""))))
            {
                VAR16 = FUN8(FUN9(VAR2, "", 0), 1);
            }
            VAR17 = 0;
            if (VAR13[VAR8].VAR19)
            {
                VAR17 = VAR13[VAR8].FUN10(VAR2, VAR6, VAR16);
                if (VAR17 < 0)
                {
                    FUN3(VAR5, VAR20, VAR7);
                    return -1;
                }
            }
            return VAR17;
        }
    }
    FUN3(VAR5, VAR10, "", "");
    return -1;
}
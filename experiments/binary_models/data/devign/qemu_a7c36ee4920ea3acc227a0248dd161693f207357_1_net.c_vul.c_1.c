int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    const char *VAR6;
    const char *VAR7;
    int VAR8;
    VAR7 = FUN2(VAR4, "");
    if (!VAR7)
    {
        FUN3(VAR9, "");
        return -1;
    }
    if (VAR5)
    {
        if (strcmp(VAR7, "") != 0 && strcmp(VAR7, "") != 0 && strcmp(VAR7, "") != 0 && strcmp(VAR7, "") != 0)
        {
            FUN3(VAR10, "", "");
            return -1;
        }
        if (FUN2(VAR4, ""))
        {
            FUN3(VAR11, "");
            return -1;
        }
        if (FUN2(VAR4, ""))
        {
            FUN3(VAR11, "");
            return -1;
        }
        if (!FUN4(VAR4))
        {
            FUN3(VAR9, "");
            return -1;
        }
    }
    VAR6 = FUN4(VAR4);
    if (!VAR6)
    {
        VAR6 = FUN2(VAR4, "");
    }
    for (VAR8 = 0; VAR8 < VAR12; VAR8++)
    {
        if (VAR13[VAR8].VAR7 != NULL && !strcmp(VAR13[VAR8].VAR7, VAR7))
        {
            VAR14 *VAR15 = NULL;
            int VAR16;
            if (FUN5(VAR4, &VAR13[VAR8].VAR17[0]) == -1)
            {
                return -1;
            }
            if (!(VAR5 || (strcmp(VAR7, "") == 0 && FUN2(VAR4, ""))))
            {
                VAR15 = FUN6(FUN7(VAR4, "", 0), 1);
            }
            VAR16 = 0;
            if (VAR13[VAR8].VAR18)
            {
                VAR16 = VAR13[VAR8].FUN8(VAR4, VAR2, VAR6, VAR15);
                if (VAR16 < 0)
                {
                    FUN3(VAR19, VAR7);
                    return -1;
                }
            }
            return VAR16;
        }
    }
    FUN3(VAR10, "", "");
    return -1;
}
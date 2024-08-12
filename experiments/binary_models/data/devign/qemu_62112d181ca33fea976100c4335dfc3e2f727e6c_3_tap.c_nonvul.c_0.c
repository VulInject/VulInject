int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9;
    int VAR10, VAR11 = 0;
    if (FUN2(VAR2, ""))
    {
        if (FUN2(VAR2, "") || FUN2(VAR2, "") || FUN2(VAR2, "") || FUN2(VAR2, ""))
        {
            FUN3("");
            return -1;
        }
        VAR10 = FUN4(VAR4, FUN2(VAR2, ""));
        if (VAR10 == -1)
        {
            return -1;
        }
        FUN5(VAR10, VAR12, VAR13);
        VAR11 = FUN6(VAR10);
    }
    else
    {
        if (!FUN2(VAR2, ""))
        {
            FUN7(VAR2, "", VAR14);
        }
        if (!FUN2(VAR2, ""))
        {
            FUN7(VAR2, "", VAR15);
        }
        VAR10 = FUN8(VAR2, &VAR11);
        if (VAR10 == -1)
        {
            return -1;
        }
    }
    VAR9 = FUN9(VAR7, "", VAR5, VAR10, VAR11);
    if (!VAR9)
    {
        close(VAR10);
        return -1;
    }
    if (FUN10(VAR9->VAR10, VAR2) < 0)
    {
        return -1;
    }
    if (FUN2(VAR2, ""))
    {
        snprintf(VAR9->VAR16.VAR17, sizeof(VAR9->VAR16.VAR17), "", VAR10);
    }
    else
    {
        const char *VAR18, *VAR19, *VAR20;
        VAR18 = FUN2(VAR2, "");
        VAR19 = FUN2(VAR2, "");
        VAR20 = FUN2(VAR2, "");
        snprintf(VAR9->VAR16.VAR17, sizeof(VAR9->VAR16.VAR17), "", VAR18, VAR19, VAR20);
        if (strcmp(VAR20, "") != 0)
        {
            snprintf(VAR9->VAR21, sizeof(VAR9->VAR21), "", VAR20);
            snprintf(VAR9->VAR22, sizeof(VAR9->VAR22), "", VAR18);
        }
    }
    return 0;
}
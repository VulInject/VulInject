static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const char *VAR7, const char *VAR8)
{
    VAR9 *VAR10 = VAR4->VAR11;
    if (!strcmp(VAR7, ""))
    {
        FUN2(VAR2, VAR12, "", FUN3(VAR8));
        VAR6->VAR13 = FUN3(VAR8);
        if (VAR6->VAR13 > 1)
            FUN2(VAR2, VAR14, "");
    }
    else if (!strcmp(VAR7, ""))
    {
        if (strlen(VAR8) == 6)
            FUN4(VAR2, VAR6, VAR8);
    }
    else if (!strcmp(VAR7, ""))
    {
        int VAR15;
        if (VAR8[strlen(VAR8) - 1] == '')
        {
            FUN2(VAR2, VAR16, "");
            return 0;
        }
        VAR10->VAR17 = 0;
        FUN5(&VAR10->VAR18);
        VAR15 = FUN6(VAR2, &VAR10->VAR18, &VAR10->VAR17, VAR8);
        FUN2(VAR2, VAR12, "", VAR10->VAR18, VAR10->VAR17);
        return VAR15;
    }
    return 0;
}
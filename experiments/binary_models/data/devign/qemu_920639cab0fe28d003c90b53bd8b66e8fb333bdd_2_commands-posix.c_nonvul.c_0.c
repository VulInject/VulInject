void FUN1(const char *VAR1, const char *VAR2, bool VAR3, VAR4 **VAR5)
{
    VAR4 *VAR6 = NULL;
    char *VAR7 = NULL;
    pid_t VAR8;
    int VAR9;
    int VAR10[2] = {-1, -1};
    char *VAR11 = NULL;
    size_t VAR12;
    char *VAR13 = NULL;
    size_t VAR14;
    VAR11 = (char *)FUN2(VAR2, -1, &VAR12, VAR5);
    if (!VAR11)
    {
        return;
    }
    VAR11 = FUN3(char, VAR11, VAR12 + 1);
    VAR11[VAR12] = '';
    if (strchr(VAR11, ''))
    {
        FUN4(VAR5, "");
        goto VAR15;
    }
    if (strchr(VAR1, '') || strchr(VAR1, ''))
    {
        FUN4(VAR5, "");
        goto VAR15;
    }
    VAR13 = FUN5("", VAR1, VAR11);
    VAR14 = strlen(VAR13);
    VAR7 = FUN6("");
    if (!VAR7)
    {
        FUN4(VAR5, "");
        goto VAR15;
    }
    if (FUN7(VAR10) < 0)
    {
        FUN4(VAR5, "");
        goto VAR15;
    }
    VAR8 = FUN8();
    if (VAR8 == 0)
    {
        close(VAR10[1]);
        FUN9();
        FUN10(VAR10[0], 0);
        FUN11(1);
        FUN11(2);
        if (VAR3)
        {
            execle(VAR7, "", "", NULL, VAR16);
        }
        else
        {
            execle(VAR7, "", NULL, VAR16);
        }
        FUN12(VAR17);
    }
    else if (VAR8 < 0)
    {
        FUN13(VAR5, VAR18, "");
        goto VAR15;
    }
    close(VAR10[0]);
    VAR10[0] = -1;
    if (FUN14(VAR10[1], VAR13, VAR14) != VAR14)
    {
        FUN13(VAR5, VAR18, "");
        goto VAR15;
    }
    close(VAR10[1]);
    VAR10[1] = -1;
    FUN15(VAR8, &VAR9, &VAR6);
    if (VAR6)
    {
        FUN16(VAR5, VAR6);
        goto VAR15;
    }
    if (!FUN17(VAR9))
    {
        FUN4(VAR5, "");
        goto VAR15;
    }
    if (FUN18(VAR9))
    {
        FUN4(VAR5, "");
        goto VAR15;
    }
VAR15:
    FUN19(VAR13);
    FUN19(VAR11);
    FUN19(VAR7);
    if (VAR10[0] != -1)
    {
        close(VAR10[0]);
    }
    if (VAR10[1] != -1)
    {
        close(VAR10[1]);
    }
}
static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    struct in_addr VAR5 = {.VAR6 = 0};
    struct VAR7 *VAR8;
    const char *VAR9;
    char VAR10[128];
    char *VAR11;
    int VAR12;
    VAR9 = VAR3;
    if (VAR4)
    {
        if (FUN2(VAR10, sizeof(VAR10), &VAR9, '') < 0)
        {
            goto VAR13;
        }
    }
    else
    {
        if (FUN2(VAR10, sizeof(VAR10), &VAR9, '') < 0)
        {
            goto VAR13;
        }
        if (strcmp(VAR10, "") && VAR10[0] != '')
        {
            goto VAR13;
        }
        if (FUN2(VAR10, sizeof(VAR10), &VAR9, '') < 0)
        {
            goto VAR13;
        }
        if (VAR10[0] != '' && !FUN3(VAR10, &VAR5))
        {
            goto VAR13;
        }
        if (FUN2(VAR10, sizeof(VAR10), &VAR9, '') < 0)
        {
            goto VAR13;
        }
    }
    VAR12 = FUN4(VAR10, &VAR11, 10);
    if (*VAR11 != '' || VAR12 < 1 || VAR12 > 65535)
    {
        goto VAR13;
    }
    VAR8 = FUN5(sizeof(struct VAR7));
    snprintf(VAR10, sizeof(VAR10), "", VAR12);
    if ((strlen(VAR9) > 4) && !FUN6(VAR9, "", 4))
    {
        if (FUN7(VAR2->VAR14, 0, &VAR9[4], &VAR5, VAR12) < 0)
        {
            FUN8(""
                         "",
                         VAR3);
            FUN9(VAR8);
            return -1;
        }
    }
    else
    {
        VAR8->VAR15 = FUN10(VAR10, VAR9, NULL);
        if (!VAR8->VAR15)
        {
            FUN8("", VAR10);
            FUN9(VAR8);
            return -1;
        }
        if (FUN7(VAR2->VAR14, 3, VAR8->VAR15, &VAR5, VAR12) < 0)
        {
            FUN8(""
                         "",
                         VAR3);
            FUN9(VAR8);
            return -1;
        }
        VAR8->VAR5 = VAR5;
        VAR8->VAR12 = VAR12;
        VAR8->VAR14 = VAR2->VAR14;
        FUN11(VAR8->VAR15);
        FUN12(VAR8->VAR15, VAR16, VAR17, NULL, VAR8);
    }
    return 0;
VAR13:
    FUN8("", VAR3);
    return -1;
}
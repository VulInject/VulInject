static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR1 *VAR4 = NULL;
    uint8_t VAR5[1024];
    int VAR6, VAR7, VAR8;
    VAR9 *VAR10 = NULL;
    while ((VAR6 = FUN2(VAR2)) > 0)
    {
        FUN3(VAR2, "", VAR11, &VAR10);
        if (VAR10 && strlen(VAR10))
            break;
    }
    if (VAR6 < 0)
        goto VAR12;
    FUN4(VAR2, VAR13, "", VAR10);
    if (VAR10 && VAR10[0] == '' && !strcmp((VAR10 + 1), VAR3))
    {
        VAR8 = 200;
    }
    else
    {
        VAR8 = VAR14;
    }
    if ((VAR6 = FUN5(VAR2, "", VAR8, VAR11)) < 0)
    {
        FUN4(VAR2, VAR15, "", FUN6(VAR6));
        goto VAR12;
    }
    FUN4(VAR2, VAR13, "", VAR8);
    while ((VAR6 = FUN2(VAR2)) > 0)
        ;
    if (VAR6 < 0)
        goto VAR12;
    fprintf(VAR16, "");
    if (VAR8 != 200)
        goto VAR12;
    fprintf(VAR16, "");
    if ((VAR6 = FUN7(&VAR4, VAR3, VAR17, NULL, NULL)) < 0)
    {
        FUN4(VAR4, VAR15, "", VAR3, FUN6(VAR6));
        goto VAR12;
    }
    for (;;)
    {
        VAR7 = FUN8(VAR4, VAR5, sizeof(VAR5));
        if (VAR7 < 0)
        {
            if (VAR7 == VAR18)
                break;
            FUN4(VAR4, VAR15, "", FUN6(VAR7));
            break;
        }
        FUN9(VAR2, VAR5, VAR7);
        FUN10(VAR2);
    }
VAR12:
    fprintf(VAR16, "");
    FUN10(VAR2);
    fprintf(VAR16, "");
    FUN11(VAR2);
    fprintf(VAR16, "");
    FUN11(VAR4);
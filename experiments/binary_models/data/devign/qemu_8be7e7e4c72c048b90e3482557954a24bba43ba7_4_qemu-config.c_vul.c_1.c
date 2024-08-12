int FUN1(VAR1 *VAR2, VAR3 **VAR4, const char *VAR5)
{
    char VAR6[1024], VAR7[64], VAR8[64], VAR9[64], VAR10[1024];
    Location VAR11;
    VAR3 *VAR12 = NULL;
    VAR13 *VAR14 = NULL;
    int VAR15 = -1, VAR16 = 0;
    FUN2(&VAR11);
    while (fgets(VAR6, sizeof(VAR6), VAR2) != NULL)
    {
        FUN3(VAR5, ++VAR16);
        if (VAR6[0] == '')
        {
            continue;
        }
        if (VAR6[0] == '')
        {
            continue;
        }
        if (sscanf(VAR6, ""%63[^\""]", VAR7, VAR8) == 2)
        {
            VAR12 = FUN4(VAR4, VAR7);
            if (VAR12 == NULL)
                goto VAR17;
            VAR14 = FUN5(VAR12, VAR8, 1);
            continue;
        }
        if (sscanf(VAR6, "", VAR7) == 1)
        {
            VAR12 = FUN4(VAR4, VAR7);
            if (VAR12 == NULL)
                goto VAR17;
            VAR14 = FUN5(VAR12, NULL, 0);
            continue;
        }
        if (sscanf(VAR6, ""%1023[^\""", VAR9, VAR10) == 2)
        {
            if (VAR14 == NULL)
            {
                FUN6("");
                goto VAR17;
            }
            if (FUN7(VAR14, VAR9, VAR10) != 0)
            {
                goto VAR17;
            }
            continue;
        }
        FUN6("");
        goto VAR17;
    }
    if (FUN8(VAR2))
    {
        FUN6("");
        goto VAR17;
    }
    VAR15 = 0;
VAR17:
    FUN9(&VAR11);
    return VAR15;
}
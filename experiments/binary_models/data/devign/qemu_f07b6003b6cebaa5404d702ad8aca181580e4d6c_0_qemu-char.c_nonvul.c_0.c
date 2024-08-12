static VAR1 *FUN1(const char *VAR2, int VAR3, int VAR4)
{
    VAR1 *VAR5 = NULL;
    VAR6 *VAR7 = NULL;
    int VAR8 = -1, VAR9 = 0;
    int VAR10 = 0;
    int VAR11 = 1;
    int VAR12 = 0;
    const char *VAR13;
    VAR13 = VAR2;
    while ((VAR13 = strchr(VAR13, '')))
    {
        VAR13++;
        if (!FUN2(VAR13, "", 6))
        {
            VAR10 = 1;
        }
        else if (!FUN2(VAR13, "", 6))
        {
            VAR11 = 0;
        }
        else if (!FUN2(VAR13, "", 6))
        {
            VAR12 = 1;
        }
        else if (!FUN2(VAR13, "", 3))
        {
            ;
        }
        else
        {
            FUN3("", VAR13);
            goto VAR14;
        }
    }
    if (!VAR10)
        VAR11 = 0;
    VAR5 = FUN4(sizeof(VAR1));
    if (!VAR5)
        goto VAR14;
    VAR7 = FUN4(sizeof(VAR6));
    if (!VAR7)
        goto VAR14;
    if (VAR10)
    {
        VAR5->VAR15 = FUN5(256);
        if (VAR4)
        {
            strcpy(VAR5->VAR15, "");
        }
        else if (VAR3)
        {
            strcpy(VAR5->VAR15, "");
        }
        else
        {
            strcpy(VAR5->VAR15, "");
        }
        VAR9 = strlen(VAR5->VAR15);
    }
    if (VAR4)
    {
        if (VAR10)
        {
            VAR8 = FUN6(VAR2, VAR5->VAR15 + VAR9, 256 - VAR9);
        }
        else
        {
            VAR8 = FUN7(VAR2);
        }
    }
    else
    {
        if (VAR10)
        {
            VAR8 = FUN8(VAR2, VAR5->VAR15 + VAR9, 256 - VAR9, VAR16, 0);
        }
        else
        {
            VAR8 = FUN9(VAR2, VAR16);
        }
    }
    if (VAR8 < 0)
        goto VAR14;
    if (!VAR11)
        FUN10(VAR8);
    VAR7->VAR17 = 0;
    VAR7->VAR8 = -1;
    VAR7->VAR18 = -1;
    VAR7->VAR4 = VAR4;
    VAR7->VAR12 = VAR12 && !VAR4;
    VAR5->VAR19 = VAR7;
    VAR5->VAR20 = VAR21;
    VAR5->VAR22 = VAR23;
    if (VAR10)
    {
        VAR7->VAR18 = VAR8;
        FUN11(VAR7->VAR18, VAR24, NULL, VAR5);
        if (VAR3)
            VAR7->VAR25 = 1;
    }
    else
    {
        VAR7->VAR17 = 1;
        VAR7->VAR8 = VAR8;
        FUN12(VAR8);
        FUN13(VAR5);
    }
    if (VAR10 && VAR11)
    {
        FUN3("", VAR5->VAR15 ? VAR5->VAR15 : VAR2);
        FUN14(VAR5);
        FUN10(VAR7->VAR18);
    }
    return VAR5;
VAR14:
    if (VAR8 >= 0)
        FUN15(VAR8);
    FUN16(VAR7);
    FUN16(VAR5);
    return NULL;
}
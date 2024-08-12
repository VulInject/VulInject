static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = NULL;
    bool VAR10 = false;
    int VAR11 = 0;
    VAR7 = FUN2(VAR3);
    if (!VAR7)
    {
        return -VAR12;
    }
    VAR2->VAR13 = FUN3(VAR14, 1);
    VAR2->VAR13->VAR15 = VAR5 = FUN3(VAR4, 1);
    if (!VAR7->VAR16 || !strcmp(VAR7->VAR16, ""))
    {
        VAR5->VAR17 = VAR18;
    }
    else if (!strcmp(VAR7->VAR16, ""))
    {
        VAR5->VAR17 = VAR18;
    }
    else if (!strcmp(VAR7->VAR16, ""))
    {
        VAR5->VAR17 = VAR19;
        VAR10 = true;
    }
    else if (!strcmp(VAR7->VAR16, ""))
    {
        VAR5->VAR17 = VAR18;
        FUN4("");
    }
    else
    {
        VAR11 = -VAR12;
        goto VAR20;
    }
    VAR11 = FUN5(VAR2, VAR7->VAR21);
    if (VAR11 < 0)
    {
        goto VAR20;
    }
    VAR9 = FUN6(VAR7->VAR22);
    if (VAR9->VAR23 > 1 || (VAR10 && !VAR9->VAR23) || (!VAR10 && VAR9->VAR23))
    {
        VAR11 = -VAR12;
        goto VAR20;
    }
    if (VAR10)
    {
        if (VAR7->VAR13 || VAR7->VAR24)
        {
            VAR11 = -VAR12;
            goto VAR20;
        }
        if (strcmp(VAR9->VAR25[0].VAR26, ""))
        {
            VAR11 = -VAR12;
            goto VAR20;
        }
        VAR5->VAR27.VAR28.VAR21 = FUN7(VAR9->VAR25[0].VAR15);
    }
    else
    {
        VAR5->VAR27.VAR29.VAR30 = FUN7(VAR7->VAR13 ? VAR7->VAR13 : "");
        if (VAR7->VAR24)
        {
            VAR5->VAR27.VAR29.VAR24 = FUN8("", VAR7->VAR24);
        }
        else
        {
            VAR5->VAR27.VAR29.VAR24 = FUN8("", VAR31);
        }
    }
VAR20:
    if (VAR9)
    {
        FUN9(VAR9);
    }
    FUN10(VAR7);
    return VAR11;
}
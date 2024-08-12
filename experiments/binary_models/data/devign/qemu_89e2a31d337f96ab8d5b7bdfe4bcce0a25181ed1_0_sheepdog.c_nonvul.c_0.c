static int FUN1(VAR1 *VAR2, const char *VAR3, char *VAR4, VAR5 *VAR6, char *VAR7)
{
    VAR8 *VAR9;
    VAR10 *VAR11 = NULL;
    int VAR12 = 0;
    VAR9 = FUN2(VAR3);
    if (!VAR9)
    {
        return -VAR13;
    }
    if (!strcmp(VAR9->VAR14, ""))
    {
        VAR2->VAR15 = false;
    }
    else if (!strcmp(VAR9->VAR14, ""))
    {
        VAR2->VAR15 = false;
    }
    else if (!strcmp(VAR9->VAR14, ""))
    {
        VAR2->VAR15 = true;
    }
    else
    {
        VAR12 = -VAR13;
        goto VAR16;
    }
    if (VAR9->VAR17 == NULL || !strcmp(VAR9->VAR17, ""))
    {
        VAR12 = -VAR13;
        goto VAR16;
    }
    FUN3(VAR4, VAR18, VAR9->VAR17 + 1);
    VAR11 = FUN4(VAR9->VAR19);
    if (VAR11->VAR20 > 1 || (VAR2->VAR15 && !VAR11->VAR20) || (!VAR2->VAR15 && VAR11->VAR20))
    {
        VAR12 = -VAR13;
        goto VAR16;
    }
    if (VAR2->VAR15)
    {
        if (VAR9->VAR21 || VAR9->VAR22 || strcmp(VAR11->VAR23[0].VAR24, ""))
        {
            VAR12 = -VAR13;
            goto VAR16;
        }
        VAR2->VAR25 = FUN5(VAR11->VAR23[0].VAR26);
    }
    else
    {
        VAR2->VAR25 = FUN6("", VAR9->VAR21 ?: VAR27, VAR9->VAR22 ?: VAR28);
    }
    if (VAR9->VAR29)
    {
        if (!FUN7(VAR9->VAR29, VAR6, VAR7))
        {
            VAR12 = -VAR13;
            goto VAR16;
        }
    }
    else
    {
        *VAR6 = VAR30;
    }
VAR16:
    if (VAR11)
    {
        FUN8(VAR11);
    }
    FUN9(VAR9);
    return VAR12;
}
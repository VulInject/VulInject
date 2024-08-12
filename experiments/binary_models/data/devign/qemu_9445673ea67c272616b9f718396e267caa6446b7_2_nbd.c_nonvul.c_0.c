static int FUN1(const char *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5;
    const char *VAR6;
    VAR7 *VAR8 = NULL;
    int VAR9 = 0;
    bool VAR10;
    VAR5 = FUN2(VAR1);
    if (!VAR5)
    {
        return -VAR11;
    }
    if (!strcmp(VAR5->VAR12, ""))
    {
        VAR10 = false;
    }
    else if (!strcmp(VAR5->VAR12, ""))
    {
        VAR10 = false;
    }
    else if (!strcmp(VAR5->VAR12, ""))
    {
        VAR10 = true;
    }
    else
    {
        VAR9 = -VAR11;
        goto VAR13;
    }
    VAR6 = VAR5->VAR14 ? VAR5->VAR14 : "";
    VAR6 += strspn(VAR6, "");
    if (VAR6[0])
    {
        FUN3(VAR3, "", FUN4(VAR6));
    }
    VAR8 = FUN5(VAR5->VAR15);
    if (VAR8->VAR16 > 1 || (VAR10 && !VAR8->VAR16) || (!VAR10 && VAR8->VAR16))
    {
        VAR9 = -VAR11;
        goto VAR13;
    }
    if (VAR10)
    {
        if (VAR5->VAR17 || VAR5->VAR18 || strcmp(VAR8->VAR6[0].VAR19, ""))
        {
            VAR9 = -VAR11;
            goto VAR13;
        }
        FUN3(VAR3, "", FUN4(""));
        FUN3(VAR3, "", FUN4(VAR8->VAR6[0].VAR20));
    }
    else
    {
        VAR21 *VAR22;
        char *VAR23;
        if (!VAR5->VAR17)
        {
            VAR9 = -VAR11;
            goto VAR13;
        }
        if (VAR5->VAR17[0] == '')
        {
            VAR22 = FUN6(VAR5->VAR17, 1, strlen(VAR5->VAR17) - 2);
        }
        else
        {
            VAR22 = FUN4(VAR5->VAR17);
        }
        FUN3(VAR3, "", FUN4(""));
        FUN3(VAR3, "", VAR22);
        VAR23 = FUN7("", VAR5->VAR18 ?: VAR24);
        FUN3(VAR3, "", FUN4(VAR23));
        FUN8(VAR23);
    }
VAR13:
    if (VAR8)
    {
        FUN9(VAR8);
    }
    FUN10(VAR5);
    return VAR9;
}